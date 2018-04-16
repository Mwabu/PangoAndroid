#! /usr/bin/env bash
# Note this script requires an environment variable called ANDROID_NDK_HOME, mine is /Users/guysherman/Library/Android/ndk-bundle

echo "TOP is: $TOP"
echo "Toolchain is: $TOOLCHAIN"
echo "Sysroot is: $SYSROOT"



with_download=false
with_extract=false
with_iconv=true
with_ffi=true
with_zlib=true
with_xml2=true
with_png=true
with_gettext=true
with_glib=true
with_gi=true
with_atk=true
with_pixman=true
with_ft2=true
with_fc=true
with_cairo=true
with_harfbuzz=true
with_pango=true
with_download_all=false
with_extract_all=true

mkdir -p downloads

rm -f $SYSROOT/usr/lib/libz.so

pushd glob
make clean
make
make install
popd

pushd cpufeatures
make clean
make
make install
popd

set -e

#while :; do
#  case "$1" in
#	--with-download) with_download=true; shift;;
#    --with-iconv) with_iconv=true; shift;;
#	--with-ffi) with_ffi=true; shift;;
#	--with-gettext) with_gettext=true; shift;;
#	--with-glib) with_glib=true; shift;;
#	--with-gi) with_gi=true; shift;;
#	--with-atk) with_atk=true; shift;;
#	--with-xml2) with_xml2=true; shift;;
#	--with-pixman) with_pixman=true; shift;;
#	--with-ft2) with_ft2=true; shift;;
#	--with-zlib) with_zlib=true; shift;;
#	--with-png) with_png=true; shift;;
#	--with-fc) wtrueith_fc=true; shift;;
#	--with-cairo) with_cairo=true; shift;;
#	--with-pango) with_pango=true; shift;;
#	--with-harfbuzz) with_harfbuzz=true; shift;;
#    *) break ;;
#  esac
#done

if $with_download_all; then
	mkdir downloads
	pushd downloads
	wget http://ftp.gnu.org/pub/gnu/libiconv/libiconv-1.14.tar.gz
	wget ftp://sourceware.org/pub/libffi/libffi-3.2.1.tar.gz
	wget ftp://xmlsoft.org/libxml2/libxml2-2.9.3.tar.gz
	wget http://zlib.net/zlib-1.2.11.tar.gz
	wget http://downloads.sourceforge.net/project/libpng/libpng16/1.6.34/libpng-1.6.34.tar.xz
	wget http://ftp.gnu.org/pub/gnu/gettext/gettext-0.19.7.tar.xz
	wget http://ftp.gnome.org/pub/gnome/sources/glib/2.48/glib-2.48.2.tar.xz
	wget http://ftp.gnome.org/pub/gnome/sources/atk/2.20/atk-2.20.0.tar.xz
	wget https://www.cairographics.org/releases/pixman-0.34.0.tar.gz
	wget http://download.savannah.gnu.org/releases/freetype/freetype-2.6.3.tar.gz
	wget https://www.freedesktop.org/software/fontconfig/release/fontconfig-2.11.1.tar.gz
	wget https://www.cairographics.org/releases/cairo-1.14.6.tar.xz
	wget https://www.freedesktop.org/software/harfbuzz/release/harfbuzz-1.2.6.tar.bz2
	wget http://ftp.gnome.org/pub/GNOME/sources/pango/1.40/pango-1.40.1.tar.xz
	popd
fi

