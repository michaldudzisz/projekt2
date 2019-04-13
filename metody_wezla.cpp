#include <iostream>
#include "klasy.hpp"

listEl::listEl( int nextValue ) //konstruktor elementu listy
{
	value = nextValue;
	nextEl = nullptr;
}

listEl::~listEl() //destruktor elementu listy
{
	if ( nextEl != nullptr ) //jeśli element nie jest ostatni na liście
		{
			delete nextEl; //usuń kolejny - przeprowadza rekurencję uruchamiając kolejne destrukory
			nextEl = nullptr;
		}
}

treeEl::treeEl( int value ) //konstruktor wezla drzewa
{
	minValue = value; //ponieważ lista zawierać będzie początkowo jedną wartość
	maxValue = value;
	numberOfEl = 1;
	head = new listEl( value ); //utworzenie listy za pomocą new
	leftSon = nullptr; // na razie nie ma synów
	rightSon = nullptr;
}

treeEl::~treeEl()
{
	delete head; //rozpoczyna usuwanie listy
	head = nullptr;
}
