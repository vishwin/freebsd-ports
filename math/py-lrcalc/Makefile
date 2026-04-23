PORTNAME=	lrcalc
PORTVERSION=	2.1
PORTREVISION=	3
CATEGORIES=	math python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	python

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Python bindings for lrcal
WWW=		http://sites.math.rutgers.edu/~asbuch/lrcalc/

LICENSE=	GPLv3

LIB_DEPENDS=	liblrcalc.so:math/lrcalc

USES=		localbase python

USE_PYTHON=	cython pep517

.if !defined(WITH_DEBUG)
LDFLAGS+=	-s
.endif

PLIST_SUB=	VER=${PORTVERSION}

.include <bsd.port.mk>
