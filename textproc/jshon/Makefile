PORTNAME=	jshon
DISTVERSION=	20180209
PORTREVISION=	1
CATEGORIES=	textproc

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	JSON parser for the shell
WWW=		http://kmkeen.com/jshon/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libjansson.so:devel/jansson

USES=		gmake localbase:ldflags
USE_GITHUB=	yes
GH_ACCOUNT=	keenerd
GH_TAGNAME=	d919aea

PLIST_FILES=	bin/jshon \
		share/man/man1/jshon.1.gz

OPTIONS_DEFINE=		ZSH
OPTIONS_DEFAULT=	ZSH

ZSH_PLIST_FILES=	share/zsh/site-functions/jshon_zsh_completion

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-Wno-error=strict-prototypes
.endif

pre-configure:
	@${REINPLACE_CMD} -e 's|^\(#define JSHONVER \).*|\1"${PORTVERSION}-${GH_TAGNAME}"|' \
	-e 's|\({printf("%\)i\(\\n", JSHONVER); exit(0);}\)|\1s\2|' \
	${WRKSRC}/jshon.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1

post-install-ZSH-on:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${INSTALL_DATA} ${WRKSRC}/jshon_zsh_completion ${STAGEDIR}${PREFIX}/share/zsh/site-functions/

.include <bsd.port.post.mk>
