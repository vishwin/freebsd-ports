PORTNAME=	camlp4
PORTVERSION=	4.14+1
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	System for writing extensible parsers for OCaml
WWW=		https://github.com/ocaml/camlp4

LICENSE=	LGPL20

BUILD_DEPENDS=	ocamlbuild:devel/ocaml-ocamlbuild

USES=		gmake ocaml
USE_GITHUB=	yes
GH_ACCOUNT=	ocaml

HAS_CONFIGURE=	yes
MAKE_ENV+=	DESTDIR="${STAGEDIR}"
MAKE_JOBS_UNSAFE=yes
ALL_TARGET=	all camlp4/META
INSTALL_TARGET=	install install-META

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_BINUTILS=	yes
.endif

post-install:
.for f in camlp4o camlp4of camlp4oof camlp4orf camlp4r camlp4rf
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${f}.opt
.endfor

.include <bsd.port.mk>
