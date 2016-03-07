#pragma once

#include <string>

using std::string;

class Pieza{
        string tipo;
        int posicionFila;
        int posicionColumna;

public://constructores con 
	Pieza(string);
	Pieza(string, int, int);
        ~Pieza();
        string toString();
        bool vPeon(int, int);
        bool vCaballo(int, int);
        bool vTorre(int, int);
        bool vReina(int, int);
        bool vRey(int, int);
        bool vAlfil(int, int);
};

