# Created by: Andrey Slusar <anray@FreeBSD.org>

PORTNAME=	imagick
PORTVERSION=	3.5.0
CATEGORIES=	graphics

MAINTAINER=	000.fbsd@quip.cz
COMMENT?=	PHP wrapper to the ImageMagick/GraphicsMagick library version 6

LICENSE=	PHP301

USES=		php:pecl localbase

CONFLICTS_INSTALL?=	${PKGNAMEPREFIX}${PORTNAME}-im7-[0-9]*

OPTIONS_DEFINE=	X11

X11_LIB_DEPENDS?=	libMagickWand-6.so:graphics/ImageMagick6
X11_LIB_DEPENDS_OFF?=	libMagickWand-6.so:graphics/ImageMagick6-nox11

CONFIGURE_ARGS= --with-imagick=${LOCALBASE}

.include <bsd.port.mk>
