--- src/3rdparty/chromium/ui/gtk/printing/print_dialog_gtk.cc.orig	2024-09-30 07:45:04 UTC
+++ src/3rdparty/chromium/ui/gtk/printing/print_dialog_gtk.cc
@@ -439,7 +439,7 @@ void PrintDialogGtk::ShowDialog(
   GtkPrintCapabilities cap = static_cast<GtkPrintCapabilities>(
       GTK_PRINT_CAPABILITY_GENERATE_PDF | GTK_PRINT_CAPABILITY_PAGE_SET |
       GTK_PRINT_CAPABILITY_COPIES | GTK_PRINT_CAPABILITY_COLLATE |
-      GTK_PRINT_CAPABILITY_REVERSE);
+      GTK_PRINT_CAPABILITY_REVERSE | GTK_PRINT_CAPABILITY_GENERATE_PS);
   gtk_print_unix_dialog_set_manual_capabilities(
       GTK_PRINT_UNIX_DIALOG(dialog_.get()), cap);
   gtk_print_unix_dialog_set_embed_page_setup(
