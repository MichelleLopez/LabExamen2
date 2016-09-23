#include "Carta.h"
#include "Baraja.h"
#include "Repartidor.h"
#include <string>
#include <vector>
#include <sstream>
using namespace std;

using std::stringstream;

Repartidor::Repartidor(string nombre, string edad, string id, string dificultad,int dinero):Persona(nombre, edad, id), dificultad(dificultad), dinero(dinero){
	this->nuevaBaraja=new Baraja();
}
Repartidor::~Repartidor(){

}

void Repartidor::setDificultad(string dificultad){
	this->dificultad = dificultad;
}

void Repartidor::setDinero(int dinero){
	this->dinero = dinero;
}

void Repartidor::setBaraja(){
	this->nuevaBaraja = new Baraja();
}

string Repartidor::toString(){
	stringstream ss;
	ss<<Persona::toString()<<"dificultad:"<<dificultad<<" Monto Maximo: "<<dinero;
	return ss.str();
}
