#pragma once
#include <string>

using std::string;

class Jugador{
private://variables
        int jugadorNum;
public://constructores con 
		Jugador(int=0);
        ~Jugador();
        int getJugadorNum();
        string ganadorMensaje();
};
