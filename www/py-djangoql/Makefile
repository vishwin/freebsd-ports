PORTNAME=	djangoql
PORTVERSION=	0.18.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	grembo@FreeBSD.org
COMMENT=	Advanced search language for Django, with auto-completion
WWW=		https://github.com/ivelum/djangoql

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django42>0:www/py-django42@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ply>=3.8:devel/py-ply@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
