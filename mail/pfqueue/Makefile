PORTNAME=	pfqueue
PORTVERSION=	0.5.6
PORTREVISION=	2
CATEGORIES=	mail
MASTER_SITES=	SF

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Console-based tool for handling Postfix 1, Postfix 2, and Exim queues
WWW=		https://pfqueue.sourceforge.net/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool ncurses
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	--disable-static

INSTALL_TARGET=	install-strip

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-Wno-error=int-conversion
.endif

.include <bsd.port.post.mk>
