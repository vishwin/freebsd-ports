PORTNAME=	gngb
PORTVERSION=	20060309
PORTREVISION=	11
CATEGORIES=	emulators
MASTER_SITES=	http://m.peponas.free.fr/gngb/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GameBoy(tm) emulator
WWW=		http://m.peponas.free.fr/gngb/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake localbase sdl
USE_CSTD=	gnu89
USE_SDL=	sdl
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

PLIST_FILES=	bin/gngb \
		share/man/man1/gngb.1.gz

OPTIONS_DEFINE=	OPENGL

OPENGL_USES=		gl
OPENGL_USE=		GL=gl
OPENGL_CONFIGURE_ENABLE=gl

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-Wno-error=int-conversion
.endif

post-patch:
	@${REINPLACE_CMD} -e \
		's|"$$SDL_CONFIG" = yes|-n "$$SDL_CONFIG"|g ; \
		 s|sdl-config |$$SDL_CONFIG |g ; \
		 s|$$OPT||g' ${WRKSRC}/configure

.include <bsd.port.post.mk>
