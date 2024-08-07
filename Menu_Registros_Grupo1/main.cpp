//Menu General creado por Oscar Morales 9959-23-3070

#include <iostream>

using namespace std;

int main()
{
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
                cout << "\n"  << endl;
                cout << "Opcion donde abrira el menu de registros" << endl;
                cout << "\n"  << endl;
                system("pause");
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
