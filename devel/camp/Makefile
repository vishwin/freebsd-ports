PORTNAME=	camp
DISTVERSIONPREFIX=	v
DISTVERSION=	2025.03.0
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Compiler agnostic metaprogramming library
WWW=		https://github.com/LLNL/camp

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:testing compiler:c++17-lang

USE_GITHUB=	yes
GH_ACCOUNT=	LLNL
GH_TUPLE=	LLNL:blt:fb4246b:blt/extern/blt

CMAKE_OFF=	CAMP_ENABLE_TESTS
CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_TESTING_ON=	CAMP_ENABLE_TESTS

# tests as of 2025.03.0: 100% tests passed, 0 tests failed out of 56

.include <bsd.port.mk>
