PORTNAME=	psycopg-c
PORTVERSION=	3.2.9
CATEGORIES=	databases python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	psycopg_c-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PostgreSQL database adapter for Python - C optimization distribution
WWW=		https://www.psycopg.org/psycopg3/ \
		https://github.com/psycopg/psycopg/tree/master/psycopg_c

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=49.2.0:devel/py-setuptools@${PY_FLAVOR} \
		${PY_TOMLI} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0.37:devel/py-wheel@${PY_FLAVOR}

USES=		pgsql python
USE_PYTHON=	autoplist concurrent cython pep517

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
