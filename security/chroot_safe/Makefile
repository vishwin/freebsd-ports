PORTNAME=	chroot_safe
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	security sysutils
MASTER_SITES=	SF/chrootsafe/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	LD_PRELOAD wrapper to safely chroot(2) any program
WWW=		https://sourceforge.net/projects/chrootsafe/

LICENSE=	MIT

USES=		tar:tgz
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

PLIST_FILES=	share/man/man1/chroot_safe.1.gz sbin/chroot_safe libexec/chroot_safe/chroot_safe.so

post-patch:
	@${REINPLACE_CMD} -e  's|CXX=g++|CXX?=c++|' \
		-e 's|-o chroot_safe.so|chroot_safe.cpp -o chroot_safe.so|' \
		${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} 's|chroot(1)|chroot(8)|' ${WRKSRC}/chroot_safe.1.in
	@${REINPLACE_CMD} 's|putenv|unsetenv|' ${WRKSRC}/chroot_safe.cpp

.include <bsd.port.mk>
