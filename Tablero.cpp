#include "Tablero.h"
#include "Jugador.h"
#include <string>

using std::string;

Tablero::Tablero(Jugador jugador1, Jugador jugador2):
	jugador1(jugador1), jugador2(jugador2){}

Tablero::Tablero(Jugador jugador1, Jugador jugador2, string** tablero):
	jugador1(jugador1), jugador2(jugador2), tablero(tablero){}

Tablero::~Tablero(){

}

void Tablero::guardarTablero(string** tablero){

}

string** Tablero::recuperarTablero(){
	string** tablero;
	return tablero;
}

bool Tablero::ganadorJuego(const string** & tablero){
	bool condicion = false;
	return condicion;
}

void Tablero::asignarPiezasAlInicioPartida(Jugador jugador1, Jugador jugador2, string** & tablero){//creo que deberia de hacerla void y que el string tablero se modifique por referencia.
	
}