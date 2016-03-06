main:	mainAjedrez.o Pieza.o Jugador.o Tablero.o
	g++ mainAjedrez.o Pieza.o Jugador.o Tablero.o -o  Juego.exe -lmenu -lpanel -lncurses
        
mainAjedrez.o:	mainAjedrez.cpp Pieza.h
	g++ -c mainAjedrez.cpp 

Pieza.o:	Pieza.cpp Pieza.h
	g++ -c Pieza.cpp 

Jugador.o:	Jugador.cpp Jugador.h
	g++ -c Jugador.cpp

Tablero.o:	Tablero.cpp Tablero.h Jugador.h
	g++ -c Tablero.cpp 

clean:  
	rm *.o  Juego.exe
		clear

execute:
	./Juego.exe
