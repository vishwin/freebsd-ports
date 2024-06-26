PORTNAME=	gobby
PORTVERSION=	0.4.13
PORTREVISION=	11
CATEGORIES=	editors
MASTER_SITES=	http://releases.0x539.de/gobby/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free collaborative editor
WWW=		http://gobby.0x539.de

LICENSE=	GPLv2

LIB_DEPENDS=	libobby.so:devel/obby \
		libnet6.so:net/net6 \
		libxml++-2.6.so:textproc/libxml++26 \
		libgtkmm-2.4.so:x11-toolkits/gtkmm24

OPTIONS_DEFINE=	GTKSPELL NLS
GTKSPELL_DESC=	Enable GtkSpell support

USE_GNOME=	gtksourceview2 intltool
USES=		compiler:c++11-lang cpe gmake gnome pathfix pkgconfig
CPE_VENDOR=	${PORTNAME}_project
USE_CXXSTD=	c++11
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGTKSPELL}
LIB_DEPENDS+=	libgtkspell.so:textproc/gtkspell
CONFIGURE_ARGS+=--with-gtkspell
.else
CONFIGURE_ARGS+=--without-gtkspell
.endif

.if ${PORT_OPTIONS:MNLS}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lintl
CONFIGURE_ARGS+=	--enable-nls
USES+=		cpe gettext
CPE_VENDOR=	${PORTNAME}_project
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

.include <bsd.port.mk>
