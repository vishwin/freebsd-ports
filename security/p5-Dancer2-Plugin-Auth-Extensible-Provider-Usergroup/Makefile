PORTNAME=	Dancer2-Plugin-Auth-Extensible-Provider-Usergroup
PORTVERSION=	0.709
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extensible authentication framework for Dancer2 apps
WWW=		https://metacpan.org/release/Dancer2-Plugin-Auth-Extensible-Provider-Usergroup

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

DEPRECATED=	Depends on expired security/p5-Data-Entropy via security/p5-Dancer2-Plugin-Passphrase
EXPIRATION_DATE=2025-09-01

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Dancer2>=0.204001:www/p5-Dancer2 \
		p5-Dancer2-Plugin-Auth-Extensible>=0.709:security/p5-Dancer2-Plugin-Auth-Extensible \
		p5-Dancer2-Plugin-Passphrase>=3.3.0:security/p5-Dancer2-Plugin-Passphrase \
		p5-Dancer2-Plugin-DBIC>=0.0013:databases/p5-Dancer2-Plugin-DBIC

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
