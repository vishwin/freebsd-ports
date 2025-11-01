--- components/regional_capabilities/regional_capabilities_switches.cc.orig	2025-10-30 15:44:36 UTC
+++ components/regional_capabilities/regional_capabilities_switches.cc
@@ -23,7 +23,7 @@ BASE_FEATURE(kResolveRegionalCapabilitiesFromDevice,
              base::FEATURE_ENABLED_BY_DEFAULT);
 #endif
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD) 
 BASE_FEATURE(kUseFinchPermanentCountryForFetchCountryId,
              "UseFinchPermanentCountyForFetchCountryId",
              base::FEATURE_DISABLED_BY_DEFAULT);
