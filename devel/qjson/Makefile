PORTNAME=	qjson
DISTVERSION=	0.9.0
PORTREVISION=	7
CATEGORIES=	devel
PKGNAMESUFFIX=	-qt5

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library to manage JSON objects with Qt
WWW=		https://qjson.sourceforge.net/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.lib

USES=		cmake compiler:c++11-lang pathfix qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	flavio
USE_LDCONFIG=	yes
USE_QT=		core buildtools:build qmake:build
CMAKE_OFF=	QT4_BUILD
QT_SUFFIX=	-qt5

_DOCSDIR=	${DOCSDIR}${QT_SUFFIX}
DOCSDIR_REL=	${_DOCSDIR:S,^${PREFIX}/,,}
PLIST_SUB+=	QT_SUFFIX="${QT_SUFFIX}" \
		PORTVERSION="${PORTVERSION}"

OPTIONS_DEFINE=	DOXYGEN
OPTIONS_SUB=	yes

DOXYGEN_BUILD_DEPENDS=	doxygen:devel/doxygen

post-build-DOXYGEN-on:
	cd ${WRKSRC}/doc && doxygen

post-install-DOXYGEN-on:
	${MKDIR} ${STAGEDIR}${_DOCSDIR}
	cd ${WRKSRC}/doc/html && ${COPYTREE_SHARE} . ${STAGEDIR}${_DOCSDIR}

.include <bsd.port.pre.mk>

# Clang 16 defaults to building in C++17, and throws an error when the
# `register' keyword is used. Make clang just ignore the keyword instead.
.if ${COMPILER_TYPE} == clang
CXXFLAGS+=	-Wno-register
.endif

.include <bsd.port.post.mk>
