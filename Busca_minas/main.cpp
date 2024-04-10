#include <iostream>
#include <unistd.h>
//Encabezados necesarios para la ejecicion del juego
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
    //Declaracion de variables constantes que fundamentan el principio del juego
    const int FILAS_TABLERO = 5;
    const int COLUMNAS_TABLERO = 5;
    const int MINAS_EN_TABLERO = 3;
    const int VIDAS_JUGADOR = 3;
    //Teniendo el modo desarrollador como predeterminado
    const bool MODO_DESARROLLADOR = true;
    //Funcion que toma  las variables constantes
    Config configuracionJuego(FILAS_TABLERO, COLUMNAS_TABLERO, MINAS_EN_TABLERO, MODO_DESARROLLADOR, VIDAS_JUGADOR);
    //Juego dado con constructores abordados por los encabezados de Juego.h y Config.h
    Juego juego(Tablero(configuracionJuego.getFilasTablero(), configuracionJuego.getColumnasTablero(), configuracionJuego.getModoDesarrollador()), configuracionJuego.getMinasTablero());
    srand(getpid());
    int opciones;
    bool repetir = true;

    //Ciclo Do While que mostrara el menu general del juego y repitiendose por medio de la la variable repetir
    do
    {
        //Limpiador de pantalla
        system("cls");
        //Menu general
        cout << "\n\n\t\tJuego Buscar Minas ~Menu~" << endl;
        cout << "\t------------------------------------------" << endl;
        cout << "\n";
        cout << "\t1. Configuracion" << endl;
        cout << "\t2. Iniciar Juego" << endl;
        cout << "\t3. Salir" << endl;
        cout << "\n";
        cout << "\t  Ingrese la opcion de su preferencia: ";
        cin >> opciones;

        //Switch encargado de las funciones generales del juego por medio de la eleccion del usuario por medio de numeros
        switch (opciones)
        {
        case 1:
            //En el caso de elegir uno abrira el menu de configuraciones dada por la clase de config
            {
            configuracionJuego.menuConfiguracion();
            break;
            }

        case 2:
            //En el caso de elegir dos desplegara todo lo necesario para poder jugar el busca minas
            {
                Juego juegoTemporal(Tablero(configuracionJuego.getFilasTablero(), configuracionJuego.getColumnasTablero(), configuracionJuego.getModoDesarrollador()), configuracionJuego.getMinasTablero());
                juegoTemporal.iniciar();
                system("pause");
                break;
            }

        case 3:
            //En el caso de elegir el tres el programa se cerrara
            {
                repetir = false;
                break;
            }
        }

    } while (repetir);
    //Limpiador de pantalla
    system("cls");
    return 0;
}
