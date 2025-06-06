PORTNAME=		pam_krb5
PORTVERSION=		4.11
PORTREVISION=		2
CATEGORIES=		security
MASTER_SITES=		http://archives.eyrie.org/software/kerberos/ \
			http://archives.eyrie.org/software/ARCHIVE/pam-krb5/
DISTNAME=		pam-krb5-${PORTVERSION:S/.r/-rc/}

MAINTAINER=		cy@FreeBSD.org
COMMENT=		Pluggable Authentication Module for ${FLAVOR:U} Kerberos 5
WWW=		https://www.eyrie.org/~eagle/software/pam-krb5/

LICENSE=		BSD3CLAUSE GPLv1+
LICENSE_COMB=		dual
LICENSE_FILE=		${WRKSRC}/LICENSE

USES=			gmake libtool perl5
USE_PERL5=		build

CONFLICTS=		pam_krb5-rh-2.*
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--with-krb5="${GSSAPIBASEDIR}" \
			--with-krb5-include="${GSSAPIINCDIR}" \
			--with-krb5-lib="${GSSAPILIBDIR}"
CONFIGURE_ENV=		PATH_KRB5_CONFIG="${KRB5CONFIG}"
GNU_CONFIGURE_MANPREFIX= ${PREFIX}/share
INSTALL_TARGET=		install-strip

FLAVORS=		mit heimdal_base heimdal_port
FLAVOR?=		${FLAVORS:[1]}

.if ${FLAVOR:U} == mit
USES+=		gssapi:mit
PKGNAMESUFFIX=	-mit
.elif ${FLAVOR:U} == heimdal_port
USES+=		gssapi:heimdal
PKGNAMESUFFIX=	-heimdal
.elif ${FLAVOR:U} == heimdal_base
USES+=		gssapi:base
.endif

.include <bsd.port.pre.mk>

post-install:
	cd ${WRKSRC} && ${MAKE_CMD} install-man DESTDIR=${STAGEDIR}

.include <bsd.port.post.mk>
