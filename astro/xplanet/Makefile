PORTNAME=	xplanet
PORTVERSION=	1.3.1
PORTREVISION=	3
CATEGORIES=	astro geography
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Draw pictures of the earth textured by an image
WWW=		https://xplanet.sourceforge.net/

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
USES=		iconv:wchar_t localbase xorg
USE_XORG=	x11 xext xt xscrnsaver
CONFIGURE_ARGS=	--with-map-extension=jpg
CPPFLAGS+=	-I${LOCALBASE}/include/netpbm
LIBS+=		-lm

OPTIONS_DEFINE=	FREETYPE PANGO GIF JPEG PNG PNM TIFF
OPTIONS_DEFAULT=	FREETYPE PANGO GIF JPEG PNG PNM TIFF

FREETYPE_CONFIGURE_WITH=	--with-freetype
FREETYPE_LIB_DEPENDS=	libfreetype.so:print/freetype2
PANGO_CONFIGURE_WITH=	pango
PANGO_USES=		gnome
PANGO_USE=	GNOME=pango
GIF_CONFIGURE_WITH=	gif
GIF_LIB_DEPENDS=	libgif.so:graphics/giflib
JPEG_CONFIGURE_WITH=	jpeg
JPEG_USES=		jpeg
PNG_CONFIGURE_WITH=	png
PNG_LIB_DEPENDS+=	libpng.so:graphics/png
PNM_CONFIGURE_WITH=	pnm
PNM_LIB_DEPENDS=	libnetpbm.so:graphics/netpbm
TIFF_CONFIGURE_WITH=	tiff
TIFF_LIB_DEPENDS=	libtiff.so:graphics/tiff

post-extract:
	@${REINPLACE_CMD} -e "s/default/default.sample/g" ${WRKSRC}/Makefile.in
	@${MV} ${WRKSRC}/xplanet/config/default ${WRKSRC}/xplanet/config/default.sample

.include <bsd.port.mk>
