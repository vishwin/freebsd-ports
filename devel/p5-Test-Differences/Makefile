PORTNAME=	Test-Differences
PORTVERSION=	0.710
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C|0$||}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test strings and data structures for differences
WWW=		https://metacpan.org/release/Test-Differences

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Text-Diff>=1.43:textproc/p5-Text-Diff
TEST_DEPENDS=	p5-Capture-Tiny>=0.24:devel/p5-Capture-Tiny

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

PORTSCOUT=	skipv:0.4801

.include <bsd.port.mk>
