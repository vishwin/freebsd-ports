--- extensions/browser/api/api_browser_context_keyed_service_factories.cc.orig	2024-06-25 12:08:48 UTC
+++ extensions/browser/api/api_browser_context_keyed_service_factories.cc
@@ -102,7 +102,7 @@ void EnsureApiBrowserContextKeyedServiceFactoriesBuilt
 #endif
   MessageService::GetFactoryInstance();
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_WIN) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
   NetworkingPrivateEventRouterFactory::GetInstance();
 #endif
   OffscreenDocumentManager::GetFactory();
