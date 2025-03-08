PORTNAME=	Keras-Preprocessing
DISTVERSION=	1.1.2
PORTREVISION=	2
CATEGORIES=	math python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Keras_Preprocessing-${DISTVERSION}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	Easy data preprocessing and data augmentation for DL models
WWW=		https://github.com/keras-team/keras-preprocessing

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
