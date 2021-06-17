PORTNAME=	gnuradio
DISTVERSIONPREFIX=	v
DISTVERSION=	3.9.2.0
CATEGORIES=	comms astro hamradio

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Amateur Radio Software defined radio

LICENSE=	GPLv3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mako>=1.0.7:textproc/py-mako@${PY_FLAVOR} \
		${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}pybind11>=2.4:devel/py-pybind11@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyqtgraph>0:graphics/py-pyqtgraph@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR} \
		pybind11>=2.4:devel/pybind11 \
		${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click-plugins>0:devel/py-click-plugins@${PY_FLAVOR}
LIB_DEPENDS=	libboost_date_time.so:devel/boost-libs \
		libvolk.so:devel/volk \
		liblog4cpp.so:devel/log4cpp \
		libgmpxx.so:math/gmp \
		libsndfile.so:audio/libsndfile \
		libfftw3f.so:math/fftw3-float \
		libasound.so:audio/alsa-lib \
		libjack.so:audio/jack \
		libportaudio.so:audio/portaudio \
		libSDL.so:devel/sdl12 \
		libcodec2.so:audio/codec2 \
		libgsm.so:audio/gsm \
		libgsl.so:math/gsl \
		libunwind.so:devel/libunwind
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mako>=1.0.7:textproc/py-mako@${PY_FLAVOR} \
		${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}pybind11>=2.4:devel/py-pybind11@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyqtgraph>0:graphics/py-pyqtgraph@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}click-plugins>0:devel/py-click-plugins@${PY_FLAVOR}

USES=		cmake compiler:c++14-lang iconv pkgconfig python:3.6+ shared-mime-info \
		shebangfix

USE_GITHUB=	yes
SHEBANG_FILES=	grc/scripts/freedesktop/grc_setup_freedesktop.in \
		gnuradio-runtime/python/gnuradio/ctrlport/gr-ctrlport-monitor \
		gnuradio-runtime/python/gnuradio/ctrlport/gr-perf-monitorx
USE_LDCONFIG=	yes

CMAKE_OFF=	ENABLE_DEFAULT \
		ENABLE_DOXYGEN
CMAKE_ON=	ENABLE_PYTHON \
		ENABLE_GNURADIO_RUNTIME \
		ENABLE_GR_CTRLPORT \
		ENABLE_POSTINSTALL \
		ENABLE_GR_ANALOG \
		ENABLE_GR_AUDIO \
		ENABLE_GR_BLOCKS \
		ENABLE_GR_CHANNELS \
		ENABLE_GR_DIGITAL \
		ENABLE_GR_DTV \
		ENABLE_GR_FEC \
		ENABLE_GR_FFT \
		ENABLE_GR_FILTER \
		ENABLE_GR_NETWORK \
		ENABLE_GR_VIDEO_SDL \
		ENABLE_GR_TRELLIS \
		ENABLE_GR_UTILS \
		ENABLE_GR_MODTOOL \
		ENABLE_GR_BLOCKTOOL \
		ENABLE_GR_VOCODER \
		ENABLE_GR_WAVELET
CMAKE_ARGS+=	-DCMAKE_INSTALL_PREFIX="${PREFIX}" \
		-DPYTHON_EXECUTABLE="${PYTHON_CMD}"
# for detailed debugging uncomment the next line
#CMAKE_ARGS+=	--debug-output --trace
LIBSTRIP_FILES=	analog audio blocks channels digital dtv fec fft \
		filter pmt qtgui runtime trellis video-sdl \
		vocoder wavelet

PLIST_SUB+=	LIBVERSION=${PORTVERSION:C/\.[0-9]$//} \
		PORTVERSION=${PORTVERSION}

OPTIONS_DEFINE=	GRC QT5 SOAPY TEST UHD ZMQ
OPTIONS_DEFAULT=	SOAPY UHD ZMQ
OPTIONS_SUB=	yes
GRC_DESC=	Include GNU Radio Companion
SOAPY_DESC=	Include SoapySDR support
UHD_DESC=	Include UHD support from Ettus
ZMQ_DESC=	Include ZeroMQ support

GRC_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>0:devel/py-yaml@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}gobject3>0:devel/py-gobject3@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}cairo>0:graphics/py-cairo@${PY_FLAVOR}
GRC_RUN_DEPENDS:=	${GRC_BUILD_DEPENDS}
GRC_USES=	desktop-file-utils gnome
GRC_USE=	gnome=cairo,gtk30,pango
GRC_CMAKE_BOOL=	ENABLE_GRC
QT5_LIB_DEPENDS=	libqwt6.so:x11-toolkits/qwt6
QT5_USES=	pyqt:5 qt:5
QT5_USE=	pyqt=core,gui,widgets qt=buildtools,core,gui,qmake,widgets
QT5_CMAKE_BOOL=	ENABLE_GR_QTGUI
QT5_CMAKE_ON=	-DQWT_LIBRARIES=${PREFIX}/lib/qt5/libqwt6.so \
		-DQWT_INCLUDE_DIRS=${PREFIX}/include/qt5/qwt6
SOAPY_LIB_DEPENDS=	libSoapySDR.so:misc/soapysdr
SOAPY_CMAKE_BOOL=	ENABLE_GR_SOAPY
TEST_CMAKE_BOOL=	ENABLE_TESTING
UHD_LIB_DEPENDS=	libuhd.so:comms/uhd
UHD_CMAKE_BOOL=	ENABLE_GR_UHD
ZMQ_BUILD_DEPENDS=	cppzmq>0:net/cppzmq
ZMQ_LIB_DEPENDS=	libzmq.so:net/libzmq4
ZMQ_CMAKE_BOOL=	ENABLE_GR_ZEROMQ

.include <bsd.port.options.mk>
.if ${PORT_OPTIONS:MGRC}
INSTALLS_ICONS=	yes
.endif

post-install:
	@${FIND} ${STAGEDIR}${ETCDIR} -type f -exec ${MV} {} {}.sample \;

.include <bsd.port.mk>
