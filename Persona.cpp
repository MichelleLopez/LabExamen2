#include "Persona.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Persona::Persona(string nombre, string edad, string id):nombre(nombre), edad(edad), id(id){

}
Persona::~Persona(){

}

void Persona::setNombre(string nombre){
	this->nombre = nombre;
}

void Persona::setEdad(string edad){
	this->edad = edad;
}

void Persona::setId(string id){
	this->id = id;
}
string Persona::getNombre(){
	return this->nombre;
}

string Persona::getId(){
	return this->id;
}

string Persona::toString(){
 	stringstream ss;
 	ss<<"Nombre:"<<nombre<<" Edad:"<<edad<<" id:"<<id;
 	return ss.str();
}


