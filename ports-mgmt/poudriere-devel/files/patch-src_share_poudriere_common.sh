diff --git src/share/poudriere/common.sh src/share/poudriere/common.sh
index 9e996f47..999002cf 100644
--- src/share/poudriere/common.sh
+++ src/share/poudriere/common.sh
@@ -2478,9 +2478,6 @@ setup_xdev() {
 
 	msg_n "Setting up native-xtools environment in jail..."
 	cat > "${mnt}/etc/make.nxb.conf" <<-EOF
-	CC=/nxb-bin/usr/bin/cc
-	CPP=/nxb-bin/usr/bin/cpp
-	CXX=/nxb-bin/usr/bin/c++
 	NM=/nxb-bin/usr/bin/nm
 	LD=/nxb-bin/usr/bin/ld
 	OBJCOPY=/nxb-bin/usr/bin/objcopy
@@ -2511,7 +2508,7 @@ setup_xdev() {
 			usr/bin/find usr/bin/gzcat usr/bin/awk \
 			usr/bin/touch usr/bin/sed usr/bin/patch \
 			usr/bin/install usr/bin/gunzip \
-			usr/bin/readelf usr/bin/sort \
+			usr/bin/readelf usr/bin/sort usr/bin/strings \
 			usr/bin/tar usr/bin/wc usr/bin/xargs usr/sbin/chown bin/cp \
 			bin/cat bin/chmod bin/echo bin/expr \
 			bin/hostname bin/ln bin/ls bin/mkdir bin/mv \
