#include "Persona.h"
#include "Administrador.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Administrador::Administrador(string nombre, string edad, string id,string rango, string experiencia, int sueldo):Persona(nombre, edad, id), rango(rango), experiencia(experiencia), sueldo(sueldo){

}

Administrador::~Administrador(){
}

void Administrador::setExperiencia(string experiencia){
	this->experiencia = experiencia;
}

void Administrador::setRango(string rango){
	this->rango = rango;
}

void Administrador::setSueldo(int sueldo){
	this->sueldo = sueldo;
}

string Administrador::toString(){
	stringstream ss;
	ss<<Persona::toString()<<" Rango: "<<rango<<" Experiencia: "<<experiencia<<" sueldo :"<<sueldo;
}