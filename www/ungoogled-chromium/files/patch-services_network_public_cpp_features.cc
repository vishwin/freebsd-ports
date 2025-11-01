--- services/network/public/cpp/features.cc.orig	2025-11-01 06:40:37 UTC
+++ services/network/public/cpp/features.cc
@@ -348,7 +348,7 @@ BASE_FEATURE(kAvoidResourceRequestCopies, base::FEATUR
 // https://github.com/WICG/document-isolation-policy
 BASE_FEATURE(kDocumentIsolationPolicy,
 #if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_WIN) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_LINUX)
+    BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
              base::FEATURE_ENABLED_BY_DEFAULT
 #else
              base::FEATURE_DISABLED_BY_DEFAULT
