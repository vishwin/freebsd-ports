PORTNAME=	urllib3
PORTVERSION=	1.26.20
PORTEPOCH=	1
CATEGORIES=	net python
MASTER_SITES=	PYPI \
		https://github.com/urllib3/urllib3/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	HTTP library with thread-safe connection pooling, file post, and more
WWW=		https://github.com/urllib3/urllib3

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flaky>=3.6.1:devel/py-flaky@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pysocks>=1.5.6:net/py-pysocks@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-timeout>=0:devel/py-pytest-timeout@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-dateutil>=2.8.1:devel/py-python-dateutil@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tornado>=0:www/py-tornado@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}trustme>=0.6.0:security/py-trustme@${PY_FLAVOR}

USES=		cpe python
USE_PYTHON=	autoplist concurrent cryptography_test pep517 pytest

CPE_VENDOR=	python

NO_ARCH=	yes
TEST_ENV=	LC_ALL=en_US.UTF-8 PYTHONPATH=${WRKSRC}/src

# Test 'test_ssl_read_timeout' fails with FreeBSD >= 12.0. That was already the case with earlier versions of net/py-urllib3.
PYTEST_IGNORED_TESTS=	test_ssl_read_timeout

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	BROTLI SOCKS SSL
OPTIONS_DEFAULT=SOCKS

BROTLI_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}brotli>=1.0.9:archivers/py-brotli@${PY_FLAVOR}
SOCKS_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pysocks>=1.5.6<2.0:net/py-pysocks@${PY_FLAVOR}
SSL_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}certifi>=0:security/py-certifi@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}idna>=2.0.0:dns/py-idna@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}pyopenssl>=0.14:security/py-openssl@${PY_FLAVOR}
SSL_USE=		PYTHON=cryptography

.include <bsd.port.mk>
