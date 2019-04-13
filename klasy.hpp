struct listEl
{
	struct listEl *nextEl;	//wskaźnik na następny element
	int value;
	listEl();
	~listEl();
}

class treeEl
{
public:
	int minValue;	//wierzchołek drzewa przechowuje informacje o skrajnych wartościach przechowywanych w liście znajdującej się w wierzchołku
	int maxValue;
	int numberOfEl;	//liczba elementów listy
	struct listEl *head;	//wskaźnik na głowę listy przechowywanej przez wierzchołek drzewa
	class tree *leftSon;
	class tree *rightSon;

	treeEl( int value );	//konstruktor pobierający pierwszą wartość ładowaną do tworzonej listy
	~treeEl();	//destruktor
}