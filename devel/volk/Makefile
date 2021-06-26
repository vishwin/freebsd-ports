PORTNAME=	volk
DISTVERSION=	2.5.0
CATEGORIES=	devel comms hamradio
MASTER_SITES=	https://github.com/${GH_ACCOUNT}/${PORTNAME}/releases/download/v${DISTVERSION}/

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Vector-Optimized Library of Kernels

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mako>=0.4.2:textproc/py-mako@${PY_FLAVOR}
LIB_DEPENDS=	liborc-0.4.so:devel/orc \
		libboost_filesystem.so:devel/boost-libs

USES=		cmake compiler:c++17-lang python:3.6+ tar:xz

GH_ACCOUNT=	gnuradio

CMAKE_OFF=	VOLK_CPU_FEATURES
USE_LDCONFIG=	yes

.include <bsd.port.mk>
