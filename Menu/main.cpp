#include <iostream>
#include "persona.h"
#include "maestros.h"
#include "Registro.h"

using namespace std;

int main()
{
    system("color 9");
    int opcion;
    char continuar;
    do {
        system("cls");

        cout << "+-----------------------------------------------+" << endl;
        cout << "|  Bienvenido al sistema de la Univeridad umg   |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|            1. Agregar Registros               |" << endl;
        cout << "|            2. Agregar Asignacion              |" << endl;
        cout << "|            3. Tesoreria                       |" << endl;
        cout << "|            4. Asignacion de notas             |" << endl;
        cout << "|            5. Salida                          |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|         Ingrese su opcion [1/2/3/4]           |" << endl;
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
                cout << "En este apartado se crear el menu para la asignacion de estudiantes"<< endl;
                system("pause");
                break;
            case 3:
                cout << "En este apartado se crear el menu para la tesoreria"<< endl;
                system("pause");
                break;
            case 4:
                cout << "En este apartado se crear el menu para la Asignacion de notas"<< endl;
                system("pause");
                break;
            case 5:
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
