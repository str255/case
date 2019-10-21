FILES	= case.c
CC	= g++
CFLAGS	= -g -ansi

all: 	caser caseu casel casei

caser:		$(FILES)
		$(CC) $(CFLAGS) -DRANDOM $(FILES) -o caser

caseu:		$(FILES)
		$(CC) $(CFLAGS) -DUPPER $(FILES) -o caseu

casel:		$(FILES)
		$(CC) $(CFLAGS) -DLOWER $(FILES) -o casel

casei:		$(FILES)
		$(CC) $(CFLAGS) -DINVERT $(FILES) -o casei
