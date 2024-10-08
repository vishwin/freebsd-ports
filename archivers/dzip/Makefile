PORTNAME=	dzip
PORTVERSION=	2.9
CATEGORIES=	archivers games
MASTER_SITES=	http://speeddemosarchive.com/dzip/
DISTNAME=	dz${PORTVERSION:S/.//g}src

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	File compression utility specializing in Quake demo compression
WWW=		https://speeddemosarchive.com/dzip/

LICENSE=	ZLIB

USES=		cpe dos2unix zip

CPE_VENDOR=	evan_wagner

NO_WRKSUBDIR=	yes
MAKEFILE=	${WRKSRC}/Makefile.linux
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}"
ALL_TARGET=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	Readme

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-Wno-error=incompatible-function-pointer-types
.endif

post-extract: .SILENT
	${REINPLACE_CMD} -e 's/ifdef BIG_ENDIAN/if BYTE_ORDER == BIG_ENDIAN/' \
		-e 's/ifndef BIG_ENDIAN/if BYTE_ORDER == LITTLE_ENDIAN/' \
			${WRKSRC}/dzip.h ${WRKSRC}/conmain.c
	${REINPLACE_CMD} -e '4s,^,#include <machine/endian.h>,' \
		${WRKSRC}/dzip.h
	${REINPLACE_CMD} -e '21d;23d' ${WRKSRC}/dzipcon.h

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}/${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
