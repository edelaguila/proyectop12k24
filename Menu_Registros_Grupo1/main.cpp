#include <iostream>

using namespace std;

int main()
{
    int elec;

    cout<<"+-----------------------------------------------------------+"<< endl;
    cout<<"+             Registro de Alumnos y Maestros                +"<< endl;
    cout<<"+-----------------------------------------------------------+"<< endl;
    cout<<"+   Indique si quiere agregar a un alumno o a un maestro    +" << endl;
    cout<<"+-----------------------------------------------------------+"<< endl;
    do
    {
    cout <<"       ->Ingrese su respuesta (alumno=1|maestros=2): ";
    cin >> elec;
    cout<<"+-----------------------------------------------------------+"<< endl;

    } while ((elec!=1) && (elec!=2));

    if (elec==1)
    {
        cout << "\n" << endl;
        cout << "           En este apartado entra el crud de alumnos" << endl;
        cout << "\n" << endl;
    }
    else if (elec==2)
    {
        cout << "\n" << endl;
        cout << "          En este apartado entra el crud de maestros" << endl;
        cout << "\n" << endl;
    }

    return 0;
}
