PORTNAME=	HTML-Packer
PORTVERSION=	2.11
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Another HTML code cleaner
WWW=		https://metacpan.org/release/HTML-Packer

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CSS-Packer>=2.01:textproc/p5-CSS-Packer \
		p5-JavaScript-Packer>=2.01:textproc/p5-JavaScript-Packer \
		p5-Regexp-RegGrp>=1.001001:devel/p5-Regexp-RegGrp \
		p5-Safe-Isa>=0:devel/p5-Safe-Isa
TEST_DEPENDS=	p5-Test-Pod>=1.22:devel/p5-Test-Pod

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
