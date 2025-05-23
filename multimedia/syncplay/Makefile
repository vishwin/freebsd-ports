PORTNAME=	syncplay
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.4a
PORTREVISION=	2
CATEGORIES=	multimedia

MAINTAINER=	heckendorfc@gmail.com
COMMENT=	Synchronize video playback over networks
WWW=		https://syncplay.pl/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Twisted>=0:devel/py-twisted@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}certifi>=0:security/py-certifi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyopenssl>=0:security/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}service-identity>=0:security/py-service-identity@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}idna>=0:dns/py-idna@${PY_FLAVOR}

USES=		desktop-file-utils gmake python shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	Syncplay

SHEBANG_FILES=	syncplayClient.py \
		syncplayServer.py
MAKEFILE=	GNUmakefile
NO_ARCH=	yes

OPTIONS_DEFINE=	GUI VLC
OPTIONS_DEFAULT=	GUI VLC CLIENT SERVER
OPTIONS_SUB=	yes
OPTIONS_MULTI=	MODES
OPTIONS_MULTI_MODES=	CLIENT SERVER

CLIENT_DESC=	Client mode
SERVER_DESC=	Server mode
VLC_DESC=	Support for VLC media player

GUI_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyside2>=0:devel/pyside2@${PY_FLAVOR}
VLC_MAKE_ARGS=		VLC_SUPPORT=true
VLC_MAKE_ARGS_OFF=	VLC_SUPPORT=false
CLIENT_INSTALL_TARGET=	install-client
SERVER_INSTALL_TARGET=	install-server

post-patch:
	@${REINPLACE_CMD} -e 's|path = os.path.dirname(__file__)|path = "'${DATADIR}'"|g' ${WRKSRC}/syncplay/utils.py

.include <bsd.port.mk>
