CC = g++
CFLAGS = -c -Wall -g

all: p

p: main.o funkcje.o metody_wezla.o
	$(CC) main.o funkcje.o metody_wezla.o -o p

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

funkcje.o: funkcje.cpp
	$(CC) $(CFLAGS) -c main.cpp funkcje.cpp

metody_wezla.o: metody_wezla.cpp
	$(CC) $(CFLAGS) -c metody_wezla.cpp

clean:
	rm -f *.o p