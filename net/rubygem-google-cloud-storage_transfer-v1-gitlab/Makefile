PORTNAME=	google-cloud-storage_transfer-v1
PORTVERSION=	1.1.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-gitlab

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Official library for Google Cloud Storage Transfer
WWW=		https://cloud.google.com/ruby/docs/reference/google-cloud-storage_transfer-v1/latest \
		https://googleapis.github.io/google-cloud-ruby/docs/ \
		https://github.com/googleapis/google-cloud-ruby/tree/main/google-cloud-storage_transfer-v1 \
		https://github.com/googleapis/google-cloud-ruby

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-gapic-common-gitlab>=0.21.1<2:devel/rubygem-gapic-common-gitlab \
		rubygem-google-cloud-errors>=1.0<2:net/rubygem-google-cloud-errors

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
