#include <iostream>
#include "klasy.hpp"

listEl::listEl( int nextValue ) //konstruktor elementu listy
{
	value = nextValue;
	nextEl = nullptr;
}

//stworzyć destruktor listEl

treeEl::treeEl( int value ) //konstruktor wezla drzewa
{
	minValue = value;
	maxValue = value;
	numberOfEl = 1;
	head = new listEl( value );
	leftSon = nullptr;
	rightSon = nullptr;
}