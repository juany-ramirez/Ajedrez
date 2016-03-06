#include "Jugador.h"
#include "Pieza.h"

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

Jugador::Jugador(int jugadorNum):
	jugadorNum(jugadorNum){}

Jugador::Jugador(int jugadorNum, Pieza piezas []):
	jugadorNum(jugadorNum), piezas(piezas){}

Jugador::~Jugador(){

}

Pieza* Jugador::crearPiezas(){
	/*
	piezas = new Pieza[16];
	int filaInicial=0, columnaInicial=0;
	stringstream ss;
	for(int i = 0; i<16; i++){
		ss.str("");
		if(i<8){
			ss << "P" << jugadorNum;
			piezas[i]= new Pieza(ss.str());
		}
		if(i==8 || i ==15){
			ss << "T" << jugadorNum;
			piezas[i]= new Pieza(ss.str());
		}
		if(i==9 || i==14){
			ss << "C" << jugadorNum;
			piezas[i]= new Pieza(ss.str());
		}
		if(i==10 || i==13){
			ss << "A" << jugadorNum;
			piezas[i]= new Pieza(ss.str());
		}
		if(i==11){
			ss << "Q" << jugadorNum;
			piezas[i]= new Pieza(ss.str());
		}
		if(i==12){
			ss << "K" << jugadorNum;
			piezas[i]= new Pieza(ss.str());
		}
	}*/
	return piezas;
}

void Jugador::eliminarPiezas(){

}