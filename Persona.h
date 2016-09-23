#pragma once

#include <string>
using std::string;

class Persona{
private:
	string nombre, edad, id;

public:
	Persona(string, string, string);
	~Persona();
	virtual string toString();
	void setNombre(string);
	void setEdad(string);
	void setId(string);
	string getNombre();
	string getId();
};