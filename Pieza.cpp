#include "Pieza.h"
#include <string>
#include <cmath>


using std::string;

Pieza::Pieza(string tipo){
   this -> tipo = tipo;
}

Pieza::Pieza(string tipo, int posicionFila, int posicionColumna){
   this -> tipo = tipo;
   this -> posicionColumna = posicionColumna;
   this -> posicionFila = posicionFila;
}

Pieza::Pieza(string tipo, int posicionFila, int posicionColumna, int movFila, int movColumna){
   this -> tipo = tipo;
   this -> posicionColumna = posicionColumna;
   this -> posicionFila = posicionFila;
   this -> movColumna = movColumna;
   this -> movFila = movFila;
}

Pieza::Pieza(){
}

string Pieza::toString(){
	return tipo;
}

bool Pieza::vPeon(int posibleMovF, int posibleMovC){
	bool condicion = false;
	/*//if peon si es el primer movimiento de un peon, entonces se mueve dos veces
	movFila = 1;
	movColumna = 1;
	int difC = posicionColumna - posibleMovC;
    int difF = posicionFila - posibleMovF;
    if(difx == 0) {//Movida VerticaL      
        if(abs(dify) == 1){//Si mueve un casillero
            condicion= true;
        }
    }else if(abs(dify) == 2){ //Movida larga de peon
            condicion = true;
        }
	*/
	return condicion;
}

bool Pieza::vCaballo(int posibleMovF, int posibleMovC){
	bool condicion = false;
	movFila = 3;
	movColumna = 3;
	return condicion;
}

bool Pieza::vTorre(int posibleMovF, int posibleMovC){
	bool condicion = false;
	movFila = 8;
	movColumna = 0;
	return condicion;
}

bool Pieza::vReina(int posibleMovF, int posibleMovC){
	bool condicion = false;
	movFila = 8;
	movColumna = 8;
	return condicion;
}

bool Pieza::vRey(int posibleMovF, int posibleMovC){
	bool condicion = false;
	movFila = 8;
	movColumna = 8;
	return condicion;
}

bool Pieza::vAlfil(int posibleMovF, int posibleMovC){
	// se puede mover si el numero de columna y fila es igual 
	bool condicion = false;
	movFila = 8;
	movColumna = 8;
	return condicion;
}