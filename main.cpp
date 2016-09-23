#include "Baraja.h"
#include "Carta.h"
#include "Persona.h"
#include "Repartidor.h"
#include "Jugador.h"
#include "Mesa.h"
#include "Baraja.h"
#include "Administrador.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<Persona*> listaUsuarios;
	vector<Mesa*> listaMesa;
	int opcion = 0;
	string nombre, id, edad;
	do{
		cout<<"Bienvenido al casino, ingrese su opcion:";
		cout<<"1. Crear Usuario"<<endl;
		cout<<"2. Entrar al casino"<<endl;
		cout<<"3. Salir"<<endl;

		if(opcion == 1){
			int opcion2 = 0;
			cout<<"¿Que tipo de usuario desea crear?:"<<endl;
			cout<<"1. Administrador"<<endl;
			cout<<"2. Repartidor"<<endl;
			cout<<"3. Jugador"<<endl;
			cout<<"4. Salir"<<endl;
			if (opcion2 == 1)
			{
				string experiencia, rango;
				int sueldo;
				cout<<"Ingrese el Nombre:";
				cin>>nombre;
				cout<<"Ingrese la edad:";
				cin>>edad;
				cout<<"Ingrese el Numero de identidad:";
				cin>>id;
				cout<<"Ingrese los años de experiencia que tiene: ";
				cin>>experiencia;
				cout<<"Seleccione su rango: ";
				cout<<"1. Gerente ttempo completo";
				cout<<"2. Gerente eedio tiempo";
				cout<<"3. Gerente General";
				cin>>rango;
				cout<<"Ingrese el sueldo:";
				cin>>sueldo;
				listaUsuarios.push_back(new Administrador(nombre, edad, id, experiencia, rango, sueldo));
			}else if(opcion2==2){
				string dificultad;
				int dinero, opcionDificultad;
				cout<<"Ingrese su Nombre:";
				cin>>nombre;
				cout<<"Ingrese su edad:";
				cin>>edad;
				cout<<"Ingrese su Numero de Identidad:";
				cin>>id;
				cout<<"Elija una dificultad:";
				cout<<"1. Dificil"<<endl;
				cout<<"2. Intermedia"<<endl;
				cout<<"3. Facil"<<endl;
				cin>>opcionDificultad;
				if(opcionDificultad == 1){
					dificultad = "Dificil";
				}else if(opcionDificultad == 2){
					dificultad = "Intermedia";
				}else if(opcionDificultad == 3){
					dificultad = "Facil";
				}else{
					dificultad="Desconocida";
				}
				cout<<"Ingrese la cantidad de dinero:";
				cin>>dinero;
				listaUsuarios.push_back(new Repartidor(nombre, edad, id, dificultad, dinero));
			}else if(opcion2 == 3){
					string procedencia, apodo;
					int dinero;
					cout<<"Ingrese el nombre:";
					cin>>nombre;
					cout<<"Ingrese su edad:";
					cin>>edad;
					cout<<"Ingrese su numero de identidad:";
					cin>>id;
					cout<<"Ingrese su procedencia:";
					cin>>procedencia;
					cout<<"Ingrese su apodo:";
					cin>>apodo;
					cout<<"Ingrese la cantidad de dinero:";
					cin>>dinero;
					listaUsuarios.push_back(new Jugador(nombre, edad, id, procedencia, apodo, dinero));

				}
		}
		opcion = 3;

	}while(opcion != 3);
	return 0;
}