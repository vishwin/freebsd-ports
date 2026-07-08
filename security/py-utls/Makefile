PORTNAME=	utls
PORTVERSION=	2026.5.30
CATEGORIES=	security python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTFILES=	utls-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Drop-in ssl stdlib library using BoringSSL with first-class fingerprint impersonation
WWW=		https://github.com/jawah/utls

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	git:devel/git \
		${PYTHON_PKGNAMEPREFIX}maturin>=1.7<2.0:devel/py-maturin@${PY_FLAVOR}
LIB_DEPENDS=	libcrypto.so:security/boringssl
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}wassima>=1<3:security/py-wassima@${PY_FLAVOR}

USES=		cargo llvm:build python
USE_PYTHON=	autoplist concurrent pep517

CARGO_BUILD=	no
CARGO_INSTALL=	no

.include <bsd.port.mk>
