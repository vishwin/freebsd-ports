PORTNAME=	wmappl
PORTVERSION=	0.71
PORTREVISION=	6
CATEGORIES=	x11 windowmaker
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Application launcher dockapp similar to wmbutton
WWW=		http://wmappl.sourceforge.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		xorg
USE_XORG=	ice sm x11 xext xpm
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

OPTIONS_DEFINE=		DOCS IMLIB2

IMLIB2_LIB_DEPENDS=	libImlib2.so:graphics/imlib2
IMLIB2_CONFIGURE_ENABLE=Imlib2

post-extract:
	@${RM} -r ${WRKSRC}/icons/CVS

post-patch:
	@${REINPLACE_CMD} -e \
		's|"/etc|"${PREFIX}/etc| ; \
		 s|/usr/share/icons/wmappl|${DATADIR}| ; \
		 s|/usr/share/pixmaps/mini|${LOCALBASE}/share/pixmaps|' \
		${WRKSRC}/src/wmappl.c

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
