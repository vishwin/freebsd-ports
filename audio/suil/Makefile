PORTNAME=	suil
PORTVERSION=	0.10.12
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://download.drobilla.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C library for loading and wrapping LV2 plugin UIs
WWW=		http://drobilla.net/software/suil/

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	lv2>=1.14.0:audio/lv2
LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2
RUN_DEPENDS=	lv2>=1.14.0:audio/lv2

USES=		compiler:c++11-lang gnome pkgconfig python:build qt:5 \
		tar:bzip2 waf xorg
USE_GNOME=	atk cairo gdkpixbuf glib20 gtk20 gtk30 pango
USE_QT=		core gui widgets x11extras
USE_XORG=	x11
USE_LDCONFIG=	yes

PLIST_SUB=	SUILVERSION=${PORTVERSION}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libsuil-0.so.${PORTVERSION}
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/suil-0/*.so

.include <bsd.port.mk>
