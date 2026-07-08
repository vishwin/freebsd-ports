PORTNAME=	django-redis
PORTVERSION=	7.0.0
CATEGORIES=	www databases python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	django_redis-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Full featured redis cache backend for Django
WWW=		https://github.com/jazzband/django-redis

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django52>=5.2<7.0:www/py-django52@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}redis>=4.0.2:databases/py-redis@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msgpack>=0.6.0:devel/py-msgpack@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-cov>=0:devel/py-pytest-cov@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-mock>=0:devel/py-pytest-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-xdist>=0:devel/py-pytest-xdist@${PY_FLAVOR} \
		redis-server:databases/redis

USES=		python
USE_PYTHON=	autoplist concurrent pep517 pytest

# Required for Python 3.11+ as the cgi module is deprecated and slated for removal in Python 3.13
TEST_ARGS=	-W ignore::DeprecationWarning
TEST_ENV=	DJANGO_SETTINGS_MODULE=settings.sqlite \
		PYTHONPATH=${STAGEDIR}${PYTHON_SITELIBDIR}
TEST_WRKSRC=	${WRKSRC}/tests

NO_ARCH=	yes

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}*django-redis

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 31300
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}typing-extensions>=4.12:devel/py-typing-extensions@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
