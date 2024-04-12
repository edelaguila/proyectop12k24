#include <iostream>

using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int opcion;
    bool juegoActivo = true;

    // Ciclo principal del juego
    while (juegoActivo != false){
        // Mostramos el menú de opciones
        cout << "***********\n";
        cout << " 1 - Ver registros de estudiantes.\n";
        cout << " 2 - Agregar nuevo estudiante.\n";
        cout << " 3 - Actualizar información del estudiante.\n";
        cout << " 4 - Eliminar registro del estudiante.\n";
        cout << " 5 - Salir.\n";
        cout << " Ingresa tu opción y presiona enter: ";

        // Solicitamos al usuario que ingrese su opción
        cin >> opcion;

        // Evaluamos la opción ingresada por el usuario
        switch (opcion)
        {
            case 1:
                cout << "Mostrando registros de estudiantes...\n";
                // Aquí iría el código para mostrar los registros de estudiantes
                break;
            case 2:
                cout << "Agregando nuevo estudiante...\n";
                // Aquí iría el código para agregar un nuevo estudiante
                break;
            case 3:
                cout << "Actualizando información del estudiante...\n";
                // Aquí iría el código para actualizar la información del estudiante
                break;
            case 4:
                cout << "Eliminando registro del estudiante...\n";
                // Aquí iría el código para eliminar el registro de un estudiante
                break;
            case 5:
                cout << "Fin del Programa.\n";
                juegoActivo = false; // Cambiamos el valor de juegoActivo para salir del ciclo
                break;
            default:
                cout << "Opción inválida. Por favor, intenta de nuevo.\n";
                break;
        }

    }
    return 0; // Indicamos que el programa finalizó correctamente
}

