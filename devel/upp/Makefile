PORTNAME=	upp
DISTVERSION=	15260
PORTREVISION=	3
CATEGORIES=	devel x11-toolkits
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/2020.2/
DISTNAME=	${PORTNAME}-posix-${PORTVERSION}

MAINTAINER=	m.sund@arcor.de
COMMENT=	Ultimate++, a BSD-licensed, cross-platform, C/C++ RAD suite
WWW=		http://upp.sourceforge.net/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/uppsrc/Core/Copying

BROKEN_powerpc=		Does not compile on ${ARCH}: error Unknown CPU architecture
BROKEN_powerpc64=	Does not compile on ${ARCH}: error Unknown CPU architecture

USES=		compiler:c++14-lang dos2unix pkgconfig:both tar:xz
DOS2UNIX_FILES=	uppsrc/Core/config.h

WRKSRC=		${WRKDIR}/${PORTNAME}

MACRO_FLAGS=	-DflagBSD -Dflag${OPSYS:tu}

PORTDATA=	bazaar examples reference tutorial uppsrc

OPTIONS_DEFINE=	MYSQL OPENGL PGSQL SDL UDC USEMALLOC
OPTIONS_DEFAULT=	IDE UDC UMK
OPTIONS_MULTI=	BUILD
OPTIONS_MULTI_BUILD=	IDE UMK
BUILD_DESC=	Build/install
IDE_DESC=	Build/install TheIDE (integrated development environment)
IDE_DESKTOP_ENTRIES=	"TheIDE" "IDE for cross-platform C++ development" \
		"${DATADIR}/uppsrc/ide/theide-48.png" "theide" \
		"Development;IDE;GTK;" false
IDE_LIB_DEPENDS=	libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig \
		libnotify.so:devel/libnotify \
		libpng.so:graphics/png
IDE_PLIST_FILES=	bin/theide ${PREFIX}/share/man/man1/theide.1.gz
IDE_USES=	gnome xorg
IDE_USE=	XORG=x11 GNOME=cairo,gdkpixbuf,gtk30
UDC_DESC=	Install spelling dictionaries (*.udc files)
UDC_VARS=	PORTDATA+=*.udc
UMK_DESC=	Build/install UMK (U++ MaKe command line utility)
UMK_PLIST_FILES=	bin/umk ${PREFIX}/share/man/man1/umk.1.gz
USEMALLOC_DESC=	Compile without U++ heap allocator
USEMALLOC_VARS=	MACRO_FLAGS+=-DflagUSEMALLOC
# SDL/OPENGL/MYSQL/PGSQL dependencies are only for run-time for use by executables built by the IDE
SDL_USES=	sdl
SDL_USE=	SDL=sdl
OPENGL_USES=	gl
OPENGL_USE=	GL=gl,glu
MYSQL_USES=	mysql
PGSQL_USES=	pgsql
LLD_UNSAFE=	yes

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == clang
# Disable some warnings for Clang
CXXFLAGS+=	-Wno-logical-op-parentheses
.endif

CXXFLAGS_i386+=	-msse2

post-patch: .SILENT
	${REINPLACE_CMD} -e '/^CXX[[:blank:]]*=/d ; \
		/^LDFLAGS[[:blank:]]*=/d ; /^LIBPATH[[:blank:]]*=/d ; \
		/^Macro[[:blank:]]*=/s|-DflagLINUX|${MACRO_FLAGS}| ; \
		/^CFLAGS[[:blank:]]*=/s|= -O3|+=| ; \
		/^CXXFLAGS[[:blank:]]*=/s|= -O3|+=| ; \
		/^OutDir_/s|-Linux|| ; \
		s|-ldl|-lexecinfo|' \
		${WRKSRC}/Makefile \
		${WRKSRC}/umkMakefile
	${REINPLACE_CMD} -i '' -E '/^OutDir_/s|-Gui|| ; \
		s/[[:blank:]]?`pkg-config --(cflags|libs) (freetype2|xcb|expat|xinerama|xrender|xft|xdmcp|xext)`//g' \
		${WRKSRC}/Makefile
# Add ${DATADIR} as an additional path to search for *.upp files
# on first TheIDE launch before automatic configuration of assemblies
	${REINPLACE_CMD} -e '/Scan(GetHomeDirFile("\*"/s|$$|\${.newline}		Scan("${DATADIR}/uppsrc");\${.newline}		Scan("${DATADIR}/*");|' \
		${WRKSRC}/uppsrc/ide/Install.cpp

do-build:

do-build-IDE-on:
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} \
		${MAKE_FLAGS} Makefile ${_MAKE_JOBS} OutFile="theide")

do-build-UMK-on:
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} \
		${MAKE_FLAGS} umkMakefile ${_MAKE_JOBS} OutFile="umk")

do-install:
	(cd ${WRKSRC} && ${COPYTREE_SHARE} "${PORTDATA}" ${STAGEDIR}${DATADIR} \
		"-not ( -type d -empty ) -o -name '*.orig'")
	(cd ${STAGEDIR}${DATADIR} && ${RMDIR} uppsrc/ide/SrcUpdater uppsrc/Web \
		bazaar/plugin/sundials/src/nvector/mpiplusx \
		bazaar/plugin/sundials/src/nvector/openmp \
		bazaar/plugin/sundials/src/nvector/parallel \
		bazaar/plugin/sundials/src/nvector/pthreads \
		bazaar/plugin/sundials/src/sunlinsol/klu)

do-install-IDE-on:
	${INSTALL_PROGRAM} ${WRKSRC}/theide ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/uppsrc/ide/theide.1 ${STAGEDIR}${PREFIX}/share/man/man1

do-install-UMK-on:
	${INSTALL_PROGRAM} ${WRKSRC}/umk ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/uppsrc/umk/umk.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.post.mk>
