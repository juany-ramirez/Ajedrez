#include "Partida.h"
#include "Jugador.h"
#include "Pieza.h"
#include <iostream>
#include <string>
#include <ncurses.h>
#include <curses.h>
#include <sstream>

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::stringstream;

void eliminarMatriz(string**);
void impresionTablero(Pieza*** matriz);
bool jaqueMate(Pieza*** tablero);
void iniciarNcurses();
void impresionLinea();

/*

	como se crea de manera dinamica un arreglo de objetos

	*****ACORDARME QUE ESTOY HACIENDO USO DE LA MEMORIA DINAMICA // Hay que delete
	la pieza nula por defecto es la V
	el constructor por defecto tiene que tener el colochito? se lo quite

							VALIDACIONES
	-Ver si se puede mover la pieza (porque al principio no se puede)
	-Validacion de movimientos para cada pieza.
	-Metodo de condiciones, if (posicion=='L'){llamar a getPeon() retorne coordenadas con un struct}
	-Validaciones de comerse la pieza, esto depende de si se puede mover a ese lugar.
	-Validacion de que no se puede mover a una posicion de su mismo equipo.
	-Validacion de Jaque, tiene que revisar todos los movimientos de todas las piezas para saber si se puede comer a la reina.
	-Jaque mate, cuando se comen al rey.





						POLIMORFISMO
	Partida(Jugador 1, Jugador 2, string**[][], Funcion guardar tablero)// no veo la necesidad mas que para guardar las posiciones
		Jugador (int jugadorNum, vector[] piezas, #Funcion - numero de Piezas, #Funcion )
			Piezas ((string Nombre, int posicionFila, int PosicionColumna)Peon, torre, alfil, Rey, Reina, Caballo)
				Condiciones (Fila/ Columna [se puede mover (s/n)], Cuantos espacios por fila(SOLO SE NECESITA PONER EL MAX))

***************   USAR LA VALIDACION DEL LAB PARA INGRESAR LOS DATOS
*/

int main(int argc, char*argv[]){
	
	
	iniciarNcurses();
	int x,y;
	getmaxyx(stdscr,y,x);
	move(y/2,(x/2)-20);	
	bkgd(COLOR_PAIR(1));
	attron(COLOR_PAIR(1));
	printw("JUEGO DE AJEDREZ");
	move(1+y/2,(x/2)-20);
	printw("[Presionar Enter para Continuar]");
	attroff(COLOR_PAIR(1));
	attron(COLOR_PAIR(1));
	printw("Presionar 'G' para ver partidas guardadas");
	attroff(COLOR_PAIR(1));
	int opcionMenu = 1;
	while(getch()=='\n'){
		int turnoJugador=1;
		// 					Llamada de nuevo Tablero
		Jugador j1(1);
		Jugador j2(2);
		Partida P1(j1, j2);
		P1.crearTablero();
		string posiciones;
		while(!jaqueMate(P1.getTablero())){//cambiar a while
			clear();
			move(1+y/2,(x/2)-20);	
			impresionTablero(P1.getTablero());
			posiciones = getch();
			echo();
			printw("%s",posiciones);
			if(turnoJugador%2){//Turno jugador 2

			}else{
			//Turno jugador 1

			}
			turnoJugador++;
		}
		clear();
		refresh();
		move(y/2,(x/2)-20);	
		bkgd(COLOR_PAIR(1));
		attron(COLOR_PAIR(1));
		printw("Desea tener con una nueva partida: \n");
		move(1+y/2,(x/2)-20);
		printw("[Presionar Enter para Continuar/ Esc para salir]");
		attroff(COLOR_PAIR(1));
	}
	//delwin(win);
	getch();
	refresh();
	endwin();
	return 0;
	
}


void iniciarNcurses(){
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLACK);
	init_pair(2,COLOR_YELLOW,COLOR_BLACK);
	init_pair(3,COLOR_BLUE,COLOR_BLACK);
	init_pair(4,COLOR_GREEN,COLOR_BLACK);
	init_pair(5,COLOR_RED,COLOR_BLACK);
}

bool jaqueMate(Pieza*** tablero){
	bool jaqueM = false;
	return jaqueM;
}

void impresionTablero(Pieza*** matriz){
	int x,y;
	getmaxyx(stdscr,y,x);
	move(y/2,(x/2)-20);	
	int charAscii = 65;
	init_pair(3,COLOR_BLACK,COLOR_WHITE);
	init_pair(4,COLOR_RED,COLOR_BLACK);
	for(int i=0; i<8; i++){
		//addch((char)(i+charAscii));
		printw("%c",(char)(i+charAscii));
		printw("\t\t");
	}
	printw ("\n\n");
	//impresionLinea();
	charAscii = 65;
	int bandera=3;
	for(int i=0; i<8; i++){
		printw("%i",i);
		printw("\t");
        for(int j=0; j<8; j++){
            //attron(COLOR_PAIR(bandera));
            printw("|");
            //attroff(COLOR_PAIR(bandera));
            attron(COLOR_PAIR(bandera));
            printw("       ");
            printw((char*)matriz[i][j]->toString().c_str());
            printw("       ");
            attroff(COLOR_PAIR(bandera));
            //attron(COLOR_PAIR(bandera));
            //attroff(COLOR_PAIR(bandera));
       
            if(bandera%2)//Turno jugador 2
            	bandera = 4;
			else
				bandera = 3;
		}
        if(i%2)
        	bandera=3;
        else
        	bandera=4;
        printw("|");
    	impresionLinea();
    }
    return;
}

void impresionLinea(){
	printw ("\n\t");
	for(int j=0; j<129; j++){
		printw("-");
	}
	printw ("\n");
}