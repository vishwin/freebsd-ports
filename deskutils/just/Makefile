PORTNAME=	just
DISTVERSION=	1.40.0
PORTREVISION=	3
CATEGORIES=	deskutils

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Just a command runner: handy way to save/run project-specific commands
WWW=		https://just.systems/ \
		https://github.com/casey/just

LICENSE=	CC0-1.0
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_armv7=	compilation fails: error[E0308]: mismatched types, see https://github.com/dotenv-rs/dotenv/issues/83

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	casey

CARGO_CRATES=	aho-corasick-1.1.3 \
		android-tzdata-0.1.1 \
		android_system_properties-0.1.5 \
		ansi_term-0.12.1 \
		anstream-0.6.18 \
		anstyle-1.0.10 \
		anstyle-parse-0.2.6 \
		anstyle-query-1.1.2 \
		anstyle-wincon-3.0.7 \
		arrayref-0.3.9 \
		arrayvec-0.7.6 \
		autocfg-1.4.0 \
		bitflags-2.9.0 \
		blake3-1.6.1 \
		block-buffer-0.10.4 \
		bstr-1.11.3 \
		bumpalo-3.17.0 \
		camino-1.1.9 \
		cc-1.2.16 \
		cfg-if-1.0.0 \
		cfg_aliases-0.2.1 \
		chrono-0.4.40 \
		clap-4.5.31 \
		clap_builder-4.5.31 \
		clap_complete-4.5.46 \
		clap_derive-4.5.28 \
		clap_lex-0.7.4 \
		clap_mangen-0.2.26 \
		colorchoice-1.0.3 \
		constant_time_eq-0.3.1 \
		core-foundation-sys-0.8.7 \
		cpufeatures-0.2.17 \
		crossbeam-deque-0.8.6 \
		crossbeam-epoch-0.9.18 \
		crossbeam-utils-0.8.21 \
		crypto-common-0.1.6 \
		ctrlc-3.4.5 \
		derive-where-1.2.7 \
		diff-0.1.13 \
		digest-0.10.7 \
		dirs-5.0.1 \
		dirs-6.0.0 \
		dirs-sys-0.4.1 \
		dirs-sys-0.5.0 \
		dotenvy-0.15.7 \
		edit-distance-2.1.3 \
		either-1.15.0 \
		env_home-0.1.0 \
		errno-0.3.10 \
		executable-path-1.0.0 \
		fastrand-2.3.0 \
		generic-array-0.14.7 \
		getopts-0.2.21 \
		getrandom-0.2.15 \
		getrandom-0.3.1 \
		heck-0.5.0 \
		hermit-abi-0.3.9 \
		iana-time-zone-0.1.61 \
		iana-time-zone-haiku-0.1.2 \
		is_executable-1.0.4 \
		is_terminal_polyfill-1.70.1 \
		itoa-1.0.15 \
		js-sys-0.3.77 \
		lexiclean-0.0.1 \
		libc-0.2.170 \
		libredox-0.1.3 \
		linux-raw-sys-0.4.15 \
		linux-raw-sys-0.9.2 \
		log-0.4.26 \
		memchr-2.7.4 \
		memmap2-0.9.5 \
		nix-0.29.0 \
		num-traits-0.2.19 \
		num_cpus-1.16.0 \
		once_cell-1.20.3 \
		option-ext-0.2.0 \
		percent-encoding-2.3.1 \
		ppv-lite86-0.2.21 \
		pretty_assertions-1.4.1 \
		proc-macro2-1.0.94 \
		pulldown-cmark-0.9.6 \
		pulldown-cmark-to-cmark-10.0.4 \
		quote-1.0.39 \
		rand-0.9.0 \
		rand_chacha-0.9.0 \
		rand_core-0.9.3 \
		rayon-core-1.12.1 \
		redox_users-0.4.6 \
		redox_users-0.5.0 \
		regex-1.11.1 \
		regex-automata-0.4.9 \
		regex-syntax-0.8.5 \
		roff-0.2.2 \
		rustix-0.38.44 \
		rustix-1.0.1 \
		rustversion-1.0.20 \
		ryu-1.0.20 \
		semver-1.0.26 \
		serde-1.0.219 \
		serde_derive-1.0.219 \
		serde_json-1.0.140 \
		sha2-0.10.8 \
		shellexpand-3.1.0 \
		shlex-1.3.0 \
		similar-2.7.0 \
		snafu-0.8.5 \
		snafu-derive-0.8.5 \
		strsim-0.11.1 \
		strum-0.27.1 \
		strum_macros-0.27.1 \
		syn-2.0.99 \
		target-2.1.0 \
		tempfile-3.18.0 \
		temptree-0.2.0 \
		terminal_size-0.4.2 \
		thiserror-1.0.69 \
		thiserror-2.0.12 \
		thiserror-impl-1.0.69 \
		thiserror-impl-2.0.12 \
		typed-arena-2.0.2 \
		typenum-1.18.0 \
		unicase-2.8.1 \
		unicode-ident-1.0.18 \
		unicode-segmentation-1.12.0 \
		unicode-width-0.1.14 \
		unicode-width-0.2.0 \
		utf8parse-0.2.2 \
		uuid-1.15.1 \
		version_check-0.9.5 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasi-0.13.3+wasi-0.2.2 \
		wasm-bindgen-0.2.100 \
		wasm-bindgen-backend-0.2.100 \
		wasm-bindgen-macro-0.2.100 \
		wasm-bindgen-macro-support-0.2.100 \
		wasm-bindgen-shared-0.2.100 \
		which-7.0.2 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-core-0.52.0 \
		windows-link-0.1.0 \
		windows-sys-0.48.0 \
		windows-sys-0.59.0 \
		windows-targets-0.48.5 \
		windows-targets-0.52.6 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.6 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.6 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.6 \
		windows_i686_gnullvm-0.52.6 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.6 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.6 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.6 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.6 \
		winsafe-0.0.19 \
		wit-bindgen-rt-0.33.0 \
		yansi-1.0.1 \
		zerocopy-0.8.23 \
		zerocopy-derive-0.8.23

PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=		COMPLETIONS
OPTIONS_DEFAULT=	COMPLETIONS

COMPLETIONS_DESC=		Build and install bash, fish and zsh shell completions
COMPLETIONS_PLIST_FILES=	share/bash-completion/completions/${PORTNAME} \
				share/fish/vendor_completions.d/${PORTNAME}.fish \
				share/zsh/site-functions/_${PORTNAME}

post-install-COMPLETIONS-on:
.for _shell in bash fish zsh
	${STAGEDIR}${PREFIX}/bin/${PORTNAME} --completions ${_shell} \
		>${STAGEDIR}${PREFIX}/${COMPLETIONS_PLIST_FILES:M*${_shell}*}
.endfor

.include <bsd.port.mk>
