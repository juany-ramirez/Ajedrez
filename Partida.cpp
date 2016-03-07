#include "Partida.h"
#include "Pieza.h"
#include "Jugador.h"
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

Partida::Partida(Jugador jugador1, Jugador jugador2):
	jugador1(jugador1), jugador2(jugador2){}

Partida::Partida(Jugador jugador1, Jugador jugador2, Pieza*** tablero):
	jugador1(jugador1), jugador2(jugador2), tablero(tablero){}

Partida::~Partida(){

}

Pieza*** Partida::getTablero(){
	return tablero;
}

void Partida::guardarTablero(Pieza*** tablero){

}

Pieza*** Partida::recuperarTablero(){
	
	return tablero;
}


void Partida::crearTablero(){
	Pieza*** tablero = new Pieza**[8];
	for(int i=0;i<8;i++){
		tablero[i]= new Pieza*[8];		
	}
	crearPiezas(tablero);
}

void Partida::crearPiezas(Pieza*** tablero){
	for(int i=0 ; i<8 ; i++){
		tablero[1][i] = new Pieza("P1",1,i);
	}
	tablero[0][0] = new Pieza("T1",0,0);
	tablero[0][7] = new Pieza("T1",0,7);

	tablero[0][1] = new Pieza("C1",0,1);
	tablero[0][6] = new Pieza("C1",0,6);
	
	tablero[0][2] = new Pieza("A1",0,2);
	tablero[0][5] = new Pieza("A1",0,5);

	tablero[0][3] = new Pieza("K1",0,3);
	tablero[0][4] = new Pieza("Q1",0,4);

	for(int i=0 ; i<8 ; i++){
		tablero[6][i] = new Pieza("P2",6,i);
	}

	tablero[7][0] = new Pieza("T2",7,0);
	tablero[7][7] = new Pieza("T2",7,7);

	tablero[7][1] = new Pieza("C2",7,1);
	tablero[7][6] = new Pieza("C2",7,6);
	
	tablero[7][2] = new Pieza("A2",7,2);
	tablero[7][5] = new Pieza("A2",7,5);

	tablero[7][3] = new Pieza("K2",7,3);
	tablero[7][4] = new Pieza("Q2",7,4);

	for(int i=2 ; i<6 ; i++){
		for(int j=0 ; j<8 ; j++){
			tablero[i][j] = new Pieza("V",i,j);
		}
	}
}


bool Partida::ganadorJuego( Pieza*** tablero){
	bool condicion = false;
	return condicion;
}
