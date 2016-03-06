#pragma once
#include "Pieza.h"
#include <string>

using std::string;

class Jugador{
private://variables
        int jugadorNum;
       	Pieza piezas [];
public://constructores con 
		Jugador(int);
        Jugador(int, Pieza*);
        ~Jugador();
        Pieza* crearPiezas();
        void eliminarPiezas();
};
