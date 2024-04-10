//Incluye el encabezado de Celda.h
#include "Celda.h"
#include <iostream>

using namespace std;

//Constructor con los parametros de los atributos (abstraccion)
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;
}

//Retorna la variable coordenadaX
int Celda::getCoordenadaX()
{
    return this->coordenadaX;
}

//Parametro del atributo coordenadaX
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
}

//Retorna la variable coordenadaY
int Celda::getCoordenadaY()
{
    return this->coordenadaY;
}

//Parametro del atributo coordenadaY
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
}

//Retorna la variable mina
bool Celda::getMina()
{
    return this->mina;
}

//Parametro del atributo mina con una condicion
bool Celda::setMina(bool mina)
{
    //Si la mina retorna entonces sera falso el proceso de colocar mina
    if (this->getMina())
    {
        return false;
    }
    //Pero si este cuenta con el parametro de atributo entonces sera verdadero el proceso de colocar mina
    else{
        this->mina = mina;
        return true;
    }
}

//Retorna la variable minaDescubierta
bool Celda::getMinaDescubierta ()
{
    return this->minaDescubierta;
}

//Parametro del atributo minaDescubierta
bool Celda::setMinaDescubierta (bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
}

//Imprime una pregunta con los parametros de las coordenadas y el de la mina
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}
