--- chrome/browser/renderer_context_menu/render_view_context_menu.cc.orig	2025-11-01 06:40:37 UTC
+++ chrome/browser/renderer_context_menu/render_view_context_menu.cc
@@ -244,7 +244,7 @@
 #include "url/origin.h"
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "components/webapps/isolated_web_apps/scheme.h"
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) ||
         // BUILDFLAG(IS_CHROMEOS)
@@ -4989,7 +4989,7 @@ void RenderViewContextMenu::OpenLinkInSplitView() {
 #endif  // !BUILDFLAG(IS_ANDROID)
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 bool RenderViewContextMenu::IsLinkToIsolatedWebApp() const {
   // Using `unfiltered_link_url`, because `link_url` is being replaced with
   // about:blank#blocked if the source is a normal site.
