#include "Pieza.h"
#include <string>

using std::string;

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

Pieza::~Pieza(){
}

Pieza Pieza::setPeon(){
	movFila = 1;
	movColumna = 1;
	return *this;
}

Pieza Pieza::setCaballo(){
	movFila = 3;
	movColumna = 3;
	return *this;
}

Pieza Pieza::setTorre(){
	movFila = 8;
	movColumna = 0;
	return *this;
}

Pieza Pieza::(){
	movFila = 8;
	movColumna = 8;
	return *this;
}