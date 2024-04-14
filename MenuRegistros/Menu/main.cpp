#include <iostream>
#include "persona.h"
#include "maestros.h"
<<<<<<< HEAD
#include "Registro.h"
=======
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0

using namespace std;

int main()
{
    system("color 9");
    int elec;

<<<<<<< HEAD


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

=======
    cout<<"         +---------------------------------------------+"<< endl;
    cout << "                |Registro de Alumnos y Maestros|"<< endl;
    cout<<"         +---------------------------------------------+"<< endl;

    cout << "      > Indique si quiere agregar a un alumno o a un maestro" << endl;
    cout<<"       +-----------------------------------------------------+"<< endl;
    do
    {
        cout << "         ->Ingrese su respuesta (alumno=1|maestros=2): ";
        cin >> elec;
    } while ((elec!=1) && (elec!=2));

    if (elec==1)
    {
        persona persona;
    persona.menu();
    }
    else if (elec==2)
    {
        maestros maestro;
        maestro.menu();
    }


    return 0;
}
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
