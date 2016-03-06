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

    //binario
	void guardarTablero(Pieza***);
    Pieza*** recuperarTablero();

    //inicio de juego
    void crearPiezas();
    void crearTablero();

    //cambio
    bool ganadorJuego(Pieza***);// me gustaria que esta parte mandara la pieza** por referencia constante
    void asignarPiezasAlInicioPartida(Jugador, Jugador, Pieza***);//me gustaria hacerlo por referencia
};
