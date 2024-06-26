PORTNAME=	trlan
PORTVERSION=	201009
PORTREVISION=	12
CATEGORIES=	math
MASTER_SITES=	https://codeforge.lbl.gov/frs/download.php/210/:1 \
		http://crd.lbl.gov/~kewu/ps/:2 \
		LOCAL/bf:1,2
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:1 trlan-ug.pdf:2
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Thick-restart Lanczos method for eigenproblems
WWW=		http://crd.lbl.gov/~kewu/trlan.html

USES=		fortran
USE_LDCONFIG=	yes

ALL_TARGET=	lib

PLIST_FILES=	lib/libtrlan.a lib/libtrlan.so lib/libtrlan.so.1

OPTIONS_DEFINE=	DOCS EXAMPLES

PICFLAG=	-fpic

.include <bsd.port.pre.mk>

PORTDOCS=	trlan-ug.pdf
PORTEXAMPLES=	Makefile README dense.f90 simple.f90 simple77.f simplec.c

post-patch:
	@${REINPLACE_CMD} -E \
		-e '/^(FC|FFLAGS)=/s/^/#/' \
		-e '/^F90=/s/=.*/=${FC}/' \
		${WRKSRC}/Make.inc
	@${REINPLACE_CMD} -E \
		-e '/^(CC|CFLAGS|LDFLAGS|TRLAN)=/s/^/#/' \
		${WRKSRC}/examples/SUN/Makefile
	@${REINPLACE_CMD} \
		-e 's|ar -cru|${AR} -cru|' \
		${WRKSRC}/SRC/Makefile

do-build:
	@${ECHO_CMD} "Building static archive ..."
	@cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE} ${_MAKE_JOBS} ${MAKE_ARGS} \
		${ALL_TARGET}
	@${STRIP_CMD} --strip-unneeded -o ${WRKDIR}/libtrlan.a ${WRKSRC}/libtrlan.a
	@cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE} ${_MAKE_JOBS} ${MAKE_ARGS} \
		clean
	@${ECHO_CMD} "Building shared library ..."
	@cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE} ${_MAKE_JOBS} ${MAKE_ARGS} \
		${ALL_TARGET} FFLAGS="${PICFLAG} ${FFLAGS}"
	@${FC} ${FFLAGS} ${LDFLAGS} -shared -Wl,-x  -Wl,-soname,libtrlan.so.1 \
		-o ${WRKDIR}/libtrlan.so.1 -Wl,--whole-archive \
		${WRKSRC}/libtrlan.a -Wl,--no-whole-archive -Wl,--as-needed

do-install:
	${INSTALL_DATA} ${WRKDIR}/libtrlan.* ${STAGEDIR}${PREFIX}/lib
	@${LN} -sf libtrlan.so.1 ${STAGEDIR}${PREFIX}/lib/libtrlan.so
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DISTDIR}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@cd ${WRKSRC}/examples/SUN && ${INSTALL_DATA} ${PORTEXAMPLES} \
	${STAGEDIR}${EXAMPLESDIR}

.if defined(MAINTAINER_MODE)

BUILD_DEPENDS +=	${LOCALBASE}/lib/libblas.so.2:math/blas \
			${LOCALBASE}/lib/liblapack.so.4:math/lapack

BLAS?=		-L${LOCALBASE}/lib -lblas
LAPACK?=	-L${LOCALBASE}/lib -llapack

check regression-test test: test-static test-shared

test-static: build
	@${ECHO_CMD} "Checking static archive ..."
	@cd ${WRKSRC}/examples/SUN; ${SETENV} ${MAKE_ENV} ${MAKE} ${_MAKE_JOBS} \
		${MAKE_ARGS} clean simple simple77 simplec \
		LDFLAGS="${LDFLAGS} ${LAPACK} ${BLAS}" \
		TRLAN="${WRKDIR}/libtrlan.a" ; \
		./simple ; ./simple77 ; ./simplec

test-shared: build
	@${ECHO_CMD} "Checking shared library ..."
	@cd ${WRKSRC}/examples/SUN; ${SETENV} ${MAKE_ENV} ${MAKE} ${_MAKE_JOBS} \
		${MAKE_ARGS} clean simple simple77 simplec \
		FFLAGS="${PICFLAG} ${FFLAGS}" \
		LDFLAGS="${LDFLAGS} ${LAPACK} ${BLAS}" \
		TRLAN="-L${WRKDIR} -ltrlan" ; \
		./simple ; ./simple77 ; ./simplec

.endif

.include <bsd.port.post.mk>
