PORTNAME=	PyNaCl
DISTVERSION=	1.5.0
PORTREVISION=	2
CATEGORIES=	security python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python binding to the Networking and Cryptography library
WWW=		https://github.com/pyca/pynacl

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.4.1:devel/py-cffi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0.29.0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>=1.4.1:devel/py-cffi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>=3.2.1:devel/py-pytest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}hypothesis>=3.27.0:devel/py-hypothesis@${PY_FLAVOR}

USES=		python localbase
USE_PYTHON=	autoplist distutils

OPTIONS_DEFINE=	BUNDLED_NACL
BUNDLED_NACL_DESC=	Use bundled NaCl version
BUNDLED_NACL_LIB_DEPENDS_OFF=	libsodium.so:security/libsodium
BUNDLED_NACL_MAKE_ENV_OFF=	SODIUM_INSTALL=system

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/nacl/_sodium*.so

do-test: # tests fail: https://github.com/pyca/pynacl/issues/747
	@cd ${WRKSRC} && ${SETENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR} ${PYTHON_CMD} -m pytest -rs tests

.include <bsd.port.mk>
