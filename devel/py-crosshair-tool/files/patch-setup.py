--- setup.py.orig	2026-07-07 08:23:29 UTC
+++ setup.py
@@ -0,0 +1,14 @@
+from setuptools import Extension, find_packages, setup
+
+setup(
+    name="crosshair-tool",
+    version="0.0.105",  # Update this in crosshair/__init__.py too
+    author="Phillip Schanely",
+    author_email="pschanely+vE7F@gmail.com",
+    ext_modules=[
+        Extension(
+            "_crosshair_tracers",
+            sources=["crosshair/_tracers.c"],
+        ),
+    ],
+)
