PORTNAME=	jeuclid
PORTVERSION=	3.1.9
CATEGORIES=	math java
MASTER_SITES=	SF/${PORTNAME}/3.1.x/${PORTVERSION}/
EXTRACT_SUFX=	-distribution.zip

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java based MathML rendering solution
WWW=		https://jeuclid.sourceforge.net/

USES=		java zip

NO_ARCH=	yes
NO_BUILD=	yes

DATADIR=	${JAVASHAREDIR}/${PORTNAME}

post-patch:
	${REINPLACE_CMD} -e 's|BASEDIR=`dirname $$0`/..|BASEDIR=${DATADIR}|g' ${WRKSRC}/bin/foprep
	${REINPLACE_CMD} -e 's|BASEDIR=`dirname $$0`/..|BASEDIR=${DATADIR}|g' ${WRKSRC}/bin/listfonts
	${REINPLACE_CMD} -e 's|BASEDIR=`dirname $$0`/..|BASEDIR=${DATADIR}|g' ${WRKSRC}/bin/mathviewer
	${REINPLACE_CMD} -e 's|BASEDIR=`dirname $$0`/..|BASEDIR=${DATADIR}|g' ${WRKSRC}/bin/mml2xxx

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/repo
	(cd ${WRKSRC}/repo/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}/repo/)
	${INSTALL_SCRIPT} ${WRKSRC}/bin/foprep ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/bin/listfonts ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/bin/mathviewer ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/bin/mml2xxx ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
