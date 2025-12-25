--- src/share/poudriere/common.sh.orig	2025-12-13 21:04:46 UTC
+++ src/share/poudriere/common.sh
@@ -3046,6 +3046,7 @@ do_portbuild_mounts() {
 		    "${mnt:?}/.npkg" \
 		    "${mnt:?}/var/db/ports" \
 		    "${mnt:?}${HOME:?}/.ccache" \
+		    "${mnt:?}/var/run/kvstore" \
 		    "${mnt:?}/usr/home"
 		for o in ${OVERLAYS}; do
 			mkdir -p "${mnt:?}${OVERLAYSDIR:?}/${o:?}"
@@ -3058,6 +3059,9 @@ do_portbuild_mounts() {
 	if [ -d "${CCACHE_DIR:-/nonexistent}" ]; then
 		${NULLMOUNT} "${CCACHE_DIR:?}" "${mnt:?}${HOME:?}/.ccache"
 	fi
+	if [ -d "${CCACHE_KVSTORE:-/nonexistent}" ]; then
+		${NULLMOUNT} "${CCACHE_KVSTORE:?}" "${mnt:?}/var/run/kvstore"
+	fi
 	case "${MFSSIZE:+set}" in
 	set)
 		mdmfs -t -S -o async -s ${MFSSIZE} md "${mnt:?}/wrkdirs"
@@ -3610,21 +3614,57 @@ setup_xdev() {
 
 	msg_n "Setting up native-xtools environment in jail..."
 	cat > "${mnt:?}/etc/make.nxb.conf" <<-EOF
-	CC=/nxb-bin/usr/bin/cc
-	CPP=/nxb-bin/usr/bin/cpp
-	CXX=/nxb-bin/usr/bin/c++
 	NM=/nxb-bin/usr/bin/nm
 	LD=/nxb-bin/usr/bin/ld
-	OBJCOPY=/nxb-bin/usr/bin/objcopy
 	SIZE=/nxb-bin/usr/bin/size
-	STRIPBIN=/nxb-bin/usr/bin/strip
-	SED=/nxb-bin/usr/bin/sed
 	RANLIB=/nxb-bin/usr/bin/ranlib
-	YACC=/nxb-bin/usr/bin/yacc
-	MAKE=/nxb-bin/usr/bin/make
 	STRINGS=/nxb-bin/usr/bin/strings
 	AWK=/nxb-bin/usr/bin/awk
+	BASENAME=/nxb-bin/usr/bin/basename
+	BSDMAKE=/nxb-bin/usr/bin/make
+	BZCAT=/nxb-bin/usr/bin/bzcat
+	BZIP2_CMD=/nxb-bin/usr/bin/bzip2
+	CAT=/nxb-bin/bin/cat
+	CHGRP=/nxb-bin/usr/bin/chgrp
+	CHMOD=/nxb-bin/bin/chmod
+	CHOWN=/nxb-bin/usr/sbin/chown
+	CP=/nxb-bin/bin/cp
+	DIFF=/nxb-bin/usr/bin/diff
+	DIRNAME=/nxb-bin/usr/bin/dirname
+	EGREP=/nxb-bin/usr/bin/egrep
+	EXPR=/nxb-bin/bin/expr
+	FIND=/nxb-bin/usr/bin/find
 	FLEX=/nxb-bin/usr/bin/flex
+	GREP=/nxb-bin/usr/bin/grep
+	GUNZIP_CMD=/nxb-bin/usr/bin/gunzip -f
+	GZCAT=/nxb-bin/usr/bin/gzcat
+	GZIP_CMD=/nxb-bin/usr/bin/gzip -nf ${GZIP}
+	ID=/nxb-bin/usr/bin/id
+	LN=/nxb-bin/bin/ln
+	LS=/nxb-bin/bin/ls
+	MKDIR=/nxb-bin/bin/mkdir -p
+	MKTEMP=/nxb-bin/usr/bin/mktemp
+	MV=/nxb-bin/bin/mv
+	OBJCOPY=/nxb-bin/usr/bin/objcopy
+	PS_CMD=/nxb-bin/bin/ps
+	READELF=/nxb-bin/usr/bin/readelf
+	REALPATH=/nxb-bin/bin/realpath
+	RM=/nxb-bin/bin/rm -f
+	RMDIR=/nxb-bin/bin/rmdir
+	SED=/nxb-bin/usr/bin/sed
+	SETENV=/nxb-bin/usr/bin/env
+	SH=/nxb-bin/bin/sh
+	SORT=/nxb-bin/usr/bin/sort
+	STRIP_CMD=/nxb-bin/usr/bin/strip
+	SYSCTL=/nxb-bin/sbin/sysctl
+	TR=/nxb-bin/usr/bin/tr
+	UNZIP_NATIVE_CMD=/nxb-bin/usr/bin/unzip
+	XARGS=/nxb-bin/usr/bin/xargs
+	YACC=/nxb-bin/usr/bin/yacc
+	XZCAT=/nxb-bin/usr/bin/xzcat ${XZ}
+	XZ_CMD=/nxb-bin/usr/bin/xz ${XZ}
+	MD5=/nxb-bin/sbin/md5
+	SHA256=/nxb-bin/sbin/sha256
 	EOF
 
 	# as(1) has been removed in FreeBSD 13.0.  Just check if it's present
@@ -3643,7 +3683,7 @@ setup_xdev() {
 			usr/bin/find usr/bin/gzcat usr/bin/awk \
 			usr/bin/touch usr/bin/sed usr/bin/patch \
 			usr/bin/install usr/bin/gunzip \
-			usr/bin/readelf usr/bin/sort \
+			usr/bin/readelf usr/bin/sort usr/bin/strings \
 			usr/bin/tar usr/bin/wc usr/bin/xargs usr/sbin/chown bin/cp \
 			bin/cat bin/chmod bin/echo bin/expr \
 			bin/hostname bin/ln bin/ls bin/mkdir bin/mv \
