PORTNAME=	vi
PORTVERSION=	050325
PORTREVISION=	3
CATEGORIES=	editors
MASTER_SITES=	SF/ex-${PORTNAME}/ex-${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	2bsd-
DISTNAME=	ex-${PORTVERSION}

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	The original vi editor, updated to run on modern OSes
WWW=		https://ex-vi.sourceforge.net/

LICENSE=	BSD4CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		ncurses sbrk tar:bzip2

PRESERVEDIR=	/var/preserve/${PKGBASE}
PLIST_SUB=	PRESERVEDIR="${PRESERVEDIR}"

post-extract:	.SILENT
	${RM} -r ${WRKSRC}/libuxre ${WRKSRC}/regexp.h

post-patch:
.for f in Makefile ex.1 expreserve.c exrecover.c vi.1
	@${REINPLACE_CMD} -e 's|/var/preserve|${PRESERVEDIR}|' ${WRKSRC}/${f}
.endfor

.include <bsd.port.mk>
