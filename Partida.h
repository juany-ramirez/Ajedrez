#pragma once

#include "Jugador.h"
#include "Pieza.h"
#include <string>

using std::string;

class Partida{
private://variables
    Jugador jugador1;
    Jugador jugador2;
    Pieza*** tablero;
public://constructores con 
	Partida(Jugador jugador1, Jugador jugador2);
    Partida(Jugador jugador1, Jugador jugador2, Pieza*** Pieza);
    ~Partida();
    Pieza*** getTablero();

    void guardarTablero(Pieza***);
    Pieza*** recuperarTablero();

    void crearTablero();
    void crearPiezas(Pieza***);

    //binario
	

    //inicio de juego


    //cambio
    bool ganadorJuego(Pieza***);// me gustaria que esta parte mandara la pieza** por referencia constant    };
};