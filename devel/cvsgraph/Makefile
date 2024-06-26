PORTNAME=	cvsgraph
DISTVERSION=	1.7.2
PORTREVISION=	3
CATEGORIES=	devel graphics
MASTER_SITES=	https://www.vagrearg.org/cvsgraph/release/

MAINTAINER=	terry-freebsd@glaver.org
COMMENT=	Graph the life story of a file under CVS or RCS
WWW=		https://www.vagrearg.org/content/cvsgraph

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgd.so:graphics/gd \
		libpng16.so:graphics/png \
		libtiff.so:graphics/tiff \
		libwebp.so:graphics/webp \
		libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig

USES=		localbase:ldflags jpeg pkgconfig
SUB_FILES=	pkg-message
GNU_CONFIGURE=	yes
LDFLAGS+=	-lm
CONFIGURE_ARGS=	--with-gd-inc=${LOCALBASE}/include \
		--with-gd-lib=${LOCALBASE}/lib

DOCS=		ChangeLog README
EXAMPLES=	cvsgraphwrapper.php mkimage.php
MORE_EXAMPLES=	README.Automatic_documentation checkoutlist commit_action.sh \
		commitinfo cvswrappers tag_action.sh taginfo

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/cvsgraph.conf ${STAGEDIR}${PREFIX}/etc/cvsgraph.conf.sample
	${INSTALL_MAN} ${WRKSRC}/cvsgraph.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_MAN} ${WRKSRC}/cvsgraph.conf.5 ${STAGEDIR}${PREFIX}/share/man/man5

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

do-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/automatic_documentation
.for i in ${EXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/contrib/${i} ${STAGEDIR}${EXAMPLESDIR}
.endfor
.for i in ${MORE_EXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/contrib/automatic_documentation/${i} \
		${STAGEDIR}${EXAMPLESDIR}/automatic_documentation
.endfor

.include <bsd.port.mk>
