PORTNAME=	kwidgetsaddons
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 addons to QtWidgets

USES=		cmake compiler:c++11-lib kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	ecm_build
USE_QT=		core gui linguisttools uiplugin uitools wayland widgets \
		buildtools_build qmake_build testlib_build

.include <bsd.port.mk>
