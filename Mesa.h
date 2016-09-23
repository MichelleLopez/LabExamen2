#pragma once
#include "Jugador.h"
#include "Repartidor.h"
#include <string>
using std::string;

class Mesa
{
private:
	Repartidor* nuevoRepatidor;
	Jugador* nuevoJugador;
	string numero, mesa;

public:
	Mesa(string,string);
	~Mesa();
	void setRepartidor(Repartidor*);
	void setJugador(Jugador*);
	void setNumeroMesa(string);
	void setTipoMesa(string);
	string toString();
	Jugador* getJugador();
	Repartidor* getRepartidor();
};