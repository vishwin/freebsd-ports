PORTNAME=	flower
DISTVERSIONPREFIX=	v
DISTVERSION=	0.10
PORTREVISION=	6
CATEGORIES=	net

MAINTAINER=	ed@FreeBSD.org
COMMENT=	Label-based networking daemon
WWW=		https://github.com/NuxiNL/flower

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Unmaintained upstream
EXPIRATION_DATE=2025-07-31

LIB_DEPENDS=	libarpc.so:devel/arpc \
		libjsoncpp.so:devel/jsoncpp

USES=		cmake:insource compiler:c++17-lang localbase:ldflags tar:xz
USE_GITHUB=	yes
GH_ACCOUNT=	NuxiNL

CFLAGS+=	-I${LOCALBASE}/include/jsoncpp

# Require the unit tests to pass prior to installing.
post-build:
	@trap '' PIPE && ${WRKSRC}/flower_unittests

.include <bsd.port.mk>
