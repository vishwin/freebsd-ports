PORTNAME=	testoob
PORTVERSION=	1.15
PORTREVISION=	3
CATEGORIES=	devel python
MASTER_SITES=	SF \
		PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Advanced unit testing framework for PyUnit
WWW=		https://github.com/testoob/testoob

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/docs/LICENSE-2.0.txt

OPTIONS_DEFINE=	TWISTED
TWISTED_DESC=	enable running in threads

NO_ARCH=	yes
USES=		dos2unix python tar:bzip2
USE_PYTHON=	autoplist distutils

TWISTED_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Twisted>=0:devel/py-twisted@${PY_FLAVOR}

.include <bsd.port.mk>
