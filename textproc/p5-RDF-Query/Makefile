PORTNAME=	RDF-Query
PORTVERSION=	2.919
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Complete SPARQL 1.1 Query and Update implementation for RDF::Trine
WWW=		https://metacpan.org/release/RDF-Query

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-UUID>=0:devel/p5-Data-UUID \
		p5-DateTime-Format-W3CDTF>=0:devel/p5-DateTime-Format-W3CDTF \
		p5-Error>=0:lang/p5-Error \
		p5-JSON>=2:converters/p5-JSON \
		p5-Module-Pluggable>=0:devel/p5-Module-Pluggable \
		p5-Parse-RecDescent>=0:devel/p5-Parse-RecDescent \
		p5-RDF-Trine>=1.004:textproc/p5-RDF-Trine \
		p5-Set-Scalar>=0:devel/p5-Set-Scalar \
		p5-URI>=1.52:net/p5-URI
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-JSON>=0:devel/p5-Test-JSON \
		p5-YAML>=0:textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
