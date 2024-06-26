PORTNAME=	libobjc2
DISTVERSIONPREFIX=v
DISTVERSION=	2.2.1
CATEGORIES=	lang devel gnustep

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Replacement Objective-C runtime supporting modern Objective-C features

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/include/tsl/robin_map.h:devel/robin-map

USES=		cmake compiler objc:compiler

USE_GITHUB=	yes
GH_ACCOUNT=	gnustep

USE_LDCONFIG=	yes

LDFLAGS+=	-lm

TEST_TARGET=	test

CMAKE_ARGS+=	-DLIB_INSTALL_PATH=lib \
		-DLOCALBASE=${LOCALBASE}

LDFLAGS_armv7=	-Wl,-znotext
SSP_UNSAFE=	yes

PLIST_SUB+=	SHLIB_MAJOR=${SHLIB_MAJOR} SHLIB_MINOR=${SHLIB_MINOR}

SHLIB_MAJOR=	4
SHLIB_MINOR=	6

.include <bsd.port.pre.mk>

.if ${ARCH:Mpowerpc*} || ${ARCH:Mriscv64*}
CMAKE_ARGS+=	-DTESTS:BOOL=OFF
.endif

.if ${CHOSEN_COMPILER_TYPE} == gcc
CXXFLAGS+=	-stdlib=libstdc++
.endif

post-install:
	${LN} -sf libobjc.so.${SHLIB_MAJOR}.${SHLIB_MINOR} ${STAGEDIR}${PREFIX}/lib/libobjc.so.${SHLIB_MAJOR}

.include <bsd.port.post.mk>
