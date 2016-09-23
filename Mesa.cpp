#include "Jugador.h"
#include "Repartidor.h"
#include "mesa.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

mesa::mesa(string numero, string tipo):numero(numero),mesa(mesa){

}

mesa::~mesa(){

}

void mesa::setRepartidor(Repartidor* nuevoRepartidor){
	this->nuevoRepartidor=nuevoRepartidor;
}

void mesa::setJugador(Jugador* nuevoJugador){
	this->nuevoJugador = nuevoJugador;
}

void mesa::setNumeroMesa(string numero){
	this->numero=numero;
}

void mesa::setMesa(string mesa){
	this->mesa=mesa;
}

string mesa::toString(){
	stringstream ss;
	ss<<"mesa: "<<mesa<<" numero: "<<numero<<"\n "<<this->nuevoRepartidor->toString()<<"\n "<<this->nuevoJugador->toString();
	return ss.str();
}

Repartidor* mesa::getRepartidor(){
	return this->nuevoRepartidor;
}

Jugador* mesa::getJugador(){
	return this->Jugadormesa;
}