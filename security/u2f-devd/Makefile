PORTNAME=	u2f-devd
PORTVERSION=	1.1.10
PORTREVISION=	9
CATEGORIES=	security
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	monwarez@mailoo.org
COMMENT=	Devd hotplug rules for Universal 2nd Factor (U2F) tokens

LICENSE=	BSD2CLAUSE

NO_ARCH=	yes
NO_BUILD=	yes
SUB_FILES=	pkg-message

GROUPS=		u2f

PLIST_FILES=	etc/devd/u2f.conf

do-install:
	${INSTALL_DATA} ${FILESDIR}/u2f.conf ${STAGEDIR}${PREFIX}/etc/devd

.include <bsd.port.mk>
