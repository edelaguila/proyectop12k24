#include "menucursos.h"
#include "Registro.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <persona.h>
#include <maestros.h>


using namespace std;


void menucursos::MenuC()
{
   system("color 9");
    int opcion;
    char continuar;
    do {
        system("cls");

        cout << "+-----------------------------------------------+" << endl;
        cout << "|              Asignacion de cursos             |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|            1. Asignar Semestre                |" << endl;
        cout << "|            2. Asignar cursos                  |" << endl;
        cout << "|            3. Mostrar cursos asignados        |" << endl;
        cout << "|            4. Menu principal                  |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|         Ingrese su opcion [1/2/3/4]           |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                system("cls");
                cout << "Ingreso datos de semestre......."<< endl;
                 system("pause");
                break;
            case 2:
                cout << "Ingreso datos cursos....."<< endl;
                system("pause");
                break;
            case 3:
                cout << "Pedir informacion de persona/maestro a mostrar datos...."<< endl;
                system("pause");
                break;
            case 4:
                cout << "Volviendo a menu principal..."<< endl;
                continuar =  'n';
                break;
            default:
                cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                break;
        }
    } while (continuar != 'n');

}
