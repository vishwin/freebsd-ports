diff --git src/share/poudriere/common.sh src/share/poudriere/common.sh
index af13d175..5f9972a0 100755
--- src/share/poudriere/common.sh
+++ src/share/poudriere/common.sh
@@ -2742,9 +2742,6 @@ setup_xdev() {
 
 	msg_n "Setting up native-xtools environment in jail..."
 	cat > "${mnt}/etc/make.nxb.conf" <<-EOF
-	CC=/nxb-bin/usr/bin/cc
-	CPP=/nxb-bin/usr/bin/cpp
-	CXX=/nxb-bin/usr/bin/c++
 	NM=/nxb-bin/usr/bin/nm
 	LD=/nxb-bin/usr/bin/ld
 	OBJCOPY=/nxb-bin/usr/bin/objcopy
@@ -2757,6 +2754,9 @@ setup_xdev() {
 	STRINGS=/nxb-bin/usr/bin/strings
 	AWK=/nxb-bin/usr/bin/awk
 	FLEX=/nxb-bin/usr/bin/flex
+	FIND=/nxb-bin/usr/bin/find
+	GREP=/nxb-bin/usr/bin/grep
+	XARGS=/nxb-bin/usr/bin/xargs
 	EOF
 
 	# as(1) has been removed in FreeBSD 13.0.  Just check if it's present
@@ -2775,7 +2775,7 @@ setup_xdev() {
 			usr/bin/find usr/bin/gzcat usr/bin/awk \
 			usr/bin/touch usr/bin/sed usr/bin/patch \
 			usr/bin/install usr/bin/gunzip \
-			usr/bin/readelf usr/bin/sort \
+			usr/bin/readelf usr/bin/sort usr/bin/strings \
 			usr/bin/tar usr/bin/wc usr/bin/xargs usr/sbin/chown bin/cp \
 			bin/cat bin/chmod bin/echo bin/expr \
 			bin/hostname bin/ln bin/ls bin/mkdir bin/mv \
