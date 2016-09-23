#pragma once
#include "Persona.h"
#include "Bajara.h"
#include <string>
#include <vector>

using namespace std;

class Repartidor:public Persona
{
private:
	string dificultad;
	int dinero;
	Baraja* Baraja;

public:
	Repartidor(string,string,string,string,int);
	~Repartidor();
	void setDinero(int);
	void setDificultad(string);
	void setBaraja();
	string toString();
};

