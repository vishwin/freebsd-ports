--- components/autofill_assistant/browser/autofill_assistant_impl.cc.orig	2022-10-01 07:40:07 UTC
+++ components/autofill_assistant/browser/autofill_assistant_impl.cc
@@ -150,7 +150,7 @@ void AutofillAssistantImpl::GetCapabilitiesByHashPrefi
   client_context.set_platform_type(ClientContextProto::PLATFORM_TYPE_ANDROID);
 #endif
 #if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_MAC) || \
-    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_WIN) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   client_context.set_platform_type(ClientContextProto::PLATFORM_TYPE_DESKTOP);
 #endif
 
