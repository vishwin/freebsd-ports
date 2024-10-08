PORTNAME=	fceux
DISTVERSIONPREFIX=	v
DISTVERSION=	2.6.6
PORTREVISION=	2
CATEGORIES=	emulators games

PATCH_SITES=	https://github.com/TASEmulators/fceux/commit/
PATCHFILES=	396096223ec58ff7f437ec0de7275240946531c5.diff:-p1 \
		d2ee6351c08518c866bb48d89f58a67bb36931fc.diff:-p1

MAINTAINER=	fuz@FreeBSD.org
COMMENT=	NES emulator
WWW=		https://fceux.com

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libminizip.so:archivers/minizip

USES=		cmake desktop-file-utils gl libarchive lua:51 pkgconfig qt:5 sdl
USE_GL=		gl glu
USE_QT=		buildtools:build core gui opengl qmake:build widgets
USE_SDL=	sdl2

USE_GITHUB=	yes
GH_ACCOUNT=	TASEmulators

CFLAGS+=	-DPUBLIC_RELEASE
CMAKE_ON=	GLVND

OPTIONS_DEFINE=		DOCS FFMPEG X264 X265
OPTIONS_DEFAULT=	FFMPEG X264 X265
DOCS_CMAKE_BOOL=	QHELP
DOCS_USE=		qt=help,sql
FFMPEG_LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg
X264_LIB_DEPENDS=	libx264.so:multimedia/libx264
X265_LIB_DEPENDS=	libx265.so:multimedia/x265

pre-configure:
	${REINPLACE_CMD} -e 's,/usr,${PREFIX},' ${WRKSRC}/fceux.desktop
	${REINPLACE_CMD} -e 's:%%PKGNAME%%:${PKGNAME}:' ${WRKSRC}/scripts/genGitHdr.sh
	${REINPLACE_CMD} -e 's,/usr,${PREFIX},' ${WRKSRC}/src/drivers/Qt/HelpPages.cpp

pre-build-DOCS-on:
	${SETENV} QHELPGENERATOR=${QHELPGENERATOR} PROJECT_ROOT=${WRKSRC} ${SH} ${WRKSRC}/scripts/unix_make_docs.sh

post-install:
	${RM} ${STAGEDIR}${DATADIR}/*.dll
	${RM} ${STAGEDIR}${DATADIR}/*.chm
	# currently broken and not shipped
	${RM} ${STAGEDIR}${PREFIX}/share/man/man6/fceux-net-server.6

.include <bsd.port.mk>
