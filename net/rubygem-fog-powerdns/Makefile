PORTNAME=	fog-powerdns
PORTVERSION=	0.2.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support PowerDNS DNS services
WWW=		https://github.com/fog/fog-powerdns

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-fog-core>=0:devel/rubygem-fog-core \
		rubygem-fog-json>=0:devel/rubygem-fog-json \
		rubygem-fog-xml>=0:textproc/rubygem-fog-xml

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
