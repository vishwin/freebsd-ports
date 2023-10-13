PORTNAME=	scipy
DISTVERSION=	1.11.3
CATEGORIES=	science python
MASTER_SITES=	https://docs.scipy.org/doc/${PORTNAME}-${DISTVERSION}/:doc \
		PYPI:source \
		SF:source
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:source \
		scipy-html-${DISTVERSION}.zip:doc
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Scientific tools for Python
WWW=		https://www.scipy.org/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}meson-python>=0.12.1:devel/meson-python@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pybind11>=2.10.4:devel/py-pybind11@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pythran>=0.12.0:devel/py-pythran@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>0:devel/py-wheel@${PY_FLAVOR}
RUN_DEPENDS=	${PYNUMPY}

USES=		compiler:c++14-lang cpe fortran pkgconfig python shebangfix
USE_PYTHON=	autoplist concurrent cython pep517

BINARY_ALIAS=	cython=cython-${PYTHON_VER} \
		pybind11-config=pybind11-config-${PYTHON_VER} \
		pythran=pythran-${PYTHON_VER}

FFLAGS+=	-std=legacy

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS
OPTIONS_SINGLE=	BLASLIB
OPTIONS_SINGLE_BLASLIB=	ATLAS NETLIB OPENBLAS
OPTIONS_DEFAULT=	OPENBLAS

ATLAS_USES=	blaslapack:atlas
NETLIB_USES=	blaslapack:netlib
OPENBLAS_USES=	blaslapack:openblas

post-patch:
	@${REINPLACE_CMD} -e 's|pybind11>=2.10.4,<2.11.1|pybind11>=2.10.4|' \
		-e '39,46s|numpy==|numpy>=|' \
		${WRKSRC}/pyproject.toml

post-install:
	${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/scipy/ -name '*.so' | ${XARGS} ${STRIP_CMD}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${UNZIP_NATIVE_CMD} -d ${STAGEDIR}${DOCSDIR} ${DISTDIR}/scipy-html-${DISTVERSION}.zip
	@${RM} ${STAGEDIR}${PREFIX}/share/doc/${PYTHON_PKGNAMEPREFIX}${PORTNAME}/.buildinfo

.include <bsd.port.mk>
