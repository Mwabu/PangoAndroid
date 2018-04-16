# Building Pango and Friends for Android

There are scripts, and some extra bits and pieces in this repository to allow you to build pango
and its necessary dependencies for android, both ARM and x86.


## Getting a toolchain
The scripts now generate their own toolchains as needed, what you must ensure is that the `$NDK_ROOT` environment variable is set to the root of your ndk bundle.

If for some reason you want to set up the toolchain yourself, you can do this by running the following command (for more see https://developer.android.com/ndk/guides/standalone_toolchain.html).

```
$> $NDK_ROOT/build/tools/make-standalone-toolchain.sh \
--arch=arm --platform=android-16 --install-dir=/tmp/my-android-toolchain
```
## Other dependencies

* build-essential
* autoconf
* automake
* libtool-bin
* ragel
* gperf
* gtk-doc-tools
* libglib2.0-dev

## Setting up the build scripts
The build scripts now create their own toolchains, so you do not need to modify them at all. If you choose to create the toolchain yourself you will need to set the location in the scripts `build-libs-arm.sh` and `build-libs-x86.sh`:

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


## TODO

* Create a script to package this all up
* Create a template `Android.mk` file

### Acknowledgements

So I based my starting point for this on the work of Dr C. Scott Ananian: http://cananian.livejournal.com/63595.html
