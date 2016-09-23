#pragma once
#include <string>
using std::string;

class Carta{
private:
	string simbolo, color;
	int numero;

public:
	Carta(string, string, int);
	~Carta();
	string toString();
	string getSimbolo();
	string getColor();
	int getNumero();
};