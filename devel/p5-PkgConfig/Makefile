PORTNAME=	PkgConfig
PORTVERSION=	0.26026
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PLICEASE
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Pure-Perl Core-Only replacement for pkg-config
WWW=		https://metacpan.org/release/PkgConfig

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		perl5 pkgconfig
USE_PERL5=	configure

NO_ARCH=	yes

PORTSCOUT=	limit:^[0-9\.]*$$

.include <bsd.port.mk>
