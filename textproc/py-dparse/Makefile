PORTNAME=	dparse
DISTVERSION=	0.6.3
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Parser for Python dependency files
WWW=		https://github.com/pyupio/dparse

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}packaging>0:devel/py-packaging@${PY_FLAVOR}

USES=		cpe python
CPE_VENDOR=	pyup
CPE_PRODUCT=	dependency_parser
USE_PYTHON=	autoplist distutils pytest

TEST_ENV=	PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

NO_ARCH=	yes

OPTIONS_DEFINE=		CONDA PIPENV
OPTIONS_DEFAULT=	CONDA PIPENV

CONDA_DESC=	Enable support for Conda YML parsing
PIPENV_DESC=	Enable support to update Python Pipfiles

CONDA_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}PyYAML>0:devel/py-yaml@${PY_FLAVOR}
PIPENV_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pipenv>=2022.12.19:devel/py-pipenv@${PY_FLAVOR}

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 31100
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}tomli>0:textproc/py-tomli@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
