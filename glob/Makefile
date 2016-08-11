AR_TEST = "$(CC) -print-prog-name=ar"
#AR="/Users/guysherman/Source/toolchains/arm-android/bin/../lib/gcc/arm-linux-androideabi/4.8/../../../../arm-linux-androideabi/bin/ar"

all: glob.o
	$(AR) -r -cs libglob.a glob.o

cpu-features.o:
	$(CC) -c glob.c $(CFLAGS) -I./ -o glob.o

clean:
	rm *.o *.a
