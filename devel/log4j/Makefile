PORTNAME=	log4j
PORTVERSION=	1.2.17
CATEGORIES=	devel java
MASTER_SITES=	APACHE/logging/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast and flexible logging library for Java
WWW=		https://logging.apache.org/log4j/1.2/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cpe java

NO_BUILD=	yes
NO_ARCH=	yes
CPE_VENDOR=	apache

WRKSRC=		${WRKDIR}/apache-${PORTNAME}-${PORTVERSION}

PLIST_FILES=	%%JAVAJARDIR%%/log4j.jar
PORTDOCS=	*
PORTEXAMPLES=	*

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
	${INSTALL_DATA} ${WRKSRC}/log4j-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

do-install-DOCS-on:
	@cd ${WRKSRC}/site && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}/

do-install-EXAMPLES-on:
	@cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}/
	${RMDIR} ${STAGEDIR}${EXAMPLESDIR}/lf5/OpeningLogFiles

.include <bsd.port.mk>
