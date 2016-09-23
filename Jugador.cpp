#include "Jugador.h"
#include "Carta.h"
#include <string>
using std::string;
#include <sstream>
using std::stringstream;
#include <vector>
using namespace std;

Jugador::Jugador(string nombre, string edad, string id, string procedencia, string apodo, int dinero):Persona(nombre, edad, id),
procedencia(procedencia),apodo(apodo),dinero(dinero){

}

Jugador::~Jugador(){

}

void Jugador::setProcedencia(string procedencia){
	this->procedencia=procedencia;
}

void Jugador::setApodo(string apodo){
	this->apodo=apodo;
}

void Jugador::setDinero(int dinero){
	this->dinero+=dinero;
}

void Jugador::setMano(Carta* c){
 	this->Mano.push_back(c);
}

string Jugador::toString(){
	stringstream ss;
	ss<<Persona::toString()<<"procedencia: "<<procedencia<<" apodo:"<<apodo<<" Total dinero:"<<dinero;
	return ss.str();
}

