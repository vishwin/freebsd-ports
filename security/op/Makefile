PORTNAME=	op
DISTVERSION=	1.34
PORTREVISION=	3
CATEGORIES=	security

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Controlled privilege escalation tool
WWW=		https://github.com/dagwieers/op/wiki

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	dagwieers

GNU_CONFIGURE=		yes
CONFLICTS_INSTALL=	security/1password-client

post-configure:
	@${REINPLACE_CMD} -e 's|\(OPENLOG_VOID\) 0|\1 1|' ${WRKSRC}/config.h

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/op.d
	${MV} ${STAGEDIR}${PREFIX}/etc/op.conf-dist \
		${STAGEDIR}${PREFIX}/etc/op.conf.sample

.include <bsd.port.mk>
