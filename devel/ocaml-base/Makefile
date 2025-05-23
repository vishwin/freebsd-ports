PORTNAME=	base
PORTVERSION=	0.16.3
DISTVERSIONPREFIX=	v
PORTREVISION=	2
CATEGORIES=	devel
PKGNAMEPREFIX=	ocaml-

MAINTAINER=	freebsd@dev.thsi.be
COMMENT=	Standard library for OCaml
WWW=		https://github.com/janestreet/base

LICENSE=	MIT

BUILD_DEPENDS=	${SA_DIR}/sexplib0/META:devel/ocaml-sexplib0 \
		bash:shells/bash
RUN_DEPENDS=	${SA_DIR}/sexplib0/META:devel/ocaml-sexplib0

USES=		ocaml:dune,ldconfig
USE_GITHUB=	yes
GH_ACCOUNT=	janestreet

DOCSDIR=	${OCAML_DOCSDIR}/${PORTNAME}
PORTDOCS=	CHANGES.md LICENSE.md README.org odoc-pages

OPTIONS_DEFINE=	DOCS

SA_DIR=		${LOCALBASE}/${OCAML_SITELIBDIR}

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
USE_BINUTILS=	yes
.endif

post-install:
	@${STRIP_CMD} \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/base.cmxs \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/base_internalhash_types/base_internalhash_types.cmxs \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/caml/caml.cmxs \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/dllbase_internalhash_types_stubs.so \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/dllbase_stubs.so \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/md5/md5_lib.cmxs \
		${STAGEDIR}${PREFIX}/${OCAML_SITELIBDIR}/${PORTNAME}/shadow_stdlib/shadow_stdlib.cmxs

.include <bsd.port.mk>
