--- src/3rdparty/chromium/components/variations/service/variations_service.cc.orig	2023-05-31 08:12:17 UTC
+++ src/3rdparty/chromium/components/variations/service/variations_service.cc
@@ -95,7 +95,7 @@ std::string GetPlatformString() {
   return "android";
 #elif BUILDFLAG(IS_FUCHSIA)
   return "fuchsia";
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || BUILDFLAG(IS_SOLARIS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) || BUILDFLAG(IS_SOLARIS) || BUILDFLAG(IS_BSD)
   // Default BSD and SOLARIS to Linux to not break those builds, although these
   // platforms are not officially supported by Chrome.
   return "linux";
