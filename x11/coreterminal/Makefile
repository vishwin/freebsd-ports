PORTNAME=	coreterminal
DISTVERSION=	4.3.0
PORTREVISION=	4
CATEGORIES=	x11

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Terminal emulator from the CoreApps family
WWW=		https://gitlab.com/cubocore/coreterminal

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libqtermwidget5.so:x11-toolkits/qtermwidget-qt5 \
		libcprime-core.so:deskutils/libcprime
RUN_DEPENDS=	coregarage:deskutils/coregarage

USES=		cmake desktop-file-utils localbase:ldflags qt:5
USE_QT=		buildtools:build core gui qmake:build serialport widgets
USE_GITLAB=	yes

GL_ACCOUNT=	CuboCore
GL_TAGNAME=	679b317d1612dcdd54596ba5bf313d60bebc808e

PLIST_FILES=	bin/coreterminal \
		share/applications/org.cubocore.CoreTerminal.desktop \
		share/icons/hicolor/scalable/apps/org.cubocore.CoreTerminal.svg

pre-configure:
	@${REINPLACE_CMD} \
		-e 's|/usr/bin/coreterminal|${PREFIX}/bin/coreterminal|g' \
		${WRKSRC}/org.cubocore.CoreTerminal.desktop

.include <bsd.port.mk>
