PORTNAME=	quantum-espresso
DISTVERSIONPREFIX=	qe-
DISTVERSION=	7.4
PORTREVISION=	1
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Package for research in electronic structure, simulation, optimization
WWW=		https://www.quantum-espresso.org \
		https://gitlab.com/QEF/q-e \
		https://github.com/QEF/q-e

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/License

BROKEN_aarch64=	compilation fails: cannot find an intrinsic module named 'ieee_arithmetic', see https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=278942
BROKEN_armv6=	fails to build: gfortran8: error: iotk_base_tmp.f90: No such file or directory
BROKEN_armv7=	fails to build: gfortran8: error: iotk_base_tmp.f90: No such file or directory

BUILD_DEPENDS=	fox-xml>0:textproc/fox-xml \
		bash:shells/bash
LIB_DEPENDS=	libblas.so:math/blas \
		libfftw3.so:math/fftw3 \
		liblapack.so:math/lapack \
		libopenblas.so:math/openblas

USES=		cmake fortran python shebangfix
GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	QEF
GH_PROJECT=	q-e
GH_TUPLE=	anharmonic:d3q:de47183:anharmonic_d3q/external/d3q \
		pietrodelugas:fox:3453648e6837658b747b895bb7bef4b1ed2eac40:pietrodelugas_fox/external/fox \
		Reference-LAPACK:lapack:12d825396fcef1e0a1b27be9f119f9e554621e55:Reference_LAPACK_lapack/external/lapack \
		libmbd:libmbd:89a3cc1:libmbd_libmbd/external/mbd \
		QMCPACK:pw2qmcpack:f72ab25fa4ea755c1b4b230ae8074b47d5509c70:QMCPACK_pw2qmcpack/external/pw2qmcpack \
		dceresoli:qe-gipaw:490046d:dceresoli_qe_gipaw/external/qe-gipaw \
		wannier-developers:wannier90:1d6b187374a2d50b509e5e79e2cab01a79ff7ce1:wannier_developers_wannier90/external/wannier90
USE_GITLAB=	nodefault
GL_TUPLE=	max-centre/components:devicexlib:a6b89ef:devxlib/external/devxlib

SHEBANG_FILES=	configure
SHEBANG_GLOB=	*.sh *.py

#MAKE_ARGS=	TOPDIR=${WRKSRC}
#BINARY_ALIAS=	make=gmake cpp=/usr/local/bin/cpp${GCC_DEFAULT}
FFLAGS+=	${MPI_CFLAGS}
LDFLAGS+=	${LOCALBASE}/lib/gcc${GCC_DEFAULT}/libgfortran.so -lm \
		${MPI_LIBS}

BINARY_ALIAS=	git=false wget=false curl=false

OPTIONS_SINGLE=		MPI
OPTIONS_SINGLE_MPI=	MPICH OPENMPI
OPTIONS_DEFAULT=	OPENMPI

MPICH_USES=		mpi:mpich

OPENMPI_USES=		mpi:openmpi

.include <bsd.port.pre.mk>

.  if ${GCC_DEFAULT} >= 10
FFLAGS+=	-fallow-argument-mismatch # workaround for https://github.com/QEF/q-e/issues/34
.  endif

post-extract:
	@${RM} \
		${WRKSRC}/archive/lapack-3.6.1.tgz \
		${WRKSRC}/PP/src/bgw2pw.f90.orig
	@cd ${WRKSRC} && ${MKDIR} FoX && ${LN} -s ${LOCALBASE}/include FoX/finclude

post-install:
	# remove wannier90 binaries that come from the bundled wannier90 package (reported to the upstream vie e-mail on 2024-03-11)
.for p in wannier90.x postw90.x w90chk2chk.x
	${RM} ${STAGEDIR}${PREFIX}/bin/${p}
.endfor
	# strip binaries
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/*.x

do-test:
	@cd ${WRKSRC}/test-suite && ${GMAKE} run-tests

run-examples: build
.for c in PP PW PWCOND PHonon
	@cd ${WRKSRC}/$c/examples && PREFIX=${STAGEDIR}${PREFIX} ./run_all_examples
.endfor

# all tests fail, possibly due to wrong pseudo-potentials, see https://gitlab.com/QEF/q-e/-/issues/745

.include <bsd.port.post.mk>
