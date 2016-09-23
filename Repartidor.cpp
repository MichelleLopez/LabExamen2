#include <string>
#include <vector>
#include "Baraja.h"
#include "Repartidor.h"
#include <time.h>
#include <stdlib.h>
using std::string;
using namespace std;
#include <sstream>
using std::stringstream;

Repartidor::Repartidor(string nombre, string edad,string id, string dificultad, int MontoMaximo):Persona(nombre, edad, id), dificultad(dificultad), dinero(dinero){
	this->BarajaTexas=new Baraja();
}

Repartidor::~Repartidor(){
}

void Repartidor::setDificultad(string dificultad){
	this->dificultad = dificultad;
}

void Repartidor::setMontoMaximo(int dinero){
	this->dinero = dinero;
}

string Repartidor::toString(){
	stringstream ss;
	ss<<Persona::toString()<<"Dificultad: "<<dificultad<<" Dinero: "<< Dinero;
	return ss.str();
}

