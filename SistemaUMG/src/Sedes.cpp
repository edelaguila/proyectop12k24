#include <iostream>

using namespace std;

int main() {
    // Declaramos las variables necesarias
    int opcion;
    bool menuActivo = true;

    // Ciclo principal del programa
    while (menuActivo) {
        // Mostramos el men� de opciones
        cout << "***********\n";
        cout << " 1 - Ver informaci�n de sede.\n";
        cout << " 2 - Ver carreras disponibles en la sede.\n";
        cout << " 3 - Ver horarios de clases en la sede.\n";
        cout << " 4 - Ver eventos en la sede.\n";
        cout << " 5 - Salir.\n";
        cout << " Ingresa tu opci�n y presiona enter: ";

        // Solicitamos al usuario que ingrese su opci�n
        cin >> opcion;

        // Evaluamos la opci�n ingresada por el usuario
        switch (opcion) {
            case 1:
                cout << "Mostrando informaci�n de sede...\n";
                // Aqu� ir�a el c�digo para mostrar la informaci�n de la sede
                break;
            case 2:
                cout << "Mostrando carreras disponibles en la sede...\n";
                // Aqu� ir�a el c�digo para mostrar las carreras disponibles en la sede
                break;
            case 3:
                cout << "Mostrando horarios de clases en la sede...\n";
                // Aqu� ir�a el c�digo para mostrar los horarios de clases en la sede
                break;
            case 4:
                cout << "Mostrando eventos en la sede...\n";
                // Aqu� ir�a el c�digo para mostrar los eventos en la sede
                break;
            case 5:
                cout << "Fin del Programa.\n";
                menuActivo = false; // Cambiamos el valor de menuActivo para salir del ciclo
                break;
            default:
                cout << "Opci�n inv�lida. Por favor, intenta de nuevo.\n";
                break;
        }
    }

    return 0; // Indicamos que el programa finaliz� correctamente
}
