PORTNAME=	mihomo
DISTVERSIONPREFIX=	v
DISTVERSION=	1.19.29
CATEGORIES=	net
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Simple Python Pydantic model for Honkai
WWW=		https://github.com/MetaCubeX/mihomo/tree/Alpha

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:1.26,modules cpe

CPE_VENDOR=	clash_project

GO_MODULE=	github.com/metacubex/mihomo

PLIST_FILES=	bin/${PORTNAME}

PORTSCOUT=	limit:^[0-9\.]*$$

pre-patch:
	@cd ${WRKSRC} && ${CP} listener/redir/tcp_linux.go listener/redir/tcp_freebsd.go

.include <bsd.port.mk>
