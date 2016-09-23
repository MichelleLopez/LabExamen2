Examen: main.o Persona.o Baraja.o Carta.o Repartidor.o Administrador.o Jugador.o
	g++ main.o Persona.o Baraja.o Carta.o Repartidor.o Administrador.o Jugador.o -o Examen

main.o:		main.cpp Persona.h Baraja.h Carta.h Repartidor.h Administrador.h Jugador.h
	g++ -c main.cpp

Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp

Administrador.o:	Administrador.h Persona.h Administrador.cpp
	g++ -c Administrador.cpp
	
Baraja.o:	Baraja.h Baraja.cpp
	g++ -c Baraja.cpp

Carta.o:	Carta.h Carta.cpp
	g++ -c Carta.cpp 

Repartidor.o:	Repartidor.h Persona.h Repartidor.cpp
	g++ -c Repartidor.cpp

Jugador.o:	Jugador.h Persona.h Jugador.cpp
	g++ -c Jugador.cpp


