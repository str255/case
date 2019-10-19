FILES	= case.c
CC	= g++
CFLAGS	= -g -ansi
case:		$(FILES)
		$(CC) $(CFLAGS) $(FILES) -o case
