--- ui/base/x/x11_cursor_loader.cc.orig	2025-03-24 20:50:14 UTC
+++ ui/base/x/x11_cursor_loader.cc
@@ -41,7 +41,7 @@
 #include "ui/gfx/x/connection.h"
 #include "ui/gfx/x/xproto.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "ui/linux/linux_ui.h"
 #endif
 
@@ -86,7 +86,11 @@ std::string CursorPathFromLibXcursor() {
     void operator()(void* ptr) const { dlclose(ptr); }
   };
 
+#if BUILDFLAG(IS_BSD)
+  std::unique_ptr<void, DlCloser> lib(dlopen("libXcursor.so", RTLD_LAZY));
+#else
   std::unique_ptr<void, DlCloser> lib(dlopen("libXcursor.so.1", RTLD_LAZY));
+#endif
   if (!lib)
     return "";
 
@@ -215,7 +219,7 @@ scoped_refptr<base::RefCountedMemory> ReadCursorFile(
     const std::string& rm_xcursor_theme) {
   constexpr const char kDefaultTheme[] = "default";
   std::string themes[] = {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     // The toolkit theme has the highest priority.
     LinuxUi::instance() ? LinuxUi::instance()->GetCursorThemeName()
                         : std::string(),
@@ -405,7 +409,7 @@ uint32_t XCursorLoader::GetPreferredCursorSize() const
     return size;
   }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Let the toolkit have the next say.
   auto* linux_ui = LinuxUi::instance();
   size = linux_ui ? linux_ui->GetCursorThemeSize() : 0;
