#pragma once
#include "Persona.h"
#include <string>

using std::string;

class Administrador:public Persona{
private:
	string experiencia, rango;
	int sueldo;

public:
	Administrador(string, string, string, string, string, int);
	~Administrador();
	void setExperiencia(string);
	void setRango(string);
	void setSueldo(int);
	string toString();
};
