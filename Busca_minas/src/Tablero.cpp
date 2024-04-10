//Incluye el encabezado de Tablero.h
#include "Tablero.h"
#include <sstream>
#include <iostream>

using namespace std;

//Constructor encargado de darle identidad a al tablero en la clase juego
Tablero::Tablero()
{
}

//Constructor con los parametros de los atributos (abstraccion) y posicionador por clico y colocar el contenido en cada celda
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)
{
    //Declaracion de atributos
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;
    int x, y;

    //Ciclo que va haciendo la altura de la estructura del tablero
    for (y=0; y < this->alturaTablero; y++)
    {
        //Devuelve el vector de la celda en cada fila
        vector<Celda> fila;

        //Ciclo que va haciendo el ancho de la estructura del tablero
        for (x=0; x < this->anchoTablero; x++)
        {
            //Devuelve un dato dentro de la celda
            fila.push_back((Celda(x, y, false)));
        }
        //Devuelve el contenido de la tabla en las filas (numero de filas al costado)
        this->contenidoTablero.push_back(fila);
    }
}

//Retorna la variable alturaTablero
int Tablero::getAlturaTablero()
{
    return this->alturaTablero;
}

//Parametro del atributo alturaTablero
int Tablero::setAlturaTablero(int alturaTablero)
{
    this->alturaTablero = alturaTablero;
}

//Retorna la variable anchoTablero
int Tablero::getAnchoTablero()
{
    return this->anchoTablero;
}

//Parametro del atributo anchoTablero
int Tablero::setAnchoTablero(int anchoTablero)
{
    this->anchoTablero = anchoTablero;
}

//Retorna la variable modoDesarrollador
bool Tablero::getModoDesarrollador()
{
    return this->modoDesarrollador;
}

//Parametro del atributo modoDesarrollador
bool Tablero::setModoDesarrollador(bool modoDesarrollador)
{
    this->modoDesarrollador = modoDesarrollador;
}

//Retorno de la mina representada con *x
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)
{
    //Celda temporal para ver si es mina o no
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);

    //Pregunta si la celda tiene mina y esta en modo desarroladora
    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)
    {
        //Si la celda temporal es una mina coloca un *
        if (celdaTemporal.getMina())
        {
            return "*";
        }
        //Si lo dicho anteriormente no es cierto unicamente contara la celda como si estubiera cerca de una mina
        else
        {
            int cantidadCelda=this->minasCercanas(coordenadaY,coordenadaX);
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;
            return cantidadCeldaString;
        }
    }
    //Si la celda tiene no mina y no esta en modo desarroladora regresara un signo de pregunta, dando a entender que esta en el modo tradicional de juego
    else
    {
        return "?";
    }
}

//Constructor que se encarga de las celdas con las minas cercanas
int Tablero::minasCercanas(int filaTablero, int columnaTablero)
{
    //Declaracion de atributos
        int contadorTablero = 0;
        int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;

        //Todos los if estan encargados de colocar un numero de contenido a las celdas respectivas, como la logica del busca minas,
        //en esta celda podran aparecer numeros unos, y todo segun la logica de filas y columnas de inicio a fin.
        if (filaTablero <= 0)
		{
			filaInicioTablero = 0;
		}
		else
		{
			filaInicioTablero = filaTablero - 1;
		}

		if (filaTablero + 1 >= this->alturaTablero)
		{
			filaFinTablero = this->alturaTablero - 1;
		}
		else
		{
			filaFinTablero = filaTablero + 1;
		}

		if (columnaTablero <= 0)
		{
			columnaInicioTablero = 0;
		}
		else
		{
			columnaInicioTablero = columnaTablero - 1;
		}
		if (columnaTablero + 1 >= this->anchoTablero)
		{
			columnaFinTablero = this->anchoTablero - 1;
		}
		else
		{
			columnaFinTablero = columnaTablero + 1;
		}
		int m;
		for (m = filaInicioTablero; m <= filaFinTablero; m++)
		{
			int l;
			for (l = columnaInicioTablero; l <= columnaFinTablero; l++)
			{
				if (this->contenidoTablero.at(m).at(l).getMina())
				{
					contadorTablero++;
				}
			}
		}
		//Al final devolvera el contador de minas que hay en el tablero
		return contadorTablero;
}

//Constructor con el metodo de imprimir un separador para el encabezado
void Tablero::imprimirSeparadorEncabezado()
	{
	    //Declaracion de atributos
		int m;
		for (m = 0; m <= this->anchoTablero; m++)
		{
			cout << "----";
			if (m + 2 == this->anchoTablero)
			{
				cout << "-";
			}
		}
		cout << "\n";
	}

	//Constructor con el metodo de imprimir un separador especial para cada fila del tablero
	void Tablero::imprimirSeparadorFilas()
	{
	    //Declaracion de atributos
		int m;
		for (m = 0; m <= this->anchoTablero; m++)
		{
			if (m <= 1)
			{
				cout << "|---";
			}
			else
			{
				cout << "+---";
			}
			if (m == this->anchoTablero)
			{
				cout << "+";
			}
		}
		cout << "\n";
	}

		//Constructor con el metodo de imprimir el encabezado de los numeros de las posiciones de las filas y columnas
	void Tablero::imprimirEncabezado()
	{
		this->imprimirSeparadorEncabezado();
		cout << "|   ";
		int l;
		for (l = 0; l < this->anchoTablero; l++)
		{
			cout << "| " << l + 1 << " ";
			if (l + 1 == this->anchoTablero)
			{
				cout << "|";
			}
		}
		cout << "\n";
	}

	//Imprime la estructura del tablero
	void Tablero::imprimir()
	{
		this->imprimirEncabezado();
		this->imprimirSeparadorEncabezado();
		int x, y;
		for (y = 0; y < this->alturaTablero; y++)
		{
			cout << "| " << y + 1 << " ";
			for (x = 0; x < this->anchoTablero; x++)
			{
				cout << "| " << this->getRepresentacionMina(x, y) << " ";
				if (x + 1 == this->anchoTablero)
				{
					cout << "|";
				}
			}
			cout << "\n";
			this->imprimirSeparadorFilas();
		}
	}

	//Retorna la posicion de la mina
    bool Tablero::colocarMina(int x, int y)
	{
		return this->contenidoTablero.at(y).at(x).setMina(true);
	}

	//Retorna si en la celda hay una mina o no por medio de un true o un false
    bool Tablero::descubrirMina(int x, int y)
	{
		this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);
		Celda celda = this->contenidoTablero.at(y).at(x);
		if (celda.getMina())
		{
			return false;
		}
		return true;
	}

	//Constructor encargado de contar las celdas que cuentan con las minas descubierta y no descubiertas
	int Tablero::contarCeldasSinMinasYSinDescubrir()
	{
		int x, y, contador = 0;
		for (y = 0; y < this->alturaTablero; y++)
		{
			for (x = 0; x < this->anchoTablero; x++)
			{
				Celda celdaTemporal = this->contenidoTablero.at(y).at(x);
				if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())
				{
					contador++;
				}
			}
		}
		return contador;
	}
