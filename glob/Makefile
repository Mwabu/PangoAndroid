AR_TEST = "$(CC) -print-prog-name=ar"
#AR="/Users/guysherman/Source/toolchains/arm-android/bin/../lib/gcc/arm-linux-androideabi/4.8/../../../../arm-linux-androideabi/bin/ar"

all: glob.o issetugid.o
	$(AR) -r -cs libglob.a glob.o issetugid.o

glob.o:
	$(CC) -c glob.c $(CFLAGS) -I./ -o glob.o

issetugid.o:
	$(CC) -c issetugid.c $(CFLAGS) -I./ -o issetugid.o

.PHONY: clean
clean:
	rm -f *.o *.a