if $with_extract_all; then
	tar -xzf downloads/libiconv-1.14.tar.gz -C .
	tar -xzf downloads/libffi-3.2.1.tar.gz -C .
	tar -xzf downloads/libxml2-2.9.3.tar.gz -C .
	tar -xzf downloads/zlib-1.2.11.tar.gz -C .
	tar -xf downloads/libpng-1.6.34.tar.xz -C .
	tar -xf downloads/gettext-0.19.7.tar.xz -C .
	tar -xf downloads/glib-2.48.2.tar.xz -C .
	tar -xf downloads/atk-2.20.0.tar.xz -C .
	tar -xzf downloads/pixman-0.34.0.tar.gz -C .
	tar -xzf downloads/freetype-2.6.3.tar.gz -C .
	tar -xzf downloads/fontconfig-2.11.1.tar.gz -C .
	tar -xf downloads/cairo-1.14.6.tar.xz -C .
	tar -xf downloads/harfbuzz-1.2.6.tar.bz2 -C .
	tar -xf downloads/pango-1.40.1.tar.xz -C .
fi

if $with_iconv; then
	if $with_download; then
		pushd downloads
			wget http://ftp.gnu.org/pub/gnu/libiconv/libiconv-1.14.tar.gz
		popd
	fi

	if $with_extract; then
		tar -xzf downloads/libiconv-1.14.tar.gz -C .
	fi
	pushd libiconv-1.14
	./autogen.sh --skip-gnulib
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR  CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX"  LDFLAGS="$HOSTLDFLAGS"
	make clean
	make -j 5
	make install
	popd
fi

if $with_ffi; then
	if $with_download; then
		pushd downloads
			wget ftp://sourceware.org/pub/libffi/libffi-3.2.1.tar.gz
		popd
	fi
	if $with_extract; then
		tar -xzf downloads/libffi-3.2.1.tar.gz -C .
	fi
	
	pushd libffi-3.2.1
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR  CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -I$TOP/libffi-extra/src" LDFLAGS="$HOSTLDFLAGS"
	make clean
	make -j 5
	make install
	popd
fi

if $with_zlib; then
	if $with_download; then
		pushd downloads
			wget http://zlib.net/zlib-1.2.11.tar.gz
		popd
	fi
	if $with_extract; then
		tar -xzf downloads/zlib-1.2.11.tar.gz -C .
	fi
	
	pushd zlib-1.2.11
	./configure --static --prefix=$INSTALLDIR
	make clean
	make -j 5
	make install
	popd
fi

if $with_xml2; then
	if $with_download; then
		pushd downloads
			wget ftp://xmlsoft.org/libxml2/libxml2-2.9.3.tar.gz
		popd
	fi
	if $with_extract; then
		tar -xzf downloads/libxml2-2.9.3.tar.gz -C .
	fi
	
	pushd libxml2-2.9.3
	./configure --host=$CONFIGURE_HOST $FIXSTATIC --without-python --without-threads --enable-rebuild-docs=no --without-ftp --prefix=$INSTALLDIR CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX" LDFLAGS="$HOSTLDFLAGS -L$TOP/glob -lglob"
	make clean
	make -j 5
	make install
	popd
fi


# PNG
# Depends: zlib
# Note: remove libz.so from your toolchain, otherwise the compiler will try to link
# against the shitty old zlib 1.2.3 and it won't be happy

if $with_png; then
	if $with_download; then
		pushd downloads
			wget http://downloads.sourceforge.net/project/libpng/libpng16/1.6.34/libpng-1.6.34.tar.xz
		popd
	fi
	if $with_extract; then
		tar -xf downloads/libpng-1.6.34.tar.xz -C .
	fi
	
	pushd libpng-1.6.34
	./configure --host=$CONFIGURE_HOST $FIXSTATIC --prefix=$INSTALLDIR CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -Duint64_t=__uint64_t -static" LDFLAGS="$HOSTLDFLAGS -L$SYSROOT/usr/lib -static -lz"
	make clean
	make -j 5
	make install
	popd
fi

# GETTEXT
# Depends: iconv

