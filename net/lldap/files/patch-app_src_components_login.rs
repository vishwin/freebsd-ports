--- app/src/components/login.rs.orig	2026-04-30 08:39:03 UTC
+++ app/src/components/login.rs
@@ -27,7 +27,7 @@ pub struct FormModel {
 pub struct FormModel {
     #[validate(length(min = 1, message = "Missing username"))]
     username: String,
-    #[validate(length(min = 8, message = "Invalid password. Min length: 8"))]
+    #[validate(length(min = 1, message = "Missing password"))]
     password: String,
 }

