--- setup.py.orig	2023-08-08 22:23:35 UTC
+++ setup.py
@@ -5,7 +5,7 @@ setup(
 setup(
     name="emmet-core",
     use_scm_version={"root": "..", "relative_to": __file__},
-    setup_requires=["setuptools_scm>=6,<8"],
+    setup_requires=["setuptools_scm"],
     description="Core Emmet Library",
     author="The Materials Project",
     author_email="feedback@materialsproject.org",
