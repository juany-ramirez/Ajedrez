#include "Jugador.h"
#include "Pieza.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;


Jugador::Jugador(int jugadorNum):
	jugadorNum(jugadorNum){}

int Jugador::getJugadorNum(){
	return jugadorNum;
}

string Jugador::ganadorMensaje(){
	stringstream ss;
	ss << "Felicidades Jugador #"<< jugadorNum << " has ganado el juego";
	return ss.str();
}