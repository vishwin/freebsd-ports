PORTNAME=	gpsoauth
PORTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	security python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	riggs@FreeBSD.org
COMMENT=	Python client library for Google Play Services OAuth
WWW=		https://github.com/simon-weber/gpsoauth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.9.1:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ndg-httpsclient>0:net/py-ndg-httpsclient@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pycryptodome>=3.4:security/py-pycryptodome@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyopenssl>0:security/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyasn1>0:devel/py-pyasn1@${PY_FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	simon-weber

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
