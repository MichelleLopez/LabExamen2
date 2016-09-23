#pragma once
#include "Persona.h"
#include "Carta.h"
#include <string>
#include <vector>
using namespace std;

class Jugador: public Persona
{
private:
	string procedencia, apodo;
	int dinero, apuesta;
	vector<Carta*> Mano;

public:
	Jugador(string, string, string, string, string,int);
	~Jugador();
	void setMano(Carta*);
	void setProcedencia(string);
	void setApodo(string);
	void setDinero(int);
	string toString();
};