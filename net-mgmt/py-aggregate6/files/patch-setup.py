--- setup.py.orig	2024-11-12 16:53:30 UTC
+++ setup.py
@@ -77,12 +77,12 @@ setup(
         'Programming Language :: Python :: 3.12'
     ],
     tests_require=["mock;python_version<'3.3'", "coverage"],
-    install_requires=["py-radix==0.10.0"] + (
+    install_requires=["py-radix>=0.10.0"] + (
         ["future", "ipaddress"] if sys.version_info.major == 2 else []
     ),
     packages=find_packages(exclude=['tests', 'tests.*']),
     entry_points={'console_scripts':
                   ['aggregate6 = aggregate6.aggregate6:main']},
-    data_files=[('man/man7', ['aggregate6.7'])],
+    data_files=[('share/man/man7', ['aggregate6.7'])],
     test_suite='nose.collector'
 )
