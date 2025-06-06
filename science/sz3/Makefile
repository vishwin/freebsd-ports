PORTNAME=	sz3
PORTVERSION=	3.2.1
DISTVERSIONPREFIX=	v
CATEGORIES=	science

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Modular Error-bounded Lossy Compression Framework for Scientific Datasets
WWW=		https://szcompressor.org/ \
		https://github.com/szcompressor/SZ3

LICENSE=	BSD4CLAUSE
LICENSE_FILE=	${WRKSRC}/copyright-and-BSD-license.txt

LIB_DEPENDS=	libgsl.so:math/gsl \
		libzstd.so:archivers/zstd

USES=		cmake pkgconfig

CMAKE_OFF=	BUILD_H5Z_FILTER \
		BUILD_MDZ \
		SZ3_DEBUG_TIMINGS \
		SZ3_USE_BUNDLED_ZSTD
CMAKE_ON=	BUILD_SHARED_LIBS \
		BUILD_STATIC_LIBS

DATADIR=	${PREFIX}/share/SZ3

USE_GITHUB=	yes
GH_ACCOUNT=	szcompressor
GH_PROJECT=	SZ3

post-patch:
# Clean up bundled libraries
	@${RM} -r ${WRKSRC}/tools/zstd/

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/sz3*

.include <bsd.port.mk>
