PORTNAME=	libastylej
PORTVERSION=	3.0.1
PORTREVISION=	2
CATEGORIES=	devel java textproc
MASTER_SITES=	SF/astyle/astyle/astyle%20${PORTVERSION}
PKGNAMESUFFIX?=	# for slave port
DISTNAME=	astyle_${PORTVERSION}_linux

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Source code indenter, formatter, and beautifier (JNI library)
WWW=		https://astyle.sourceforge.net/

LICENSE=	LGPL3

USES=		compiler:c++11-lang gmake java

ALL_TARGET=	java
LDFLAGS+=	-s
USE_LDCONFIG=	yes
MAKE_ARGS+=	JAVA_HOME=${JAVA_HOME}

WRKSRC=		${WRKDIR}/astyle/build/${CHOSEN_COMPILER_TYPE}

PLIST_FILES=	lib/jni/libastylej${PKGNAMESUFFIX}.so lib/jni/libastylej${PKGNAMESUFFIX}.so.${PORTVERSION}

post-patch:
	${REINPLACE_CMD} -e 's,\(JAVAINCS.*=.*\),\1 -I$(JAVA_HOME)/include/freebsd,' \
		-e '176 s,libastylej\.so,libastylej${PKGNAMESUFFIX}\.so,2' \
		-e 's/CXX = g++/CXX ?= g++/' \
		${WRKSRC}/Makefile

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/jni
	${INSTALL_DATA} ${WRKSRC}/bin/*.so.${PORTVERSION} ${STAGEDIR}${PREFIX}/lib/jni
	${LN} -sf libastylej${PKGNAMESUFFIX}.so.${PORTVERSION} \
		${STAGEDIR}${PREFIX}/lib/jni/libastylej${PKGNAMESUFFIX}.so

.include <bsd.port.mk>
