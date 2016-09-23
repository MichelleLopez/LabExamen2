#pragma once
#include "Baraja.h"
#include "Persona.h"
#include <string>
#include <vector>

using namespace std;

class Repartidor:public Persona
{
private:
	string dificultad;
	int dinero;
	Baraja* nuevaBaraja;

public:
	Repartidor(string, string, string, string, int);
	~Repartidor();
	void setDinero(int);
	void setDificultad(string);
	void setBaraja();
	string toString();
};

