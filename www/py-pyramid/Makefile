PORTNAME=	pyramid
PORTVERSION=	1.7.3
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jun-g@daemonfreaks.com
COMMENT=	Small, fast, web development framework by the Pylons community
WWW=		https://pylonsproject.org/

LICENSE=	REPOZE
LICENSE_NAME=	Repoze License
LICENSE_FILE=	${WRKSRC}/LICENSE.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pastedeploy>=1.5.0:www/py-pastedeploy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}repoze.lru>=0.4:devel/py-repoze.lru@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}translationstring>=0.4:textproc/py-translationstring@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}venusian>=1.0,1:devel/py-venusian@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}WebOb>=1.3.1:www/py-webob@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.deprecation>=3.5.0:devel/py-zope.deprecation@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>=3.8.0:devel/py-zope.interface@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}
#TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}webtest>=1.1:www/py-webtest@${PY_FLAVOR} \
#		${PYTHON_PKGNAMEPREFIX}zope.component>=3.6.0:devel/py-zope.component@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
