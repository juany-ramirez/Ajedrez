#pragma once
#include <string>

using std::string;

class Jugador{
private://variables
        int jugadorNum;
       	string* piezas;
public://constructores con 
		Jugador(int);
        Jugador(int, string*);
        ~Jugador();
        string* crearPiezas();
};
