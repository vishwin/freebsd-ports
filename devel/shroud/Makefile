PORTNAME=	shroud
DISTVERSIONPREFIX=	v
DISTVERSION=	0.13.0
CATEGORIES=	devel
PKGNAMESUFFIX=	-wrapper-generator

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Fortran and Python wrapper generator for C and C++ libraries
WWW=		https://github.com/LLNL/shroud

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}PyYAML>0:devel/py-yaml@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist noflavors

USE_GITHUB=	yes
GH_ACCOUNT=	LLNL

NO_ARCH=	yes

.include <bsd.port.mk>
