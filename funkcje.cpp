#include <iostream>
#include <stdio.h>
#include "funkcje.hpp"

using namespace std;

char readInterface()
{
	char command;
	cout << "w - wypisz liste." << endl << "d - dodaj liczbe." << endl << "u - usun liczbe" << endl;
	cout << "z - zakoncz dzialanie programu." << endl << endl;
	cin >> command; //wczytanie komendy
	clearBuffer(); //czyszczenie bufora na wszelki wypadek
	return command;
}

void clearBuffer() //funkcja czyści bufor klawiatury
{
	char c;
	do
		c = getchar();
	while ( c != '\n' && c != EOF );
}