//Incluye el encabezado de Juego.h
#include "Juego.h"
#include <fstream>
#include <iostream>
#include <unistd.h>

using namespace std;

//Constructor con los parametros de los atributos (abstraccion)
Juego::Juego(Tablero tablero, int cantidadMinas)
{
    this->tablero = tablero;
    this->cantidadMinas = cantidadMinas;
    this->colocarMinasAleatoriamente();
}

//Retorna un numero aleatorio
int Juego::aleatorioEnRango(int minimo,int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

//Retorna una fila aleatoria por medio del numero aleatorio y la altura del tablero
int Juego::filaAleatoria()
{
    return this->aleatorioEnRango(0, this->tablero.getAlturaTablero() - 1);
}

//Retorna una columna aleatoria por medio del numero aleatorio y el ancho del tablero
int Juego::columnaAleatoria()
{
    return this->aleatorioEnRango(0, this->tablero.getAnchoTablero() - 1);
}

//Constructor que coloca una mina por medio de posiciones aleatorias dadas anteriormente
void Juego::colocarMinasAleatoriamente()
{
    int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;
			}
		}
}

//Cosntructor que solicita la fila en la que se pocisionara el usuario
int Juego::solicitarFilaUsuario()
{
    int fila = 0;
    cout << "Ingresa la FILA en la que desea jugar: ";
    cin >> fila;
    return fila - 1;
}

//Cosntructor que solicita la columna en la que se pocisionara el usuario
int Juego::solicitarColumnaUsuario()
{
    int columna = 0;
    cout << "Ingresa la COLUMNA en la que desea jugar: ";
    cin >> columna;
    return columna - 1;
}

//Cosntructor que determina si el usuario gano dependiendo del contador de celdas descubiertas y no descubiertas
bool Juego::jugadorGana()
{
    int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
    if (conteo == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Este contructor es el encargado de imprimir la tabla por completo, y de determinar cuendo el juego termina con el
//constructor que determina si gano o no
void Juego::iniciar()
{
    int fila, columna;
    while (true)
    {
        this->tablero.imprimir();
        fila = this->solicitarFilaUsuario();
        columna = this->solicitarColumnaUsuario();
        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);
        if (!respuestaAUsuario)
        {
            cout << "Perdiste el Juego\n";
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }

        if (this->jugadorGana())
        {
            cout << "Ganaste el Juego\n";
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }
    }
}

