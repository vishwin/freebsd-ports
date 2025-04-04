PORTNAME=		libswift
PORTVERSION=		20190302
PORTREVISION=		1
CATEGORIES=		net-p2p

MAINTAINER=		dch@FreeBSD.org
COMMENT=		IETF Peer-to-Peer Streaming Peer Protocol implementation
WWW=		https://github.com/skunkwerks/libswift

LICENSE=		LGPL21

DEPRECATED=	Upstream archived repo on Feb 19, 2024 and no active development in several years
EXPIRATION_DATE=2025-04-30

LIB_DEPENDS=		libevent.so:devel/libevent

USES=			compiler:c++11-lang gmake ssl

USE_GITHUB=		yes
GH_ACCOUNT=		skunkwerks
GH_TAGNAME=		dc0cbcc
PORTDOCS=		README.md

SUB_FILES=		${PORTNAME}
SUB_LIST+=		SWIFT_USER=${SWIFT_USER} \
				SWIFT_GROUP=${SWIFT_GROUP} \
				SWIFT_SHAREDIR=${SWIFT_SHAREDIR} \
				SWIFT_PIDDIR=${SWIFT_PIDDIR}

PLIST_SUB=		SWIFT_USER=${SWIFT_USER} \
				SWIFT_GROUP=${SWIFT_GROUP} \
				SWIFT_SHAREDIR=${SWIFT_SHAREDIR} \
				SWIFT_PIDDIR=${SWIFT_PIDDIR}

SWIFT_USER?=	www
SWIFT_GROUP?=	www

SWIFT_SHAREDIR=	/var/db/${PORTNAME}/
SWIFT_PIDDIR=	/var/run/${PORTNAME}/

USE_RC_SUBR=	${PORTNAME}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e 's/CXX=clang++/CXX?=clang++/' ${WRKSRC}/Makefile

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR} \
		${STAGEDIR}${SWIFT_SHAREDIR} \
		${STAGEDIR}${SWIFT_PIDDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/swift ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.post.mk>
