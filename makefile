all: nshell

nshell: nshell.o
	gcc -o nshell nshell.o -g -lreadline

clean:
	rm -f nshell.o
