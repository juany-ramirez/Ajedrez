main:	mainAjedrez.o Pieza.o Jugador.o Partida.o
	g++ mainAjedrez.o Pieza.o Jugador.o Partida.o -o  Juego.exe -lmenu -lpanel -lncurses
        
mainAjedrez.o:	mainAjedrez.cpp Pieza.h
	g++ -c mainAjedrez.cpp 

Pieza.o:	Pieza.cpp Pieza.h
	g++ -c Pieza.cpp 

Jugador.o:	Jugador.cpp Jugador.h Pieza.h
	g++ -c Jugador.cpp

Partida.o:	Partida.cpp Partida.h Jugador.h Pieza.h
	g++ -c Partida.cpp 

clean:  
	rm *.o  Juego.exe
		clear

execute:
	./Juego.exe