if $with_gettext; then
	if $with_download; then
		pushd downloads
			wget http://ftp.gnu.org/pub/gnu/gettext/gettext-0.19.7.tar.xz
		popd
	fi
	if $with_extract; then
		tar -xf downloads/gettext-0.19.7.tar.xz -C .
	fi
	
	pushd gettext-0.19.7
	./autogen.sh --skip-gnulib
	patch gettext-runtime/gnulib-lib/localcharset.c ../gettext-extra/gettext-runtime_gnulib-lib_localcharset.patch
	patch gettext-runtime/intl/localcharset.c ../gettext-extra/gettext-runtime_intl_localcharset.patch
	patch gettext-tools/gnulib-lib/localcharset.c ../gettext-extra/gettext-tools_gnulib-lib_localcharset.patch
	patch gettext-tools/libgettextpo/localcharset.c ../gettext-extra/gettext-tools_libgettextpo_localcharset.patch
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR --with-included-gettext --disable-java --disable-native-java --disable-threads --disable-libasprintf --without-emacs CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -DUSE_ICONV_LOCALE_CHARSET -Dpw_gecos=pw_name -I$TOP/gettext-extra" LDFLAGS="$HOSTLDFLAGS" LIBS="-liconv -lcharset" gl_cv_func_memchr_works=yes ac_cv_func_strnlen_working=yes
	make clean
	make -j 5
	make install
	popd
fi

# GLIB
# Depends: gettext, iconv, ffi

if $with_glib; then
	if $with_download; then
		pushd downloads
			wget http://ftp.gnome.org/pub/gnome/sources/glib/2.48/glib-2.48.2.tar.xz
		popd
	fi
	if $with_extract; then
		tar -xf downloads/glib-2.48.2.tar.xz -C .
	fi
	
	pushd glib-2.48.2
	NOCONFIGURE=1 ./autogen.sh
	#patch gio/gnetworkmonitornetlink.c ../glib-extra/gnetworkmonitornetlink-droid.patch
	patch gio/gthreadedresolver.c ../glib-extra/gthreadedresolver-droid.patch
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR --enable-gc-friendly --with-pcre=internal  CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -Dpw_gecos=pw_name -I$SYSROOT/usr/lib/libffi-3.2.1/include -I$TOP/glib-extra" LDFLAGS="$HOSTLDFLAGS" LIBS="-lintl -liconv -lgettextpo -lffi -lcharset" glib_cv_stack_grows=no glib_cv_uscore=no glib_os_android=yes ac_cv_func_posix_getpwuid_r=no ac_cv_func_posix_getgrgid_r=no with_libiconv=gnu ac_cv_working_alloca_h=no
	make clean
	make
	make install
	popd
fi

# if $with_gi; then
# 	pushd gobject-introspection-1.31.22
# 	./configure --host=$CONFIGURE_HOST $FIXSHARED2 --disable-tests --with-glib-src=../glib-2.40.0 CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -marm -I$TOOLCHAIN/../include" LDFLAGS="$HOSTLDFLAGS"
# 	make
# 	popd
# fi

# ATK
# Depends: ffi
if $with_atk; then
	if $with_download; then
		pushd downloads
			wget http://ftp.gnome.org/pub/gnome/sources/atk/2.20/atk-2.20.0.tar.xz
		popd
	fi
	if $with_extract; then
		tar -xf downloads/atk-2.20.0.tar.xz -C .
	fi
	
	pushd atk-2.20.0
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR --disable-glibtest CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -I$SYSROOT/usr/lib/libffi-3.2.1/include" LDFLAGS="$HOSTLDFLAGS -lffi" INTROSPECTION_SCANNER=g-ir-scanner LIBS="-lffi"
	make clean
	make
	make install
	popd
fi

# PIXMAN

if $with_pixman; then
	if $with_download; then
		pushd downloads
			wget https://www.cairographics.org/releases/pixman-0.34.0.tar.gz
		popd
	fi
	if $with_extract; then
		tar -xzf downloads/pixman-0.34.0.tar.gz -C .
	fi
	
	pushd pixman-0.34.0
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR CFLAGS="-DPIXMAN_NO_TLS -DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -I$TOP/pixman-extra -I$TOP/cpufeatures -include pixman-elf-fix.h" LDFLAGS="$HOSTLDFLAGS -L$TOP/cpufeatures -lcpu-features" --disable-arm-simd --disable-arm-neon
	make clean
	make
	make install
	popd
