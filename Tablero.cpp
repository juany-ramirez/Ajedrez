#include "Tablero.h"
#include "Pieza.h"
#include "Jugador.h"
#include <string>

using std::string;

Partida::Partida(Jugador jugador1, Jugador jugador2):
	jugador1(jugador1), jugador2(jugador2){}

Partida::Partida(Jugador jugador1, Jugador jugador2, Pieza** tablero):
	jugador1(jugador1), jugador2(jugador2), tablero(tablero){}

Partida::~Partida(){

}

Pieza** getTablero(){
	return tablero;
}

void Partida::guardarTablero(Pieza** tablero){

}

void Partida::crearTablero(){
	Pieza** tablero = new Pieza*[8];
	for(int i=0;i<8;i++){
		tablero[i]= new Pieza();		
	}
}


Pieza** Partida::recuperarTablero(){
	Pieza** tablero;
	return tablero;
}

bool Partida::ganadorJuego( Pieza** tablero){
	bool condicion = false;
	return condicion;
}

void Partida::asignarPiezasAlInicioPartida(Jugador jugador1, Jugador jugador2, Pieza**  tablero){//creo que deberia de hacerla void y que el string tablero se modifique por referencia.
	
}