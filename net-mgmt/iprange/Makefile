PORTNAME=	iprange
PORTVERSION=	2.0.0
CATEGORIES=	net-mgmt
MASTER_SITES=	https://github.com/firehol/iprange/releases/download/v${PORTVERSION}/

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Manage IP ranges
WWW=		https://github.com/firehol/iprange

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:xz

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=	${PREFIX}/share

PLIST_FILES=	bin/iprange \
		share/man/man1/iprange.1.gz

.include <bsd.port.mk>
