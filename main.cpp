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
			do{
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
					cout<<"Ingrese su numero de identidad:";
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
		}while(opcion2!=4);
	}
	if (opcion == 2)
	{
		int opcionAdmin, opcionJugador;
		int opcion2;
		cout<<"Ingrese el nombrre: ";
		cin>>nombre;
		cout<<"Ingrese su identidad: ";
		cin>>id;
		Persona* tempPersona;
		Mesa* tempMesa;
		Jugador* tempJugador;
		Repartidor *tempRepartidor;
		int i;
		for (int i = 0; i <listaUsuarios.size() ; ++i)
			{
				if(nombre == listaUsuarios.at(i)->getNombre() && id == listaUsuarios.at(i)->getId()){
					tempPersona = listaUsuarios.at(i);
					if (dynamic_cast<Administrador*>(listaUsuarios.at(i)) != NULL)
					{
						do{
							cout<<"1. Crear Mesa";
							cout<<"2. Modificar Mesa";
							cout<<"3. Borrar Mesa";
							cout<<"4. Salir";
							cin>>opcionAdmin;

							if(opcionAdmin == 1){

								string mesa, numMesa;
								cout<<"Ingrese el numero de la mesa";
								cin>>numMesa;
								cout<<"Ingrese el tipo de mesa:";
								cout<<"1. V.I.P";
								cout<<"2. Clasica";
								cout<<"3. Viajero";
								cin>>opcion2;
								if (opcion2 == 1)
								{
									mesa="Mesa V.I.P";
								}else if(opcion2==2){
									mesa="Mesa Claseca";
								}else if(opcion2==3){
									mesa="Mesa Viajero";
								}
								Mesa* tempMesa=new Mesa(numMesa,mesa);
								for (int i = 0; i < listaUsuarios.size(); ++i)
								{
									if (dynamic_cast<Repartidor*>(listaUsuarios.at(i))!=NULL)
									{
										tempRepartidor=dynamic_cast<Repartidor*>(listaUsuarios.at(i));
										cout<<"Numero Repartidor:"<<i<<tempRepartidor->toString()<<"\n";
									}
								}
								cout<<"Ingerese el numero de Repartdior a asignar a la mesa:";
								cin>>opcion2;
								tempMesa->setRepartidor(dynamic_cast<Repartidor*>(listaUsuarios.at(opcion2)));
								for (int i = 0; i < listaUsuarios.size(); ++i)
								{
									if (dynamic_cast<Jugador*>(listaUsuarios.at(i))!=NULL)
									{
										tempJugador=dynamic_cast<Jugador*>(listaUsuarios.at(i));
										cout<<"Numero Jugador:"<<i<<tempJugador->toString()<<"\n";
									}
								}
								cout<<"Ingerese el numero de Jugador a asignar a la mesa:";
								cin>>opcion2;
								tempMesa->setJugador(dynamic_cast<Jugador*>(listaUsuarios.at(opcion2)));
								
							}else if(opcionAdmin == 2){
								for (int i = 0; i < listaMesa.size(); ++i)
								{
									cout<<"Numero de mesa:"<<i<<listaMesa.at(i)->toString()<<"\n";
								}
								cout<<"Ingrese el numero de la mesa que desea Modificar:";
								cin>>opcion2;
								Mesa* tempMesa=listaMesa.at(opcion2);
								cout<<"Ingrese su opcion: ";
								cout<<"1. Modificar Numero Mesa";
								cout<<"2. Modficar Tipo Mesa";
								cout<<"3. Modificar Repartidor";
								cout<<"4. Modificar Jugador";

								int opcionMesa;
								string num;
								cin>>opcionMesa;
								if(opcionMesa==1){
									cout<<"Ingrese el nuevo Numero de la mesa:";
									cin>>num;
									tempMesa->setNumeroMesa(num);
									cout<<"Se modifico exitosamente!\n";
								}else if(opcionMesa==2){
									cout<<"1- Mesa V.I.P\n2-Mesa Clasica\n3-Mesa Viajero\nIngrese el tipo de mesa:";
									cin>>opcion2;
									if (opcion2==1)
									{
										num="Mesa V.I.P";
									}else if(opcion2==2){
										num="Mesa Claseca";
									}else if(opcion2==3){
										num="Mesa Viajero";
									}
									tempMesa->setNumeroMesa(num);
									cout<<"Se modifico exitosamente!\n";
								}else if(opcionMesa==3){
									for (int i = 0; i < listaUsuarios.size(); ++i)
									{
										if (dynamic_cast<Repartidor*>(listaUsuarios.at(i))!=NULL)
										{
										tempRepartidor=dynamic_cast<Repartidor*>(listaUsuarios.at(i));
										cout<<"Numero Repartidor:"<<i<<tempRepartidor->toString()<<"\n";
										}
									}
									cout<<"Ingerese el numero de Repartdior a asignar a la mesa:";
									cin>>opcion2;
									tempMesa->setRepartidor(dynamic_cast<Repartidor*>(listaUsuarios.at(opcion2)));
									cout<<"Se modifico exitosamente!\n";
								}else if(opcionMesa==4){
									for (int i = 0; i < listaUsuarios.size(); ++i)
									{
									if (dynamic_cast<Jugador*>(listaUsuarios.at(i))!=NULL)
									{
										tempJugador=dynamic_cast<Jugador*>(listaUsuarios.at(i));
										cout<<"Numero Jugador:"<<i<<tempJugador->toString()<<"\n";
									}
								}
								cout<<"Ingerese el numero de Jugador a asignar a la mesa:";
								cin>>opcion2;
								tempMesa->setJugador(dynamic_cast<Jugador*>(listaUsuarios.at(opcion2)));
								cout<<"Se modifico exitosamente!\n";
								}
							}
							else if (opcionAdmin == 3)
							{
								for (int i = 0; i < listaMesa.size(); ++i)
								{
									cout<<"Numero de mesa:"<<i<<listaMesa.at(i)->toString()<<"\n";
								}
								cout<<"Ingrese el numero de la mesa que desea eliminar:";
								cin>>opcion2;
								listaMesa.erase(listaMesa.begin()+opcion2);
								cout<<"La mesa a sido eliminada!\n";
							}
						} while (opcionAdmin!=4);
					}else if(dynamic_cast<Jugador*>(listaUsuarios.at(i))!=NULL){
						tempJugador=dynamic_cast<Jugador*>(tempPersona);
						for (int i = 0; i <listaMesa.size() ; ++i)
						{
							if(tempJugador->getNombre()==listaMesa.at(i)->getJugador()->getNombre()){
								tempMesa=listaMesa.at(i);
							}
						}
						do
						{
							cout<<"1. Empezar un nuevo juego";
							cout<<"2. Ver Dinero";
							cout<<"3. Salir";
							cin>>opcionJugador;
							
						} while (opcion != 3);
					}
				}
			}	
	}


	}while(opcion != 3);
	return 0;
}