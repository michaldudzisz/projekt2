#include <iostream>
#include "klasy.hpp"
#include "funkcje.hpp"

using namespace std;

int main()
{
	bool ifWork = true;
	char command;
	while ( ifWork )
	{
		command = readInterface();
		switch( command )
		{
		case 'w':

		break;
		case 'd':

		break;
		case 'u':

		break;
		case 'z':
			ifWork = false;
		break;
		}

	}
}