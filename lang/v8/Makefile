# We follow the stable channel on https://omahaproxy.appspot.com/
# https://chromium.googlesource.com/v8/v8/+/refs/heads/9.1-lkgr

PORTNAME=	v8
PORTVERSION=	9.1.269.39
CATEGORIES=	lang
MASTER_SITES=	LOCAL/sunpoet/v8/${PORTVERSION:R:R}
DISTFILES=	build-${BUILD_REV}.tar.gz \
		buildtools-${BUILDTOOLS_REV}.tar.gz \
		clang-${CLANG_REV}.tar.gz \
		common-${COMMON_REV}.tar.gz \
		googletest-${GOOGLETEST_REV}.tar.gz \
		icu-${ICU_REV}.tar.gz \
		zlib-${ZLIB_REV}.tar.gz
EXTRACT_ONLY=	${DISTNAME}.tar.gz
DIST_SUBDIR=	v8/${PORTVERSION:R:R}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Open source JavaScript engine by Google

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	binutils>=0:devel/binutils \
		gn:devel/gn \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=0:devel/py-Jinja2@${PY_FLAVOR}
LIB_DEPENDS=	libicudata.so:devel/icu

USES=		cpe gnome ninja pkgconfig python:3.5+,build tar:xz
USE_GNOME=	glib20

BINARY_ALIAS=	python=${PYTHON_CMD}
MAKE_ARGS=	-C out/Release
USE_LDCONFIG=	yes

SUB_FILES=	v8.pc v8_libbase.pc v8_libplatform.pc

USE_GITHUB=	yes

CPE_VENDOR=	google

BUILD_REV=	77edba11e25386aa719d4f08c3ce2d8c4f868c15
BUILDTOOLS_REV=	5dbd89c9d9c0b0ff47cefdc2bc421b8c9a1c5a21
CLANG_REV=	a387faa2a6741f565e45d78804a49a0e55de5909
COMMON_REV=	cab90cbdaaf4444d67aef6ce3cef09fc5fdeb560
GOOGLETEST_REV=	07f4869221012b16b7f9ee685d94856e1fc9f361
ICU_REV=	81d656878ec611cb0b42d52c82e9dae93920d9ba
ZLIB_REV=	09490503d0f201b81e03f5ca0ab8ba8ee76d4a8e

# Run "gn args --list out/Release" for all variables.
# Some parts don't have use_system_* flag, and can be turned on/off by using
# replace_gn_files.py script, some parts just turned on/off for target host
# OS "target_os == is_bsd", like libusb, libpci.
GN_ARGS+=	clang_use_chrome_plugins=false \
		extra_cxxflags="${CXXFLAGS}" \
		extra_ldflags="${LDFLAGS}" \
		is_clang=true \
		treat_warnings_as_errors=false \
		use_aura=true \
		use_lld=true \
		use_custom_libcxx=false \
		v8_use_external_startup_data=false

post-extract:
	@${MKDIR} ${WRKSRC}/base/trace_event/common ${WRKSRC}/build ${WRKSRC}/buildtools ${WRKSRC}/third_party/googletest/src ${WRKSRC}/third_party/icu ${WRKSRC}/third_party/zlib ${WRKSRC}/tools/clang
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/build-${BUILD_REV}.tar.gz -C ${WRKSRC}/build
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/buildtools-${BUILDTOOLS_REV}.tar.gz -C ${WRKSRC}/buildtools
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/clang-${CLANG_REV}.tar.gz -C ${WRKSRC}/tools/clang
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/common-${COMMON_REV}.tar.gz -C ${WRKSRC}/base/trace_event/common
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/googletest-${GOOGLETEST_REV}.tar.gz -C ${WRKSRC}/third_party/googletest/src
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/icu-${ICU_REV}.tar.gz -C ${WRKSRC}/third_party/icu
	@${TAR} -xf ${DISTDIR}/${DIST_SUBDIR}/zlib-${ZLIB_REV}.tar.gz -C ${WRKSRC}/third_party/zlib

post-patch:
	@${REINPLACE_CMD} -i '' 's|%%LOCALBASE%%|${LOCALBASE}|' ${WRKSRC}/build/toolchain/gcc_toolchain.gni ${WRKSRC}/buildtools/third_party/libc++/BUILD.gn
	# https://github.com/klzgrad/naiveproxy/blob/master/src/build/config/gclient_args.gni
	${ECHO_CMD} 'checkout_google_benchmark = false' > ${WRKSRC}/build/config/gclient_args.gni

# Use ICU from ports and create needed directory
pre-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} ${PYTHON_CMD} ./build/linux/unbundle/replace_gn_files.py --system-libraries icu # || ${FALSE}
	@${MKDIR} ${WRKSRC}/out/Release/gen/shim_headers/icui18n_shim/third_party/icu/source/i18n/unicode ${WRKSRC}/out/Release/gen/shim_headers/icuuc_shim/third_party/icu/source/common/unicode
	@${MKDIR} ${WRKSRC}/out/Release/gen/include
	@${CP} -R ${LOCALBASE}/include/unicode ${WRKSRC}/out/Release/gen/include/unicode

do-configure:
	@cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV} gn gen out/Release --args='${GN_ARGS}'

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/cppgc ${STAGEDIR}${PREFIX}/include/libplatform
	${INSTALL_PROGRAM} ${WRKSRC}/out/Release/d8 ${STAGEDIR}${PREFIX}/bin/d8
	${INSTALL_PROGRAM} ${WRKSRC}/out/Release/mkgrokdump ${STAGEDIR}${PREFIX}/bin/mkgrokdump
	${INSTALL_PROGRAM} ${WRKSRC}/out/Release/mksnapshot ${STAGEDIR}${PREFIX}/bin/mksnapshot
	${INSTALL_LIB} ${WRKSRC}/out/Release/libchrome_zlib.so ${STAGEDIR}${PREFIX}/lib/libchrome_zlib.so
	${INSTALL_LIB} ${WRKSRC}/out/Release/libcppgc.so ${STAGEDIR}${PREFIX}/lib/libcppgc.so
	${INSTALL_LIB} ${WRKSRC}/out/Release/libv8.so ${STAGEDIR}${PREFIX}/lib/libv8.so
	${INSTALL_LIB} ${WRKSRC}/out/Release/libv8_libbase.so ${STAGEDIR}${PREFIX}/lib/libv8_libbase.so
	${INSTALL_LIB} ${WRKSRC}/out/Release/libv8_libplatform.so ${STAGEDIR}${PREFIX}/lib/libv8_libplatform.so
	${INSTALL_DATA} ${WRKSRC}/include/*.h ${STAGEDIR}${PREFIX}/include/
	cd ${WRKSRC}/include/cppgc && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/include/cppgc '-name *\.h'
	${INSTALL_DATA} ${WRKSRC}/include/libplatform/*.h ${STAGEDIR}${PREFIX}/include/libplatform/
	${INSTALL_DATA} ${WRKDIR}/v8*.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig/

.include <bsd.port.mk>
