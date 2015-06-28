CC = gcc
CFLAGS = -DDEBUG -pipe -W -Wall -Wpointer-arith -Wno-unused-parameter -Wunused-function -Wunused-variable -Wunused-value -Werror -g
CPP =	gcc -E
LINK =	$(CC)

ALL_INCS = -I ./inc \
	-I ./inc/list

ALL_LIBS =

ALL_DEPS = 

bin/run_test:	objs/list.o objs/main.o
	$(LINK) -o bin/test \
	objs/list.o \
	objs/main.o \
	$(ALL_LIBS)

objs/main.o:	$(ALL_DEPS) \
	src/main.c
	$(CC) -c $(CFLAGS) $(ALL_INCS) \
		-o objs/main.o \
		src/main.c

objs/list.o:	$(ALL_DEPS) \
	src/list/list.c
	$(CC) -c $(CFLAGS) $(ALL_INCS) \
		-o objs/list.o \
		src/list/list.c
clean:
	rm -f objs/*.o bin/*

