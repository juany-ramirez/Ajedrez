#include "Jugador.h"
#include <string>

using std::string;

Jugador::Jugador(int jugadorNum):
	jugadorNum(jugadorNum){}

Jugador::Jugador(int jugadorNum, string* piezas):
	jugadorNum(jugadorNum), piezas(piezas){}

Jugador::~Jugador(){

}

string* Jugador::crearPiezas(){
	string * piezas;
	return piezas;
}