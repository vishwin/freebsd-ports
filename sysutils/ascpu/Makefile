PORTNAME=	ascpu
PORTVERSION=	1.11
PORTREVISION=	8
CATEGORIES=	sysutils afterstep
MASTER_SITES=	http://www.tigr.net/afterstep/download/ascpu/

MAINTAINER=	demon@FreeBSD.org
COMMENT=	CPU statistics monitor utility for XFree86
WWW=		http://www.tigr.net/

USES=		jpeg xorg
USE_XORG=	xpm
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-xpm-includes=${LOCALBASE}/include --with-xpm-library=${LOCALBASE}/lib
LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_ENV=	EXTRA_LIBRARIES="-L${LOCALBASE}/lib"

PLIST_FILES=	"@(,kmem,2555) bin/ascpu" share/man/man1/ascpu.1.gz

do-install:
	${INSTALL_MAN} ${WRKSRC}/ascpu.man ${STAGEDIR}${PREFIX}/share/man/man1/ascpu.1
	${INSTALL_PROGRAM} ${WRKSRC}/ascpu ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
