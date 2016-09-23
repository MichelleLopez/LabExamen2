#pragma once
#include "Carta.h"
#include <string>
#include <vector>
using namespace std;

using std::string;

class Baraja{
private:
	vector<Carta*> baraja;

public:
	Baraja();
	~Baraja();
	Carta* getCarta();
};