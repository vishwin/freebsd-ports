PORTNAME=	zsm
PORTVERSION=	0.4.0
PORTREVISION=	2
CATEGORIES=	sysutils python
MASTER_SITES=	PYPI

MAINTAINER=	mattias.lindvall@gmail.com
COMMENT=	ZFS Snapshot Manager
WWW=		https://zsm.rtfd.io/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=8.0.1:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pid>=3.0.4:devel/py-pid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyyaml>=5.4.1:devel/py-pyyaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}marshmallow>=3.13.0:devel/py-marshmallow@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}freezegun>=>0:devel/py-freezegun@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils noflavors

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m pytest

.include <bsd.port.mk>
