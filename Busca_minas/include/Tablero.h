#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>
//Subclase del Celda.h necesaria para el tablero
#include "Celda.h"

using namespace std;

//Clase "Tablero" (Subclase de la clase Juego)
class Tablero
{
    //Parte publica de la clase Tablero
    public:

        Tablero();
        //Constructor encargado de realizar abstracciones
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        //Gets y sets para enviar y recibir los atributos
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);

        //Constructores que imprimiran un separador por cada fila y columna
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();

        //Constructor encargado de imprimir el encabezado (numero de cada fila y columna)
        void imprimirEncabezado();

        //Constructor que imprime el tablero
        void imprimir();


        bool colocarMina(int x, int y);
        bool descubrirMina(int x, int y);

        //Constructor que verifica el numero de celdas descubiertas y no descubiertas
        int contarCeldasSinMinasYSinDescubrir();

    protected:


    //Parte privada de la clase Tablero
    private:

        //Declaracion de atrivutos
        int alturaTablero, anchoTablero;
        bool modoDesarrollador;
        //Declaracion del vector encargado de posicionar las celdas con el contenido del tablero
        vector<vector<Celda> > contenidoTablero;
        string getRepresentacionMina(int x, int y);
        int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
