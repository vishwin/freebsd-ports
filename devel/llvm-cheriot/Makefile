# llvm-cheriot

LLVM_SUFFIX=	-cheriot

COMMENT=	LLVM and Clang with support the CHERIoT microcontroller
WWW=		https://www.microsoft.com/en-us/research/publication/cheriot-rethinking-security-for-low-cost-embedded-systems/

DISTINFO_FILE=	${.CURDIR}/distinfo
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

GH_ACCOUNT=	CHERIoT-Platform

OPTIONS_EXCLUDE=	XTOOLCHAIN STATIC_LIBS

LLVM_TARGETS=          RISCV
CMAKE_FLAGS+=	-DLLVM_DEFAULT_TARGET_TRIPLE=riscv32-unknown-unknown

DOCS_BUILD_DEPENDS= \
	${PYTHON_PKGNAMEPREFIX}myst-parser>0:textproc/py-myst-parser@${PY_FLAVOR}

MASTERDIR=	${.CURDIR}/../llvm-cheri

.include "${MASTERDIR}/Makefile"
