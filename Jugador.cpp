#include "Jugador.h"
#include "Pieza.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

/*
Pieza::Pieza(string tipo, int posicionFila, int posicionColumna){
   this -> tipo = tipo;
   this -> posicionColumna = posicionColumna;
   this -> posicionFila = posicionFila;
}
*/
Jugador::Jugador(int jugadorNum){
	this -> jugadorNum = jugadorNum;
}

int getJugadorNum(){
	return jugadorNum;
}

string ganadorMensaje(){
	stringstream ss;
	ss << "Felicidades Jugador #"<< jugadorNum << " has ganado el juego";
	return ss.str();
}