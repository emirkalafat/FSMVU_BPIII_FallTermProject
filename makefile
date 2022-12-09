CC=gcc
CFLAGS=-c -Wall
all:makeBP3 clean #run

makeBP3: main.o matrisoperations.o
	$(CC) main.o matrisoperations.o -o BP3Proje

main.o:main.c
	$(CC) $(CFLAGS) main.c
matrisoperations.o: matrisoperations.c matrisoperations.h
	$(CC) $(CFLAGS) matrisoperations.c
clean:
	del *.o
#run:
#	BP3Proje.exe