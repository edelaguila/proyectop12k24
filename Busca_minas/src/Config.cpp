//Incluye el encabezado de Confing.h
#include "Config.h"
#include <iostream>

using namespace std;

//Constructor con los parametros de los atributos (abstraccion)
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrollador = modoDesarrollador;
    this->vidasTablero = vidasTablero;
}

//Constructor con el metodo de desplegar un menu para poder modificar el juego
void Config::menuConfiguracion()
{
    //Declaracion de atributos
    int opciones;
    int valorIngresado;
    bool repetir = true;

    //Ciclo Do While encargado de repetir el proceso manejado por el atributo booleano repetir
    do
    {
        //Limpiador de pantalla para observar todas las opciones posibles
        system("cls");
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getFilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getColumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getMinasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getModoDesarrollador() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getVidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        //El usuraio ingresara el numero de opcion que gustte
        cout << "\n\t\tIngrese una opcion: ";
        //Se lee el numero colocado por el usuario
        cin >> opciones;
        //Si no quiere regresar al menu general, entonces ingresara una cantidad
        if (opciones!=6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            //Leera el valor ingresado por el usuario
            cin >> valorIngresado;
        }
        //Ciclo switch encargado de darle trabajo a cada una de las opciones por medio de numeros
        switch (opciones)
        {
        //Si el usuario elije el 1 el valor ingresado anteriormente sera destinado a cambiar el numero de filas
        case 1:
            {
                this->setFilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }
        //Si el usuario elije el 2 el valor ingresado anteriormente sera destinado a cambiar el numero de columnas
        case 2:
            {
                this->setColumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }
        //Si el usuario elije el 3 el valor ingresado anteriormente sera destinado a cambiar el numero de minas
        case 3:
            {
                this->setMinasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }
        //Si el usuario elije el 4 el valor ingresado anteriormente sera destinado a cambiar el modo de juego
        case 4:
            {
                this->setModoDesarrollador(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;
                break;
            }
        //Si el usuario elije el 5 el valor ingresado anteriormente sera destinado a cambiar el numero de las vidas del jugador
        case 5:
            {
                this->setVidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }
        //Si el usuario elije el 6 el valor ingresado anteriormente sera destinado a repetir o no el menu desarrollador para pasar al menu general
        case 6: repetir = false;
                break;
        }
        //Breve pausa para que el usuario precione cualquier tecla para continuar
        system("pause");
    } while (repetir);
}

//Retorna la variable filasTablero
int Config::getFilasTablero()
{
    return this->filasTablero;
}

//Parametro del atributo filasTablero
int Config::setFilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero;
}

//Retorna la variable columnasTablero
int Config::getColumnasTablero()
{
    return this->columnasTablero;
}

//Parametro del atributo columnasTablero
int Config::setColumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;
}

//Retorna la variable minasTablero
int Config::getMinasTablero()
{
    return this->minasTablero;
}

//Parametro del atributo minasTablero
int Config::setMinasTablero(int minasTablero)
{
    this->minasTablero=minasTablero;
}

//Retorna la variable vidasTablero
int Config::getVidasTablero()
{
    return this->vidasTablero;
}

//Parametro del atributo vidasTablero
int Config::setVidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero;
}

//Retorna la variable vidasTablero
bool Config::getModoDesarrollador()
{
    this->vidasTablero=vidasTablero;
}

//Parametro del atributo modoDesarrollador
bool Config::setModoDesarrollador(bool modoDesarrollador)
{
    this->modoDesarrollador=modoDesarrollador;
}
