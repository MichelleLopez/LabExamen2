Examen: main.o Carta.o Baraja.o Persona.o Repartidor.o Administrador.o 
	g++ main.o Carta.o Baraja.o Persona.o Repartidor.o Administrador.o -o Examen

Main.o:		main.cpp Persona.h Carta.h Baraja.h Repartidor.h Administrador.h
	g++ -c Main.cpp

Carta.o:	Carta.h	Carta.cpp
	g++ -c Carta.cpp

Baraja.o:	Baraja.h Carta.h Baraja.cpp
	g++ -c Baraja.cpp

Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp

Repartidor.o:	Repartidor.h Persona.h Repartidor.cpp
	g++ -c Repartidor.cpp

Administrador.o:	Administrador.h Persona.h Administrador.cpp
	g++ -c Administrador.cpp

