--- chrome/browser/signin/signin_util.h.orig	2025-11-01 06:40:37 UTC
+++ chrome/browser/signin/signin_util.h
@@ -203,7 +203,7 @@ bool IsSyncingUserSelectableTypesAllowedByPolicy(
     const syncer::SyncService* sync_service,
     const syncer::UserSelectableTypeSet& types);
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_BSD)
 // True if the user has explicitly disabled syncing history, tabs or saved tab
 // groups through the settings.
 // This method does not take into account the feature flag