fi

# FREETYPE2
# Depends png, zlib

if $with_ft2; then
	if $with_download; then
		pushd downloads
			wget http://download.savannah.gnu.org/releases/freetype/freetype-2.6.3.tar.gz
		popd
	fi
	if $with_extract; then
		tar -xzf downloads/freetype-2.6.3.tar.gz -C .
	fi
	
	pushd freetype-2.6.3
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -Duint64_t=__uint64_t" LDFLAGS="$HOSTLDFLAGS" --without-harfbuzz
	make clean
	make
	make install
	popd
fi

# FONTCONFIG
# Depends: freetype2

if $with_fc; then
	if $with_download; then
		pushd downloads
			wget https://www.freedesktop.org/software/fontconfig/release/fontconfig-2.11.1.tar.gz
		popd
	fi
	if $with_extract; then
		tar -xzf downloads/fontconfig-2.11.1.tar.gz -C .
	fi
	
	pushd fontconfig-2.11.1
	./configure --build=i686-pc-linux-gnu --host=$CONFIGURE_HOST $FIXSHARED --with-freetype-config=$INSTALLDIR/bin/freetype-config --enable-libxml2 --with-default-fonts=/system/fonts --disable-docs --prefix=$INSTALLDIR CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -I$TOP/fontconfig-extra/src" LDFLAGS="$HOSTLDFLAGS"
	make clean
	make
	make install
	popd
fi

# CAIRO
# Depends: pixman, freetype2, glib, fontconfig

if $with_cairo; then
	if $with_download; then
		pushd downloads
			wget https://www.cairographics.org/releases/cairo-1.14.6.tar.xz
		popd
	fi
	if $with_extract; then
		tar -xf downloads/cairo-1.14.6.tar.xz -C .
	fi
	
	pushd cairo-1.14.6
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR --enable-ps=no --enable-pdf=no --enable-svg=no --enable-xlib=no FREETYPE_CONFIG=no CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -DCAIRO_NO_MUTEX -I$TOP/cairo-extra" LDFLAGS="$HOSTLDFLAGS -lffi" LIBS="-lm -lffi" ac_cv_func_sched_getaffinity=no
	make clean
	make
	make install
	popd
fi

if $with_harfbuzz; then
	if $with_download; then
		pushd downloads
			wget https://www.freedesktop.org/software/harfbuzz/release/harfbuzz-1.2.6.tar.bz2
		popd
	fi
	if $with_extract; then
		tar -xf downloads/harfbuzz-1.2.6.tar.bz2 -C .
	fi
	
	pushd harfbuzz-1.2.6
	NOCONFIGURE=1 ./autogen.sh
	./configure --host=$CONFIGURE_HOST $FIXSHARED --prefix=$INSTALLDIR CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX" LD=$HOST-ld LDFLAGS="$HOSTLDFLAGS"
	make clean
	make
	make install
	popd
fi

if $with_pango; then
	if $with_download; then
		pushd downloads
			wget http://ftp.gnome.org/pub/GNOME/sources/pango/1.40/pango-1.40.1.tar.xz
		popd
	fi
	if $with_extract; then
		tar -xf downloads/pango-1.40.1.tar.xz -C .
	fi
	
	pushd pango-1.40.1
	NOCONFIGURE=1 ./autogen.sh
	cp ../pango-extra/config.guess config.guess
	cp ../pango-extra/config.sub config.sub
	./configure --host=$CONFIGURE_HOST $FIXSHARED --without-x --with-included-modules=yes --prefix=$INSTALLDIR CFLAGS="-DWCHAR_MIN=INT_MIN -DWCHAR_MAX=INT_MAX -I$TOP/pango-extra" LD=$HOST-ld LDFLAGS="$HOSTLDFLAGS" 
	make clean
	make
	make install
	popd
fi




