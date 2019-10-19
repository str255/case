FILES	= case.c
CC	= g++
CFLAGS	= -g -ansi
caser:		$(FILES)
		$(CC) $(CFLAGS) $(FILES) -o case
