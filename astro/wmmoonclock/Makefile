PORTNAME=	wmmoonclock
DISTVERSION=	1.30
PORTREVISION=	1
CATEGORIES=	astro windowmaker
MASTER_SITES=	https://www.dockapps.net/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Displays the phase of the moon, plus orbital data
WWW=		https://www.dockapps.net/wmmoonclock

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf:build pkgconfig xorg
USE_XORG+=	x11 xext xpm

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/wmmoonclock share/man/man1/wmmoonclock.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmmoonclock ${STAGEDIR}${PREFIX}/bin/wmmoonclock
	${INSTALL_MAN} ${WRKSRC}/src/wmMoonClock.1 ${STAGEDIR}${PREFIX}/share/man/man1/wmmoonclock.1

.include <bsd.port.mk>
