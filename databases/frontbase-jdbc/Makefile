PORTNAME=	frontbase
PORTVERSION=	2.5.6
CATEGORIES=	databases java
MASTER_SITES+=	http://www.frontbase.com/download/JDBC/
PKGNAMESUFFIX=	-jdbc
DISTNAME=	FrontBaseJDBC-${PORTVERSION}
EXTRACT_SUFX=	.tar

MAINTAINER?=	ports@FreeBSD.org
COMMENT=	The Java JDBC implementation for FrontBase
WWW=		http://www.frontbase.com/

USES=		java

NO_BUILD=	yes
JARFILE=	frontbasejdbc.jar
PLIST_FILES=	%%JAVAJARDIR%%/${JARFILE}

SUB_FILES+=	pkg-message

do-install:
	@${INSTALL_DATA} ${WRKSRC}/${JARFILE} ${STAGEDIR}${JAVAJARDIR}/${JARFILE}

.include <bsd.port.mk>
