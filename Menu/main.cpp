#include <iostream>
#include "alumnos.h"
#include "maestros.h"
#include "Registro.h"

using namespace std;

int main()
{
    system("color C");
    int opcion;
    char continuar;
    do {
        system("cls");

        cout << "+-----------------------------------------------+" << endl;
        cout << "|  Bienvenido al sistema de la Univeridad umg   |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|            1. Agregar Registros               |" << endl;
        cout << "|            2. Salida                          |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|            Ingrese su opcion [1/2]            |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                system("cls");
                cout << "Entrando al area de registros....."<< endl;
                Registro Registros;
                Registros.menuR();
                break;
            case 2:
                cout << "Saliendo del programa..." << endl;
                continuar = 'n';
                break;
            default:
                cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                break;
        }
    } while (continuar != 'n');

    return 0;
}
