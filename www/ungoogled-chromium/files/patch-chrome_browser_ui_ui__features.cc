--- chrome/browser/ui/ui_features.cc.orig	2025-11-01 06:40:37 UTC
+++ chrome/browser/ui/ui_features.cc
@@ -39,7 +39,7 @@ BASE_FEATURE(kCloseOmniboxPopupOnInactiveAreaClick,
 BASE_FEATURE(kCreateNewTabGroupAppMenuTopLevel,
              base::FEATURE_DISABLED_BY_DEFAULT);
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Enables the feature to remove the last confirmation dialog when relaunching
 // to update Chrome.
 BASE_FEATURE(kFewerUpdateConfirmations, base::FEATURE_ENABLED_BY_DEFAULT);
@@ -149,7 +149,7 @@ BASE_FEATURE_PARAM(int,
                    "drop_target_hide_for_os_width",
 #if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_WIN)
                    32
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
                    50
 #else
                    0
@@ -435,7 +435,7 @@ BASE_FEATURE(kViewsFirstRunDialog, base::FEATURE_DISAB
 BASE_FEATURE(kViewsJSAppModalDialog, base::FEATURE_DISABLED_BY_DEFAULT);
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 BASE_FEATURE(kUsePortalAccentColor, base::FEATURE_ENABLED_BY_DEFAULT);
 #endif
 
@@ -639,7 +639,7 @@ bool IsBookmarkTabGroupConversionEnabled() {
   return base::FeatureList::IsEnabled(kBookmarkTabGroupConversion);
 }
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 BASE_FEATURE(kSessionRestoreInfobar, base::FEATURE_DISABLED_BY_DEFAULT);
 
 BASE_FEATURE_PARAM(bool,
