#include "Jugador.h"

#pragma once

#include <string>

using std::string;

class Tablero{
private://variables
        Jugador jugador1;
        Jugador jugador2;
       	string** tablero;
public://constructores con 
	Tablero(Jugador jugador1, Jugador jugador2);
    Tablero(Jugador jugador1, Jugador jugador2, string** tablero);
    ~Tablero();
	void guardarTablero(string** tablero);
    string** recuperarTablero();
    bool ganadorJuego(const string**& tablero);
    void asignarPiezasAlInicioPartida(Jugador, Jugador, string**&);
};
