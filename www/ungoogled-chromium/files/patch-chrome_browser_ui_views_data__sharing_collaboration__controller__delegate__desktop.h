--- chrome/browser/ui/views/data_sharing/collaboration_controller_delegate_desktop.h.orig	2025-11-01 06:40:37 UTC
+++ chrome/browser/ui/views/data_sharing/collaboration_controller_delegate_desktop.h
@@ -81,7 +81,7 @@ class CollaborationControllerDelegateDesktop
       std::optional<data_sharing::mojom::GroupActionProgress> progress);
 
   void ShowErrorDialog(const ErrorInfo& error);
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   void MaybeShowSignInUiForHistorySyncOptin();
 #endif
   void MaybeShowSignInAndSyncUi();
