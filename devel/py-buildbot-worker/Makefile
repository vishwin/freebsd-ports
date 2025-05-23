PORTNAME=	buildbot-worker
DISTVERSION=	3.11.9
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	buildbot_worker-${DISTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Buildbot Worker Daemon
WWW=		https://buildbot.net

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}autobahn>=20.12.3:www/py-autobahn@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}future>=0:devel/py-future@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}msgpack>0.6.0:devel/py-msgpack@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Twisted>=17.9.0:devel/py-twisted@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>0:devel/py-mock@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
USE_RC_SUBR=	buildbot-worker

NO_ARCH=	yes
SUB_LIST+=	PYTHON_CMD=${PYTHON_CMD} \
		PYTHON_VER=${PYTHON_VER}

BUILDBOT_REMOVE_ME=	${PYTHONPREFIX_SITELIBDIR:S;${PREFIX}/;;}/buildbot_worker

USERS=		buildbot
GROUPS=		buildbot

POST_PLIST+=	fix-plist
PLIST_FILES=	share/man/man1/buildbot-worker.1.gz

# XXX fixup plist. see:
# https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=205056
fix-plist:
	${REINPLACE_CMD} -e 's|^${BUILDBOT_REMOVE_ME}$$||' ${TMPPLIST}

post-install:
	${INSTALL_MAN} ${WRKSRC}/docs/buildbot-worker.1 ${STAGEDIR}${PREFIX}/share/man/man1

do-test:
	${MKDIR} ${WRKDIR}/tmp
	cd ${WRKDIR}/tmp && PYTHONPATH=${WRKSRC} ${PYTHON_CMD} -m twisted.trial buildbot_worker.test

.include <bsd.port.mk>
