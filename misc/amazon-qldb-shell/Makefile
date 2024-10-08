PORTNAME=	amazon-qldb-shell
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.2
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	QLDB interactive shell to interact with Amazon Quantum Ledger Database
WWW=		https://github.com/awslabs/amazon-qldb-shell

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN=		unknown feature `stdsimd`, ahash requires the removed feature, see https://github.com/awslabs/amazon-qldb-shell/issues/587

BUILD_DEPENDS=	cmake:devel/cmake-core \
		rust-nightly>0:lang/rust-nightly # #![feature(rustc_attrs)] => #![feature]` may not be used on the stable release channel

USES=		cargo llvm:min=15

USE_GITHUB=	yes
GH_ACCOUNT=	awslabs

MAKE_ENV=	LIBCLANG_PATH=${LLVM_PREFIX}/lib

CARGO_BUILDDEP=	no
CARGO_CRATES=	ahash-0.7.6 \
		aho-corasick-0.7.18 \
		android_system_properties-0.1.4 \
		ansi_term-0.12.1 \
		anyhow-1.0.65 \
		arrayvec-0.7.2 \
		async-trait-0.1.57 \
		atty-0.2.14 \
		autocfg-1.1.0 \
		aws-config-0.49.0 \
		aws-endpoint-0.49.0 \
		aws-http-0.49.0 \
		aws-sdk-qldbsession-0.19.0 \
		aws-sdk-sso-0.19.0 \
		aws-sdk-sts-0.19.0 \
		aws-sig-auth-0.49.0 \
		aws-sigv4-0.49.0 \
		aws-smithy-async-0.49.0 \
		aws-smithy-client-0.49.0 \
		aws-smithy-http-0.49.0 \
		aws-smithy-http-tower-0.49.0 \
		aws-smithy-json-0.49.0 \
		aws-smithy-query-0.49.0 \
		aws-smithy-types-0.49.0 \
		aws-smithy-xml-0.49.0 \
		aws-types-0.49.0 \
		base64-0.12.3 \
		base64-0.13.0 \
		bb8-0.8.0 \
		bigdecimal-0.2.2 \
		bindgen-0.60.1 \
		bitflags-1.3.2 \
		block-buffer-0.10.2 \
		bumpalo-3.10.0 \
		byteorder-1.4.3 \
		bytes-0.4.12 \
		bytes-1.2.1 \
		bytes-utils-0.1.2 \
		cc-1.0.73 \
		cexpr-0.6.0 \
		cfg-if-1.0.0 \
		chrono-0.4.22 \
		clang-sys-1.3.3 \
		clap-2.34.0 \
		clap-3.2.17 \
		clap_lex-0.2.4 \
		clipboard-win-4.4.2 \
		cmake-0.1.48 \
		comfy-table-6.1.0 \
		core-foundation-0.9.3 \
		core-foundation-sys-0.8.3 \
		cpufeatures-0.2.2 \
		crossbeam-channel-0.5.6 \
		crossbeam-utils-0.8.11 \
		crossterm-0.25.0 \
		crossterm_winapi-0.9.0 \
		crypto-common-0.1.6 \
		ct-logs-0.8.0 \
		delegate-0.5.2 \
		digest-0.10.5 \
		dirs-4.0.0 \
		dirs-next-2.0.0 \
		dirs-sys-0.3.7 \
		dirs-sys-next-0.1.2 \
		either-1.7.0 \
		endian-type-0.1.2 \
		env_logger-0.9.0 \
		errno-0.2.8 \
		errno-dragonfly-0.1.2 \
		error-code-2.3.1 \
		fastrand-1.8.0 \
		fd-lock-3.0.6 \
		fnv-1.0.7 \
		form_urlencoded-1.1.0 \
		fuchsia-cprng-0.1.1 \
		futures-0.3.24 \
		futures-channel-0.3.24 \
		futures-core-0.3.24 \
		futures-executor-0.3.24 \
		futures-io-0.3.24 \
		futures-macro-0.3.24 \
		futures-sink-0.3.24 \
		futures-task-0.3.24 \
		futures-util-0.3.24 \
		generic-array-0.14.6 \
		gethostname-0.2.3 \
		getrandom-0.2.7 \
		glob-0.3.0 \
		h2-0.3.13 \
		hashbrown-0.12.3 \
		hashlink-0.8.1 \
		heck-0.3.3 \
		heck-0.4.0 \
		hermit-abi-0.1.19 \
		hex-0.4.3 \
		http-0.2.8 \
		http-body-0.4.5 \
		httparse-1.7.1 \
		httpdate-1.0.2 \
		humantime-2.1.0 \
		hyper-0.14.20 \
		hyper-rustls-0.22.1 \
		iana-time-zone-0.1.46 \
		idna-0.3.0 \
		indexmap-1.9.1 \
		instant-0.1.12 \
		io-lifetimes-0.7.2 \
		ion-c-sys-0.4.15 \
		ion-c-sys-macros-0.1.1 \
		ion-rs-0.13.0 \
		ion-rs-0.14.0 \
		iovec-0.1.4 \
		itertools-0.10.3 \
		itoa-1.0.3 \
		js-sys-0.3.59 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		libc-0.2.131 \
		libloading-0.7.3 \
		linux-raw-sys-0.0.46 \
		lock_api-0.4.7 \
		log-0.4.17 \
		matchers-0.1.0 \
		memchr-2.5.0 \
		minimal-lexical-0.2.1 \
		mio-0.8.4 \
		nibble_vec-0.1.0 \
		nix-0.24.2 \
		nom-7.1.1 \
		num-bigint-0.3.3 \
		num-integer-0.1.45 \
		num-traits-0.2.15 \
		num_cpus-1.13.1 \
		num_threads-0.1.6 \
		once_cell-1.13.0 \
		openssl-probe-0.1.5 \
		os_str_bytes-6.3.0 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.3 \
		paste-1.0.8 \
		peeking_take_while-0.1.2 \
		percent-encoding-2.2.0 \
		pin-project-1.0.12 \
		pin-project-internal-1.0.12 \
		pin-project-lite-0.2.9 \
		pin-utils-0.1.0 \
		ppv-lite86-0.2.16 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.43 \
		quote-1.0.21 \
		radix_trie-0.2.1 \
		rand-0.4.6 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.3.1 \
		rand_core-0.4.2 \
		rand_core-0.6.3 \
		rdrand-0.4.0 \
		redox_syscall-0.2.16 \
		redox_users-0.4.3 \
		regex-1.6.0 \
		regex-automata-0.1.10 \
		regex-syntax-0.6.27 \
		remove_dir_all-0.5.3 \
		ring-0.16.20 \
		rustc-hash-1.1.0 \
		rustc_version-0.4.0 \
		rustix-0.35.7 \
		rustls-0.19.1 \
		rustls-native-certs-0.5.0 \
		rustversion-1.0.9 \
		rustyline-10.0.0 \
		rustyline-derive-0.7.0 \
		ryu-1.0.11 \
		schannel-0.1.20 \
		scopeguard-1.1.0 \
		sct-0.6.1 \
		security-framework-2.6.1 \
		security-framework-sys-2.6.1 \
		semver-1.0.13 \
		serde-1.0.144 \
		serde_derive-1.0.144 \
		serde_json-1.0.83 \
		sha2-0.10.6 \
		sharded-slab-0.1.4 \
		shlex-1.1.0 \
		signal-hook-0.3.14 \
		signal-hook-mio-0.2.3 \
		signal-hook-registry-1.4.0 \
		slab-0.4.7 \
		smallvec-1.9.0 \
		socket2-0.4.4 \
		spin-0.5.2 \
		str-buf-1.0.6 \
		strsim-0.8.0 \
		strsim-0.10.0 \
		structopt-0.3.26 \
		structopt-derive-0.4.18 \
		strum-0.24.1 \
		strum_macros-0.24.3 \
		syn-1.0.99 \
		tempdir-0.3.7 \
		termcolor-1.1.3 \
		textwrap-0.11.0 \
		textwrap-0.15.0 \
		thiserror-1.0.37 \
		thiserror-impl-1.0.37 \
		thread_local-1.1.4 \
		time-0.1.44 \
		time-0.3.13 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.0 \
		tokio-1.21.2 \
		tokio-macros-1.8.0 \
		tokio-rustls-0.22.0 \
		tokio-stream-0.1.9 \
		tokio-util-0.7.3 \
		tower-0.4.13 \
		tower-layer-0.3.1 \
		tower-service-0.3.2 \
		tracing-0.1.37 \
		tracing-appender-0.2.2 \
		tracing-attributes-0.1.23 \
		tracing-bunyan-formatter-0.3.3 \
		tracing-core-0.1.30 \
		tracing-log-0.1.3 \
		tracing-subscriber-0.3.15 \
		try-lock-0.2.3 \
		typenum-1.15.0 \
		unicode-bidi-0.3.8 \
		unicode-ident-1.0.3 \
		unicode-normalization-0.1.21 \
		unicode-segmentation-1.9.0 \
		unicode-width-0.1.9 \
		untrusted-0.7.1 \
		url-2.3.1 \
		urlencoding-2.1.0 \
		utf8parse-0.2.0 \
		valuable-0.1.0 \
		vec_map-0.8.2 \
		version_check-0.9.4 \
		want-0.3.0 \
		wasi-0.10.0+wasi-snapshot-preview1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.82 \
		wasm-bindgen-backend-0.2.82 \
		wasm-bindgen-macro-0.2.82 \
		wasm-bindgen-macro-support-0.2.82 \
		wasm-bindgen-shared-0.2.82 \
		web-sys-0.3.59 \
		webpki-0.21.4 \
		which-4.2.5 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.36.1 \
		windows_aarch64_msvc-0.36.1 \
		windows_i686_gnu-0.36.1 \
		windows_i686_msvc-0.36.1 \
		windows_x86_64_gnu-0.36.1 \
		windows_x86_64_msvc-0.36.1 \
		xmlparser-0.13.3 \
		zeroize-1.5.7 \
		amazon-qldb-driver,amazon-qldb-driver-core@git+https://github.com/awslabs/amazon-qldb-driver-rust?branch=main\#632d2bdc843c0cd7b5f57b902fbd073c27fc3364

PLIST_FILES=	bin/qldb

.include <bsd.port.mk>
