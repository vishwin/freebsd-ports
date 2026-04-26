--- glamor/glamor.h.orig	2026-04-25 18:41:16.101162000 -0700
+++ glamor/glamor.h	2026-04-25 18:41:22.504221000 -0700
@@ -152,6 +152,23 @@
  * */
 extern _X_EXPORT Bool glamor_supports_pixmap_import_export(ScreenPtr screen);
 
+/* @glamor_fds_from_pixmap: Get a dma-buf fd from a pixmap.
+ *
+ * @screen: Current screen pointer.
+ * @pixmap: The pixmap from which we want the fd.
+ * @fds, @strides, @offsets: Pointers to fill info of each plane.
+ * @modifier: Pointer to fill the modifier of the buffer.
+ *
+ * the pixmap and the buffer associated by the fds will share the same
+ * content. The caller is responsible to close the returned file descriptors.
+ * Returns the number of planes, -1 on error.
+ * */
+extern _X_EXPORT int glamor_fds_from_pixmap(ScreenPtr screen,
+                                            PixmapPtr pixmap,
+                                            int *fds,
+                                            uint32_t *strides, uint32_t *offsets,
+                                            uint64_t *modifier);
+
 /* @glamor_fd_from_pixmap: Get a dma-buf fd from a pixmap.
  *
  * @screen: Current screen pointer.
@@ -217,6 +234,31 @@
 extern _X_EXPORT struct gbm_bo *glamor_gbm_bo_from_pixmap(ScreenPtr screen,
                                                           PixmapPtr pixmap);
 
+/* @glamor_pixmap_from_fds: Creates a pixmap to wrap a dma-buf fds.
+ *
+ * @screen: Current screen pointer.
+ * @num_fds: Number of fds to import
+ * @fds: The dma-buf fds to import.
+ * @width: The width of the buffers.
+ * @height: The height of the buffers.
+ * @stride: The stride of the buffers.
+ * @depth: The depth of the buffers.
+ * @bpp: The bpp of the buffers.
+ * @modifier: The modifier of the buffers.
+ *
+ * Returns a valid pixmap if the import succeeded, else NULL.
+ * */
+extern _X_EXPORT PixmapPtr glamor_pixmap_from_fds(ScreenPtr screen,
+                                                  CARD8 num_fds,
+                                                  const int *fds,
+                                                  CARD16 width,
+                                                  CARD16 height,
+                                                  const CARD32 *strides,
+                                                  const CARD32 *offsets,
+                                                  CARD8 depth,
+                                                  CARD8 bpp,
+                                                  uint64_t modifier);
+
 /* @glamor_pixmap_from_fd: Creates a pixmap to wrap a dma-buf fd.
  *
  * @screen: Current screen pointer.
@@ -257,9 +299,22 @@
                                                  CARD8 depth,
                                                  CARD8 bpp);
 
+extern _X_EXPORT Bool glamor_get_formats(ScreenPtr screen,
+                                         CARD32 *num_formats,
+                                         CARD32 **formats);
+
+extern _X_EXPORT Bool glamor_get_modifiers(ScreenPtr screen,
+                                           uint32_t format,
+                                           uint32_t *num_modifiers,
+                                           uint64_t **modifiers);
+
+extern _X_EXPORT Bool glamor_get_drawable_modifiers(DrawablePtr draw,
+                                                    uint32_t format,
+                                                    uint32_t *num_modifiers,
+                                                    uint64_t **modifiers);
+
 extern _X_EXPORT void glamor_set_drawable_modifiers_func(ScreenPtr screen,
                                                          GetDrawableModifiersFuncPtr func);
-
 #ifdef GLAMOR_FOR_XORG
 
 #define GLAMOR_EGL_MODULE_NAME  "glamoregl"
