PORTNAME=	volk
DISTVERSIONPREFIX=	v
DISTVERSION=	2.5.0
CATEGORIES=	devel comms hamradio

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Vector-Optimized Library of Kernels

LICENSE=	GPLv3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mako>=0.4.2:textproc/py-mako@${PY_FLAVOR}
LIB_DEPENDS=	liborc-0.4.so:devel/orc \
		libboost_filesystem.so:devel/boost-libs

USES=		cmake compiler:c++17-lang python:3.5+

USE_GITHUB=	yes
GH_ACCOUNT=	gnuradio

CMAKE_OFF=	VOLK_CPU_FEATURES
USE_LDCONFIG=	yes

.include <bsd.port.mk>
