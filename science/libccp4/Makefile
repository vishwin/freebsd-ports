PORTNAME=	libccp4
DISTVERSION=	8.0.0
CATEGORIES=	science education
MASTER_SITES=	https://ftp.ccp4.ac.uk/opensource/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Protein X-ray crystallography toolkit
WWW=		https://www.ccp4.ac.uk/

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	dual
LICENSE_FILE_GPLv3=	${WRKSRC}/COPYING
LICENSE_FILE_LGPL3=	${WRKSRC}/COPYING.LESSER

BROKEN_aarch64=		ccp4/ccp4_sysdep.h:244:4: error: "Can't determine machine number format"

LIB_DEPENDS=	libmmdb2.so:science/mmdb2

USES=		fortran gmake libtool localbase:ldflags
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared --disable-static
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

CFLAGS+=	-fPIC
FFLAGS+=	-fPIC -std=legacy

post-configure:
	${REINPLACE_CMD} -e 's| -Wl,--as-needed||; s| -Wl,--no-as-needed||' ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's|^archive_cmds=|wl="-Wl,"; archive_cmds=|' ${WRKSRC}/libtool # wl is missing otherwise for some reason

.include <bsd.port.mk>
