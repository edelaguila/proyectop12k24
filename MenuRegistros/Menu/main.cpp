#include <iostream>
#include "persona.h"
#include "maestros.h"

using namespace std;

int main()
{
    int elec;

    cout << "\n" << endl;
    cout << "                Registro de Alumnos y Maestros";
    cout << "\n" << endl;

    cout << "      Indique si quiere agregar a un alumno o a un maestro" << endl;

    do
    {
        cout << "         Ingrese su respuesta (alumno=1|maestros=2): ";
        cin >> elec;
    } while ((elec!=1) && (elec!=2));

    if (elec==1)
    {
        persona estudiante;
        estudiante.menu();
    }
    else if (elec==2)
    {
        maestros maestro;
        maestro.menu();
    }

    return 0;
}
