PORTNAME=	check-jsonschema
PORTVERSION=	0.28.2
CATEGORIES=	devel python
MASTER_SITES=	PYPI \
		https://github.com/python-jsonschema/check-jsonschema/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	jsonschema CLI and pre-commit hook
WWW=		https://github.com/python-jsonschema/check-jsonschema

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setuptools>=0:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=8<9:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jsonschema>=4.18.0<5.0:devel/py-jsonschema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}regress>=0.4.0:devel/py-regress@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=0<3.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ruamel.yaml>=0.18.6:devel/py-ruamel.yaml@${PY_FLAVOR} \
		${PY_TOMLI}

USES=		python
USE_PYTHON=	autoplist concurrent pep517

NO_ARCH=	yes

.include <bsd.port.mk>
