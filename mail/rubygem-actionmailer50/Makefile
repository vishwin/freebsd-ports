PORTNAME=	actionmailer
PORTVERSION=	5.0.7.2
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	50

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Easy email delivery and testing for Ruby
WWW=		https://rubyonrails.org/ \
		https://github.com/rails/rails/tree/main/actionmailer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack50>=${PORTVERSION}:www/rubygem-actionpack50 \
		rubygem-actionview50>=${PORTVERSION}:devel/rubygem-actionview50 \
		rubygem-activejob50>=${PORTVERSION}:devel/rubygem-activejob50 \
		rubygem-mail>=2.5.4,2<3,2:mail/rubygem-mail \
		rubygem-rails-dom-testing-rails50>=2.0<3:textproc/rubygem-rails-dom-testing-rails50

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^5\.0\.

.include <bsd.port.mk>
