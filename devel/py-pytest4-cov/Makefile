PORTNAME=	pytest4-cov
PORTVERSION=	2.9.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:C/4//}-${PORTVERSION}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Pytest plugin for measuring coverage (legacy version for pytest 4)
WWW=		https://github.com/pytest-dev/pytest-cov

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Depends on expiring devel/py-pytest4
EXPIRATION_DATE=2025-06-21

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}pytest-cov

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coverage>=4.4:devel/py-coverage@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest4>=3.6:devel/py-pytest4@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
PYDISTUTILS_PKGNAME=	${PORTNAME:C/4//}

NO_ARCH=	yes

.include <bsd.port.mk>
