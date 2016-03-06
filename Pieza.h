#pragma once

#include <string>

using std::string;

class Pieza{
private://variables
        string tipo;
        int posicionFila;
        int posicionColumna;
        int movFila;
        int movColumna;

public://constructores con 
		Pieza(string, int, int);
        Pieza(string, int, int, int, int);
        ~Pieza();
        bool vPeon(int, int);
        bool vCaballo(int, int);
        bool vTorre(int, int);
        bool vReina(int, int);
        bool vRey(int, int);
        bool vAlfil(int, int);
};

