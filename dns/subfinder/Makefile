PORTNAME=	subfinder
DISTVERSIONPREFIX=	v
DISTVERSION=	2.4.8
CATEGORIES=	dns

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Subdomain discovery tool that discovers valid subdomains for websites

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/../LICENSE.md

USES=		go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	projectdiscovery
GH_TUPLE=	\
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		go-yaml:yaml:496545a6307b:go_yaml_yaml/vendor/gopkg.in/yaml.v3 \
		golang:net:e915ea6b2b7d:golang_net/vendor/golang.org/x/net \
		golang:sys:37df388d1f33:golang_sys/vendor/golang.org/x/sys \
		hako:durafmt:3a2c319c1acd:hako_durafmt/vendor/github.com/hako/durafmt \
		json-iterator:go:v1.1.10:json_iterator_go/vendor/github.com/json-iterator/go \
		lib:pq:v1.10.0:lib_pq/vendor/github.com/lib/pq \
		logrusorgru:aurora:v2.0.3:logrusorgru_aurora/vendor/github.com/logrusorgru/aurora \
		miekg:dns:v1.1.41:miekg_dns/vendor/github.com/miekg/dns \
		modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
		modern-go:reflect2:v1.0.1:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		projectdiscovery:chaos-client:v0.1.8:projectdiscovery_chaos_client/vendor/github.com/projectdiscovery/chaos-client \
		projectdiscovery:dnsx:v1.0.3:projectdiscovery_dnsx/vendor/github.com/projectdiscovery/dnsx \
		projectdiscovery:fdmax:v0.0.3:projectdiscovery_fdmax/vendor/github.com/projectdiscovery/fdmax \
		projectdiscovery:gologger:v1.1.4:projectdiscovery_gologger/vendor/github.com/projectdiscovery/gologger \
		projectdiscovery:retryabledns:eec3ac17d61e:projectdiscovery_retryabledns/vendor/github.com/projectdiscovery/retryabledns \
		rs:xid:v1.3.0:rs_xid/vendor/github.com/rs/xid \
		stretchr:testify:v1.7.0:stretchr_testify/vendor/github.com/stretchr/testify \
		tomnomnom:linkheader:02ca5825eb80:tomnomnom_linkheader/vendor/github.com/tomnomnom/linkheader

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}
GO_TARGET=	./cmd/${PORTNAME}

WRKSRC_SUBDIR=	v2

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
