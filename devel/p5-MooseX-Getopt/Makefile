PORTNAME=	MooseX-Getopt
PORTVERSION=	0.78
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN/MooseX CPAN
MASTER_SITE_SUBDIR=	CPAN:ETHER
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Moose role for processing command line options
WWW=		https://metacpan.org/release/MooseX-Getopt

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_GPLv1+ =	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Getopt-Long-Descriptive>=0.081:devel/p5-Getopt-Long-Descriptive \
		p5-Moose>=0.56:devel/p5-Moose \
		p5-MooseX-ConfigFromFile>=0:devel/p5-MooseX-ConfigFromFile \
		p5-MooseX-Role-Parameterized>=1.01:devel/p5-MooseX-Role-Parameterized \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean
TEST_DEPENDS=	p5-MooseX-SimpleConfig>=0.07:devel/p5-MooseX-SimpleConfig \
		p5-Module-Runtime>=0:devel/p5-Module-Runtime \
		p5-Path-Tiny>=0.009:devel/p5-Path-Tiny \
		p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-Fatal>=0.003:devel/p5-Test-Fatal \
		p5-Test-Needs>=0:devel/p5-Test-Needs \
		p5-Test-Trap>=0:devel/p5-Test-Trap \
		p5-Test-Warnings>=0:devel/p5-Test-Warnings

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 504000
TEST_DEPENDS+=	p5-Test-Simple>=1.302200:devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
