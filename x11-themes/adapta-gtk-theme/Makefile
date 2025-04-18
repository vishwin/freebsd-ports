PORTNAME=	adapta-gtk-theme
PORTVERSION=	3.95.0.11
PORTREVISION=	5
CATEGORIES=	x11-themes

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Adaptive Gtk+ theme based on Material Design Guidelines
WWW=		https://github.com/adapta-project/adapta-gtk-theme

LICENSE=	GPLv2 CC-BY-SA-4.0
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2=	${WRKSRC}/COPYING
LICENSE_FILE_CC-BY-SA-4.0=	${WRKSRC}/LICENSE_CC_BY_SA4

BUILD_DEPENDS=	gsed:textproc/gsed \
		inkscape:graphics/inkscape \
		bash:shells/bash \
		sassc:textproc/sassc
RUN_DEPENDS=	noto>=1.0.5:x11-fonts/noto \
		roboto-fonts-ttf>=2.134:x11-fonts/roboto-fonts-ttf

USES=		autoreconf gmake gnome pathfix pkgconfig shebangfix

CHROME_CONFIGURE_ENABLE=	chrome_legacy
CHROME_DESC=	Support for legacy Chrome(ium) browser (<= R59)
CINNAMON_CONFIGURE_ENABLE=	cinnamon
CINNAMON_DESC=	Support for Cinnamon Desktop Environment
CINNAMON_IMPLIES=	METACITY
CONFIGURE_ARGS=	--disable-flashback \
		--disable-gtk_next \
		--disable-plank \
		--disable-telegram \
		--disable-tweetdeck

DOCS_MAKE_ENV=	ADAPTA_DOCS=yes

GH_ACCOUNT=	adapta-project
GNOMESHELL_CONFIGURE_ENABLE=	gnome
GNOMESHELL_DESC=	Support for Gnome-Shell Desktop Environment
GNU_CONFIGURE=	yes

MATE_CONFIGURE_ENABLE=	mate
MATE_DESC=	Support for Mate Desktop Environment
MATE_IMPLIES=	METACITY
METACITY_DESC=	Support for metacity Window Manager

NO_ARCH=	yes

OPENBOX_CONFIGURE_ENABLE=	openbox
OPENBOX_DESC=	Support for Openbox Desktop Environment
OPTIONS_DEFAULT=	CHROME CINNAMON GNOMESHELL MATE METACITY OPENBOX PARALLEL XFCE
OPTIONS_DEFINE=	CHROME CINNAMON DOCS GNOMESHELL MATE METACITY OPENBOX PARALLEL XFCE
OPTIONS_SUB=	yes

PARALLEL_BUILD_DEPENDS=	parallel:sysutils/parallel
PARALLEL_CONFIGURE_ENABLE=	parallel
PARALLEL_DESC=	parallel-build support

SHEBANG_REGEX=	'.*\.sh$$'

USE_GITHUB=	yes
USE_GNOME=	gdkpixbuf glib20 librsvg2 libxml2

XFCE_CONFIGURE_ENABLE=	xfce
XFCE_DESC=	Support for XFce Desktop Environment

post-patch:
# use textproc/gsed
	@(cd ${WRKSRC} && \
	${FIND} . -type f -iregex '${SHEBANG_REGEX}' \
		-exec ${SED} -i '' -e 's,sed -i,${LOCALBASE}/bin/g&,g' {} ";")
# replace deprecated inkscape flags
	@(cd ${WRKSRC} && \
	${FIND} . -type f -iregex '${SHEBANG_REGEX}' \
		-exec ${SED} -i '' -e 's|--export-png=|--export-filename=|g' {} ";")

.include <bsd.port.mk>
