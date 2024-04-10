#ifndef JUEGO_H
#define JUEGO_H
//Subclase del Tablero.h necesaria para el juego
#include "Tablero.h"

//Clase "Juego" (Clase principal para el funcionamiento del juego)
class Juego
{
    //Parte publica de la clase Juego
    public:

        Juego();
        //Constructor encargado de realizar abstracciones
        Juego(Tablero tablero, int cantidadMinas);

        //Constructores encapsulados para solicitar la posicion
        int solicitarFilaUsuario();
        int solicitarColumnaUsuario();

        //Constructor que mostrara si el jugador gano por medio de un true o false
        bool jugadorGana();

        //Constructor encargado de dibujar la portada del juego
        void dibujarPortada(string nombreArchivo);

        //Constructor que coloca las minas de una forma aleatoria
        void colocarMinasAleatoriamente();

        //Constructor que iniciara el desarrollo del juego y determinador si gano o perdio el juego
        void iniciar();

    protected:

    //Parte privada de la clase Juego
    private:

        //Declaracion de atrivutos
        Tablero tablero;
        int cantidadMinas;
        int aleatorioEnRango(int minimo,int maximo);
        int filaAleatoria();
        int columnaAleatoria();
};

#endif // JUEGO_H
