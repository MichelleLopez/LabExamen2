#include "Carta.h"
#include "Baraja.h"
#include <string>
#include <vector>
using namespace std;
#include <time.h>
#include <stdlib.h>

Baraja::Baraja(){
	string simbolo, color;
	char numero;

	for (int i = 1; i < 13; ++i)
	{
		simbolo="♠";
		color="Negro";

		if (i == 11)
			numero = 74;
		else if (i == 12)
			numero = 81;
		else if (i == 13)
			numero = 75;
		else if (i == 1)
			numero = 65;
		else
			numero=i;
		this->baraja.push_back(new Carta(simbolo, color, numero));
	}

	for (int i = 1; i < 13; ++i)
	{
		simbolo="♣";
		color="Negro";

		if (i == 11)
			numero = 74;
		else if (i == 12)
			numero = 81;
		else if (i == 13)
			numero = 75;
		else if (i == 1)
			numero = 65;
		else
			numero=i;
		this->baraja.push_back(new Carta(simbolo, color, numero));
	}

	for (int i = 1; i < 13; ++i)
	{
		simbolo="♥";
		color="Rojo";

		if (i == 11)
			numero = 74;
		else if (i == 12)
			numero = 81;
		else if (i == 13)
			numero = 75;
		else if (i == 1)
			numero = 65;
		else
			numero=i;
		this->baraja.push_back(new Carta(simbolo, color, numero));
	}

	for (int i = 1; i < 13; ++i)
	{
		simbolo="♦";
		color="Rojo";

		if (i == 11)
			numero = 74;
		else if (i == 12)
			numero = 81;
		else if (i == 13)
			numero = 75;
		else if (i == 1)
			numero = 65;
		else
			numero=i;
		this->baraja.push_back(new Carta(simbolo, color, numero));
	}
}

Baraja::~Baraja(){

}

Carta* Baraja::getCarta(){
	srand(time(NULL));

	int random;
    random = (1+rand()%26);

	this->baraja.erase(this->baraja.begin() + random);

	return this->baraja.at(random);
}
