PORTNAME=	Dancer-Plugin-Passphrase
PORTVERSION=	2.0.1
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JAITKEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Passphrases and Passwords as objects for Dancer
WWW=		https://metacpan.org/release/Dancer-Plugin-Passphrase

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

DEPRECATED=	Depends on expired security/p5-Data-Entropy
EXPIRATION_DATE=2025-09-01

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Dancer>=0:www/p5-Dancer \
		p5-Data-Entropy>=0.005:security/p5-Data-Entropy \
		p5-Digest-Bcrypt>=0:security/p5-Digest-Bcrypt

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
