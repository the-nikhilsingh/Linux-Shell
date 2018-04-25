all: nshell
nshell: nshell.o
	gcc -o nshell nshell.o -g -lreadline
nshell.o: nshell.c
	gcc -c nshell.c 
clean:
	rm -f nshell.o
