PORTNAME=	Mako
PORTVERSION=	1.3.5
PORTREVISION=	1
CATEGORIES=	textproc www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Super-fast templating language in Python
WWW=		https://www.makotemplates.org/

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beaker>=1.1:www/py-beaker@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}markupsafe>=0.9.2:textproc/py-markupsafe@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}babel>0:devel/py-babel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beaker>=1.1:www/py-beaker@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}markupsafe>=0.9.2:textproc/py-markupsafe@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}babel>0:devel/py-babel@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
