PORTNAME=	knock
DISTVERSION=	7.0.2
PORTREVISION=	1
CATEGORIES=	dns
PKGNAMESUFFIX=	py

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Tool designed to enumerate subdomains on a target domain
WWW=		https://github.com/guelfoweb/knock

LICENSE=	GPLv2

PY_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beautifulsoup>0:www/py-beautifulsoup@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dnspython>=2.4.2:dns/py-dnspython@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyopenssl>0:security/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.31.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tqdm>=4.66.2:misc/py-tqdm@${PY_FLAVOR}
BUILD_DEPENDS=	${PY_DEPENDS}
RUN_DEPENDS=	${PY_DEPENDS}

USES=		python pyqt:5 # pyqt:5 isn't used: https://github.com/guelfoweb/knock/issues/108
USE_PYTHON=	distutils noflavors autoplist
USE_PYQT=	pyqt5:run

USE_GITHUB=	yes
GH_ACCOUNT=	guelfoweb

NO_ARCH=	yes

.include <bsd.port.mk>
