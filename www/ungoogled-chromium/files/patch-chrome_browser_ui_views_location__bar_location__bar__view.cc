--- chrome/browser/ui/views/location_bar/location_bar_view.cc.orig	2025-11-01 06:40:37 UTC
+++ chrome/browser/ui/views/location_bar/location_bar_view.cc
@@ -527,7 +527,7 @@ bool LocationBarView::IsInitialized() const {
 }
 
 void LocationBarView::OnPopupOpened() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // It's not great for promos to overlap the omnibox if the user opens the
   // drop-down after showing the promo. This especially causes issues on Mac and
   // Linux due to z-order/rendering issues, see crbug.com/1225046 and
