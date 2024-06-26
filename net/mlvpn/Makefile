PORTNAME=	mlvpn
PORTVERSION=	2.3.1
PORTREVISION=	4
CATEGORIES=	net net-vpn

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Multi-link VPN
WWW=		https://zehome.github.io/MLVPN/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENCE

LIB_DEPENDS=	libev.so:devel/libev \
		libsodium.so:security/libsodium

USES=	autoreconf libtool pkgconfig localbase

USE_GITHUB=	yes
GH_PROJECT=	MLVPN
GH_ACCOUNT=	zehome

GNU_CONFIGURE=	yes

USERS=		mlvpn
GROUPS=		mlvpn
USE_RC_SUBR=	mlvpn

CFLAGS+=	-fcommon

OPTIONS_DEFINE=	CONTROL
CONTROL_DESC=	Enable UNIX socket/HTTP json remote control API

OPTIONS_DEFAULT=	CONTROL
CONTROL_CONFIGURE_OFF=	--disable-control

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin/
	${INSTALL_MAN} ${WRKSRC}/man/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_MAN} ${WRKSRC}/man/${PORTNAME}.conf.5	${STAGEDIR}${PREFIX}/share/man/man5
	@${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/examples/${PORTNAME}.conf.in ${STAGEDIR}${ETCDIR}/${PORTNAME}.conf.sample
	${INSTALL_SCRIPT} ${WRKSRC}/doc/examples/mlvpn_updown.sh.in ${STAGEDIR}${ETCDIR}/mlvpn_updown.sh

.include <bsd.port.mk>
