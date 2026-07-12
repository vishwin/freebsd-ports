PORTNAME=	shaka-packager
DISTVERSIONPREFIX=	v
DISTVERSION=	3.9.0
CATEGORIES=	multimedia

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Media packaging SDK and tool for DASH and HLS
WWW=		https://github.com/shaka-project/shaka-packager

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c++17-lang python:build

USE_GITHUB=	yes
GH_ACCOUNT=	shaka-project
GH_TUPLE=	google:googletest:15460959cbbfa20e66ef0b5ab497367e47fc0a04:googletest/packager/third_party/googletest/source \
		abseil:abseil-cpp:255c84dadd029fd8ad25c5efb5933e47beaa00c7:abseil/packager/third_party/abseil-cpp/source \
		curl:curl:8c908d2d0a6d32abdedda2c52e90bd56ec76c24d:curl/packager/third_party/curl/source \
		nlohmann:json:55f93686c01528224f448c19128836e7df245f72:json/packager/third_party/json/source \
		Mbed-TLS:mbedtls:e185d7fd85499c8ce5ca2a54f5cf8fe7dbe3f8df:mbedtls/packager/third_party/mbedtls/source \
		Mbed-TLS:mbedtls-framework:457996474728cb8e968ed21953b72f74d2f536b2:mbedtlsframework/packager/third_party/mbedtls/source/framework \
		madler:zlib:5c42a230b7b468dff011f444161c0145b5efae59:zlib/packager/third_party/zlib/source \
		glennrp:libpng:2b978915d82377df13fcbb1fb56660195ded868a:libpng/packager/third_party/libpng/source \
		webmproject:libwebm:f2a982d748b80586ae53b89a2e6ebbc305848b8c:libwebm/packager/third_party/libwebm/source \
		GNOME:libxml2:3d840e17858de03a09fba8b202e3a89267d5795a:libxml2/packager/third_party/libxml2/source \
		protocolbuffers:protobuf:b6f9284da830b69be787732ffdaa35049d20a088:protobuf/packager/third_party/protobuf/source \
		cesanta:mongoose:5c8e05a4fc34c5309ceea887a7e60b895b2100d7:mongoose/packager/third_party/mongoose/source \
		c-ares:c-ares:d3a507e920e7af18a5efb7f9f1d8044ed4750013:cares/packager/third_party/c-ares/source \
		microsoft:mimalloc:4e50d6714d471b72b2285e25a3df6c92db944593:mimalloc/packager/third_party/mimalloc/source

CMAKE_OFF=	BUILD_SHARED_LIBS USE_SYSTEM_DEPENDENCIES

PLIST_FILES=	bin/mpd_generator \
		bin/packager

# Drop the pssh-box helper and its bundled protobuf Python runtime (168 files
# under bin/pssh-box-protos); ship only the packager and mpd_generator tools.
post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/bin/pssh-box.py \
		${STAGEDIR}${PREFIX}/bin/pssh-box-protos

.include <bsd.port.mk>
