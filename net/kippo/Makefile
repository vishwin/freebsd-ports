PORTNAME=	kippo
PORTVERSION=	0.9
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Medium interaction ssh honeypot
WWW=		https://github.com/desaster/kippo

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pycryptodome>0:security/py-pycryptodome@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Twisted>=0:devel/py-twisted@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zope.interface>0:devel/py-zope.interface@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_GITHUB=	yes
GH_ACCOUNT=	desaster

USES=		python
NO_ARCH=	yes
NO_BUILD=	yes

USE_RC_SUBR=	kippo

USERS=		kippo
GROUPS=		kippo

SUB_FILES=	pkg-message
SUB_LIST+=	PYTHON=${PYTHON_CMD}

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
.for f in kippo.cfg.dist kippo.tac fs.pickle
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DATADIR}
.endfor
.for d in data doc honeyfs kippo txtcmds utils
	@${MKDIR} ${STAGEDIR}${DATADIR}/${d}
	@(cd ${WRKSRC}/${d}/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/${d})
.endfor

.include <bsd.port.mk>
