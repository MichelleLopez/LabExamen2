#include "Carta.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Carta::Carta(string simbolo, string color, int numero):simbolo(simbolo), numero(numero), color(color){

}

Carta::~Carta(){
}

string Carta::getSimbolo(){
	return this->simbolo;
}

string Carta::getColor(){
	return this->color;
}

int Carta::getNumero(){
	return this->numero;
}

