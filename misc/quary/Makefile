PORTNAME=	quary
DISTVERSIONPREFIX=	v
DISTVERSION=	0.3.2
PORTREVISION=	2
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Open-source BI for engineers
WWW=		https://www.quary.dev

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	quarylabs

RUSTFLAGS=	${ARCH:S/i386/YES/:C/^[a-z].*//:S/YES/-C target-feature=+sse,+sse2/} # add sse sse2 target-features only on i386

CARGO_CRATES=	addr2line-0.22.0 \
		adler-1.0.2 \
		ahash-0.7.8 \
		ahash-0.8.11 \
		aho-corasick-1.1.3 \
		allocator-api2-0.2.18 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		anstream-0.6.14 \
		anstyle-1.0.7 \
		anstyle-parse-0.2.4 \
		anstyle-query-1.1.0 \
		anstyle-wincon-3.0.3 \
		anyhow-1.0.86 \
		arrayvec-0.7.4 \
		arrow-51.0.0 \
		arrow-arith-51.0.0 \
		arrow-array-51.0.0 \
		arrow-buffer-51.0.0 \
		arrow-cast-51.0.0 \
		arrow-csv-51.0.0 \
		arrow-data-51.0.0 \
		arrow-ipc-51.0.0 \
		arrow-json-51.0.0 \
		arrow-ord-51.0.0 \
		arrow-row-51.0.0 \
		arrow-schema-51.0.0 \
		arrow-select-51.0.0 \
		arrow-string-51.0.0 \
		assert_cmd-2.0.14 \
		async-compression-0.4.11 \
		async-stream-0.3.5 \
		async-stream-impl-0.3.5 \
		async-trait-0.1.80 \
		atoi-2.0.0 \
		atomic-waker-1.1.2 \
		autocfg-1.3.0 \
		backtrace-0.3.73 \
		base64-0.21.7 \
		base64-0.22.1 \
		base64ct-1.6.0 \
		bigdecimal-0.3.1 \
		bitflags-1.3.2 \
		bitflags-2.5.0 \
		bitvec-1.0.1 \
		block-buffer-0.10.4 \
		bollard-0.16.1 \
		bollard-stubs-1.44.0-rc.2 \
		borsh-1.5.1 \
		borsh-derive-1.5.1 \
		bstr-1.9.1 \
		bumpalo-3.16.0 \
		bytecheck-0.6.12 \
		bytecheck_derive-0.6.12 \
		byteorder-1.5.0 \
		bytes-1.6.0 \
		cast-0.3.0 \
		cc-1.0.99 \
		cfg-if-1.0.0 \
		cfg_aliases-0.2.1 \
		chrono-0.4.38 \
		chrono-tz-0.8.6 \
		chrono-tz-build-0.2.1 \
		clap-4.5.7 \
		clap_builder-4.5.7 \
		clap_derive-4.5.5 \
		clap_lex-0.7.1 \
		clickhouse-rs-1.1.0-alpha.1 \
		clickhouse-rs-cityhash-sys-0.1.2 \
		colorchoice-1.0.1 \
		combine-4.6.7 \
		comfy-table-7.1.1 \
		console-0.15.8 \
		console_error_panic_hook-0.1.7 \
		const-oid-0.9.6 \
		const-random-0.1.18 \
		const-random-macro-0.1.16 \
		core-foundation-0.9.4 \
		core-foundation-sys-0.8.6 \
		cpufeatures-0.2.12 \
		crc-3.2.1 \
		crc-catalog-2.4.0 \
		crc32fast-1.4.2 \
		crossbeam-0.8.4 \
		crossbeam-channel-0.5.13 \
		crossbeam-deque-0.8.5 \
		crossbeam-epoch-0.9.18 \
		crossbeam-queue-0.3.11 \
		crossbeam-utils-0.8.20 \
		crunchy-0.2.2 \
		crypto-common-0.1.6 \
		csv-1.3.0 \
		csv-core-0.1.11 \
		darling-0.20.9 \
		darling_core-0.20.9 \
		darling_macro-0.20.9 \
		data-encoding-2.6.0 \
		der-0.7.9 \
		deranged-0.3.11 \
		difflib-0.4.0 \
		digest-0.10.7 \
		dirs-5.0.1 \
		dirs-sys-0.4.1 \
		doc-comment-0.3.3 \
		docker_credential-1.3.1 \
		dotenv-0.15.0 \
		dotenvy-0.15.7 \
		downcast-0.11.0 \
		duckdb-0.10.2 \
		dyn-clone-1.0.17 \
		either-1.12.0 \
		encode_unicode-0.3.6 \
		encoding_rs-0.8.34 \
		enum-as-inner-0.6.0 \
		equivalent-1.0.1 \
		errno-0.3.9 \
		etcetera-0.8.0 \
		event-listener-2.5.3 \
		fallible-iterator-0.3.0 \
		fallible-streaming-iterator-0.1.9 \
		fastrand-2.1.0 \
		filetime-0.2.23 \
		fixedbitset-0.4.2 \
		flatbuffers-23.5.26 \
		flate2-1.0.30 \
		flume-0.11.0 \
		fnv-1.0.7 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		fragile-2.0.0 \
		funty-2.0.0 \
		futures-0.3.30 \
		futures-channel-0.3.30 \
		futures-core-0.3.30 \
		futures-executor-0.3.30 \
		futures-intrusive-0.5.0 \
		futures-io-0.3.30 \
		futures-macro-0.3.30 \
		futures-sink-0.3.30 \
		futures-task-0.3.30 \
		futures-util-0.3.30 \
		gcp-bigquery-client-0.20.0 \
		generic-array-0.14.7 \
		getrandom-0.2.15 \
		gimli-0.29.0 \
		glob-0.3.1 \
		google-cloud-auth-0.15.0 \
		google-cloud-metadata-0.5.0 \
		google-cloud-token-0.1.2 \
		h2-0.3.26 \
		h2-0.4.5 \
		half-2.4.1 \
		hashbrown-0.12.3 \
		hashbrown-0.14.5 \
		hashlink-0.8.4 \
		heck-0.4.1 \
		heck-0.5.0 \
		hermit-abi-0.3.9 \
		hex-0.4.3 \
		hickory-proto-0.24.1 \
		hickory-resolver-0.24.1 \
		hkdf-0.12.4 \
		hmac-0.12.1 \
		home-0.5.9 \
		hostname-0.3.1 \
		http-0.2.12 \
		http-1.1.0 \
		http-body-0.4.6 \
		http-body-1.0.0 \
		http-body-util-0.1.2 \
		httparse-1.9.4 \
		httpdate-1.0.3 \
		humantime-2.1.0 \
		hyper-0.14.29 \
		hyper-1.3.1 \
		hyper-named-pipe-0.1.0 \
		hyper-rustls-0.24.2 \
		hyper-rustls-0.25.0 \
		hyper-rustls-0.26.0 \
		hyper-rustls-0.27.2 \
		hyper-tls-0.6.0 \
		hyper-util-0.1.5 \
		hyperlocal-next-0.9.0 \
		iana-time-zone-0.1.60 \
		iana-time-zone-haiku-0.1.2 \
		ident_case-1.0.1 \
		idna-0.4.0 \
		idna-0.5.0 \
		indexmap-1.9.3 \
		indexmap-2.2.6 \
		indicatif-0.17.8 \
		instant-0.1.13 \
		ipconfig-0.3.2 \
		ipnet-2.9.0 \
		is_terminal_polyfill-1.70.0 \
		itertools-0.11.0 \
		itertools-0.12.1 \
		itoa-1.0.11 \
		jobserver-0.1.31 \
		js-sys-0.3.69 \
		jsonwebtoken-9.3.0 \
		lazy_static-1.5.0 \
		lexical-core-0.8.5 \
		lexical-parse-float-0.8.5 \
		lexical-parse-integer-0.8.6 \
		lexical-util-0.8.5 \
		lexical-write-float-0.8.5 \
		lexical-write-integer-0.8.5 \
		libc-0.2.155 \
		libduckdb-sys-0.10.2 \
		libm-0.2.8 \
		libredox-0.1.3 \
		libsqlite3-sys-0.27.0 \
		linked-hash-map-0.5.6 \
		linux-raw-sys-0.4.14 \
		lock_api-0.4.12 \
		log-0.4.21 \
		lru-cache-0.1.2 \
		lz4-1.25.0 \
		lz4-sys-1.9.5 \
		match_cfg-0.1.0 \
		md-5-0.10.6 \
		memchr-2.7.4 \
		mime-0.3.17 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.7.4 \
		mio-0.8.11 \
		mockall-0.12.1 \
		mockall_derive-0.12.1 \
		multimap-0.10.0 \
		native-tls-0.2.12 \
		nom-7.1.3 \
		num-0.4.3 \
		num-bigint-0.4.5 \
		num-bigint-dig-0.8.4 \
		num-complex-0.4.6 \
		num-conv-0.1.0 \
		num-integer-0.1.46 \
		num-iter-0.1.45 \
		num-rational-0.4.2 \
		num-traits-0.2.19 \
		num_cpus-1.16.0 \
		num_threads-0.1.7 \
		number_prefix-0.4.0 \
		object-0.36.0 \
		object_store-0.9.1 \
		once_cell-1.19.0 \
		openssl-0.10.64 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.5 \
		openssl-sys-0.9.102 \
		option-ext-0.2.0 \
		parking_lot-0.11.2 \
		parking_lot-0.12.3 \
		parking_lot_core-0.8.6 \
		parking_lot_core-0.9.10 \
		parse-display-0.9.1 \
		parse-display-derive-0.9.1 \
		parse-zoneinfo-0.3.1 \
		paste-1.0.15 \
		path-clean-1.0.1 \
		pbjson-0.6.0 \
		pbjson-build-0.6.2 \
		pem-3.0.4 \
		pem-rfc7468-0.7.0 \
		percent-encoding-2.3.1 \
		petgraph-0.6.5 \
		phf-0.11.2 \
		phf_codegen-0.11.2 \
		phf_generator-0.11.2 \
		phf_shared-0.11.2 \
		pin-project-1.1.5 \
		pin-project-internal-1.1.5 \
		pin-project-lite-0.2.14 \
		pin-utils-0.1.0 \
		pkcs1-0.7.5 \
		pkcs8-0.10.2 \
		pkg-config-0.3.30 \
		portable-atomic-1.6.0 \
		powerfmt-0.2.0 \
		ppv-lite86-0.2.17 \
		predicates-3.1.0 \
		predicates-core-1.0.6 \
		predicates-tree-1.0.9 \
		prettyplease-0.2.20 \
		proc-macro-crate-3.1.0 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.86 \
		prost-0.12.6 \
		prost-build-0.12.6 \
		prost-derive-0.12.6 \
		prost-types-0.12.6 \
		ptr_meta-0.1.4 \
		ptr_meta_derive-0.1.4 \
		quick-error-1.2.3 \
		quick-xml-0.31.0 \
		quinn-0.11.2 \
		quinn-proto-0.11.3 \
		quinn-udp-0.5.2 \
		quote-1.0.36 \
		radium-0.7.0 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.4 \
		redox_syscall-0.2.16 \
		redox_syscall-0.4.1 \
		redox_syscall-0.5.2 \
		redox_users-0.4.5 \
		regex-1.10.5 \
		regex-automata-0.4.7 \
		regex-syntax-0.8.4 \
		rend-0.4.2 \
		reqwest-0.11.27 \
		reqwest-0.12.5 \
		reqwest-middleware-0.3.1 \
		reqwest-retry-0.5.0 \
		resolv-conf-0.7.0 \
		retry-policies-0.3.0 \
		ring-0.17.8 \
		rkyv-0.7.44 \
		rkyv_derive-0.7.44 \
		rsa-0.9.6 \
		rust-embed-8.4.0 \
		rust-embed-impl-8.4.0 \
		rust-embed-utils-8.4.0 \
		rust_decimal-1.35.0 \
		rustc-demangle-0.1.24 \
		rustc-hash-1.1.0 \
		rustc_version-0.4.0 \
		rustix-0.38.34 \
		rustls-0.21.12 \
		rustls-0.22.4 \
		rustls-0.23.10 \
		rustls-native-certs-0.6.3 \
		rustls-native-certs-0.7.0 \
		rustls-pemfile-1.0.4 \
		rustls-pemfile-2.1.2 \
		rustls-pki-types-1.7.0 \
		rustls-webpki-0.101.7 \
		rustls-webpki-0.102.4 \
		rustversion-1.0.17 \
		ryu-1.0.18 \
		same-file-1.0.6 \
		schannel-0.1.23 \
		scoped-tls-1.0.1 \
		scopeguard-1.2.0 \
		sct-0.7.1 \
		seahash-4.1.0 \
		security-framework-2.11.0 \
		security-framework-sys-2.11.0 \
		semver-1.0.23 \
		send_wrapper-0.6.0 \
		serde-1.0.203 \
		serde_derive-1.0.203 \
		serde_json-1.0.117 \
		serde_repr-0.1.19 \
		serde_urlencoded-0.7.1 \
		serde_with-3.8.1 \
		serde_with_macros-3.8.1 \
		serde_yaml-0.9.34+deprecated \
		sha1-0.10.6 \
		sha2-0.10.8 \
		signal-hook-registry-1.4.2 \
		signature-2.2.0 \
		simdutf8-0.1.4 \
		simple_asn1-0.6.2 \
		siphasher-0.3.11 \
		slab-0.4.9 \
		smallvec-1.13.2 \
		snafu-0.7.5 \
		snafu-derive-0.7.5 \
		snowflake-api-0.8.1 \
		snowflake-jwt-0.3.1 \
		socket2-0.5.7 \
		spin-0.9.8 \
		spki-0.7.3 \
		sqlformat-0.2.4 \
		sqlparser-0.45.0 \
		sqlx-0.7.4 \
		sqlx-core-0.7.4 \
		sqlx-macros-0.7.4 \
		sqlx-macros-core-0.7.4 \
		sqlx-mysql-0.7.4 \
		sqlx-postgres-0.7.4 \
		sqlx-sqlite-0.7.4 \
		static_assertions-1.1.0 \
		stringprep-0.1.5 \
		strsim-0.11.1 \
		structmeta-0.3.0 \
		structmeta-derive-0.3.0 \
		strum-0.25.0 \
		strum-0.26.2 \
		strum_macros-0.25.3 \
		strum_macros-0.26.4 \
		subtle-2.6.0 \
		syn-1.0.109 \
		syn-2.0.67 \
		syn_derive-0.1.8 \
		sync_wrapper-0.1.2 \
		sync_wrapper-1.0.1 \
		system-configuration-0.5.1 \
		system-configuration-sys-0.5.0 \
		tap-1.0.1 \
		tar-0.4.41 \
		tempfile-3.10.1 \
		termtree-0.4.1 \
		testcontainers-0.18.0 \
		testcontainers-modules-0.6.1 \
		thiserror-1.0.61 \
		thiserror-impl-1.0.61 \
		time-0.3.36 \
		time-core-0.1.2 \
		time-macros-0.2.18 \
		tiny-keccak-2.0.2 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.1 \
		tokio-1.38.0 \
		tokio-macros-2.3.0 \
		tokio-native-tls-0.3.1 \
		tokio-rustls-0.24.1 \
		tokio-rustls-0.25.0 \
		tokio-rustls-0.26.0 \
		tokio-stream-0.1.15 \
		tokio-util-0.7.11 \
		toml_datetime-0.6.6 \
		toml_edit-0.21.1 \
		tower-0.4.13 \
		tower-layer-0.3.2 \
		tower-service-0.3.2 \
		tracing-0.1.40 \
		tracing-attributes-0.1.27 \
		tracing-core-0.1.32 \
		try-lock-0.2.5 \
		typenum-1.17.0 \
		unicode-bidi-0.3.15 \
		unicode-ident-1.0.12 \
		unicode-normalization-0.1.23 \
		unicode-properties-0.1.1 \
		unicode-segmentation-1.11.0 \
		unicode-width-0.1.13 \
		unicode_categories-0.1.1 \
		unsafe-libyaml-0.2.11 \
		untrusted-0.9.0 \
		url-2.5.2 \
		urlencoding-2.1.3 \
		utf8parse-0.2.2 \
		uuid-1.8.0 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		wait-timeout-0.2.0 \
		walkdir-2.5.0 \
		want-0.3.1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasite-0.1.0 \
		wasm-bindgen-0.2.92 \
		wasm-bindgen-backend-0.2.92 \
		wasm-bindgen-futures-0.4.42 \
		wasm-bindgen-macro-0.2.92 \
		wasm-bindgen-macro-support-0.2.92 \
		wasm-bindgen-shared-0.2.92 \
		wasm-bindgen-test-0.3.42 \
		wasm-bindgen-test-macro-0.3.42 \
		wasm-streams-0.4.0 \
		wasm-timer-0.2.5 \
		web-sys-0.3.69 \
		webpki-roots-0.25.4 \
		webpki-roots-0.26.3 \
		whoami-1.5.1 \
		widestring-1.1.0 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.8 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-core-0.52.0 \
		windows-sys-0.48.0 \
		windows-sys-0.52.0 \
		windows-targets-0.48.5 \
		windows-targets-0.52.5 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.5 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.5 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.5 \
		windows_i686_gnullvm-0.52.5 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.5 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.5 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.5 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.5 \
		winnow-0.5.40 \
		winreg-0.50.0 \
		winreg-0.52.0 \
		wyz-0.5.1 \
		xattr-1.3.1 \
		yup-oauth2-9.0.0 \
		zerocopy-0.7.34 \
		zerocopy-derive-0.7.34 \
		zeroize-1.8.1

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
LIB_DEPENDS+=	libatomic.so:lang/gcc${GCC_DEFAULT}
LDFLAGS+=	-L/usr/local/lib/gcc${GCC_DEFAULT} -latomic
.endif

do-install:
	${INSTALL_PROGRAM} \
		${WRKDIR}/target/*/release/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
