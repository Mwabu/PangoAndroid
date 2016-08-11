# Building Pango and Friends for Android

There are scripts, and some extra bits and pieces in this repository to allow you to build pango
and its necessary dependencies for android, both ARM and x86.


## Getting a toolchain
Before you can build, you need to set up a toolchain. You can do this by running the following command. Note that `$NDK` might be `$NDK_ROOT`, or you may even have to set it up yourself.

```
$> $NDK/build/tools/make-standalone-toolchain.sh \
--arch=arm --platform=android-16 --install-dir=/tmp/my-android-toolchain
```


## Setting up the build scripts
Once you have your toolchains (you can get x86 by using `--arch=x86`, see more https://developer.android.com/ndk/guides/standalone_toolchain.html), you'll need to set the location of your toolchains in `build-libs-arm.sh` and `build-libs-x86.sh`:

```
export TOOLCHAIN=<path-to-your-toolchain>/bin
```

## Running the scripts
To build everything, just run the script for the platform you wish to build for, eg for arm:

```
$> ./build-libs-arm.sh
```

The script runs in several phases. First it downloads particular versions of all the library sources.
Then it extracts the downloaded libraries, and then it begins building the libraries in an order that seems
to satisfy all the dependencies.

You can narrow down the stages of the build that you want to execute with commandline arguments:

* `--skip-download`: don't download libraries (ie you've already got them)
* `--skip-extract`: don't extract zips (ie you've already done that)
* `--skip-iconv`: don't build libiconv
* `--skip-ffi`: don't build libffi
* `--skip-gettext`: don't build gettext (libintl)
* `--skip-glib`: don't build glib
* `--skip-atk`: don't build atk
* `--skip-xml2`: don't build libxml2
* `--skip-pixman`: don't build pixman
* `--skip-ft2`: don't build freetype2
* `--skip-zlib`: don't build zlib
* `--skip-png`: don't build libpng
* `--skip-fc`: don't build fontconfig
* `--skip-cairo`: don't build cairo
* `--skip-pango`: don't build pango
* `--skip-harfbuzz`: don't build harfbuzz

## TODO

* Create a script to package this all up
* Create a template `Android.mk` file

### Acknowledgements

So I based my starting point for this on the work of Dr C. Scott Ananian: http://cananian.livejournal.com/63595.html
