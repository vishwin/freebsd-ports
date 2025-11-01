--- chrome/browser/extensions/api/webstore_private/webstore_private_api.cc.orig	2025-10-30 15:44:36 UTC
+++ chrome/browser/extensions/api/webstore_private/webstore_private_api.cc
@@ -937,7 +937,7 @@ void WebstorePrivateBeginInstallWithManifest3Function:
 #if BUILDFLAG(IS_CHROMEOS)
       RequestExtensionApproval(contents);
       return;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
       // Shows a parental permission dialog directly bypassing the extension
       // install dialog view. The parental permission dialog contains a superset
       // of data from the extension install dialog: requested extension
