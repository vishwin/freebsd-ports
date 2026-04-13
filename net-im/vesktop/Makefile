PORTNAME=	vesktop
DISTVERSION=	1.6.3
CATEGORIES=	net-im
MASTER_SITES=	https://github.com/Vencord/Vesktop/releases/download/v${DISTVERSION}/
DISTNAME=	${PORTNAME}_${DISTVERSION}_${ARCH:S/aarch64/arm64/}
EXTRACT_SUFX=	.deb

MAINTAINER=	celeste@ornato.com
COMMENT=	Unofficial native 'improved' client for the discord messenger
WWW=		https://vesktop.dev/

LICENSE=	GPLv3

ONLY_FOR_ARCHS=	amd64 aarch64

USES=				electronfix:39
ELECTRONFIX_MAIN_EXECUTABLE=	vesktop

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/opt/Vesktop

_ICON_DIR=	${PREFIX}/share/icons/hicolor/scalable/apps

post-extract:
	${TAR} -xf ${WRKDIR}/data.tar.xz -C ${WRKDIR}/

pre-install:
	echo 'freebsd' > ${WRKSRC}/resources/package-type

do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${_ICON_DIR}
	${INSTALL_DATA} ${WRKDIR}/usr/share/icons/hicolor/scalable/apps/vesktop.svg ${STAGEDIR}${_ICON_DIR}
	${RLN} ${STAGEDIR}${DATADIR}/vesktop ${STAGEDIR}${PREFIX}/bin/vesktop
	${INSTALL_DATA} ${WRKDIR}/usr/share/applications/vesktop.desktop ${STAGEDIR}${PREFIX}/share/applications
	${REINPLACE_CMD} -e 's|Exec=.*|Exec=vesktop|' \
		${STAGEDIR}${PREFIX}/share/applications/vesktop.desktop

.include <bsd.port.mk>
