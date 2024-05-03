#include <iostream>
#include "estudiante.h"
using namespace std;

void menu() {
    cout << "\n            MENU UMG ALUMNOS"
         << "\n ======================================"
         << "\n 1.- Ingresar Estudiante"
         << "\n 2.- Modificar Estudiante"
         << "\n 3.- Eliminar Estudiante"
         << "\n 4.- Mostrar Estudiantes"
         << "\n 5.- Salir"
         << "\n ======================================"
         << "\n Ingrese una opcion: ";
}
void mostrarEstudiantes(const vector<Estudiante>& estudiantes) {
    cout << "\n--- LISTA DE ESTUDIANTES ---\n";
    for (const auto& estudiante : estudiantes) {
        cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << ", Promedio: " << estudiante.promedio << endl;
    }
}

void ingresarEstudiante(vector<Estudiante>& estudiantes) {
    Estudiante nuevoEstudiante;
    cout << "Ingrese solo un nombre del estudiante: ";
    cin >> nuevoEstudiante.nombre;
    cout << "Ingrese la edad del estudiante: ";
    cin >> nuevoEstudiante.edad;
    cout << "Ingrese el promedio del estudiante: ";
    cin >> nuevoEstudiante.promedio;
    estudiantes.push_back(nuevoEstudiante);
}

void modificarEstudiante(vector<Estudiante>& estudiantes) {
    int indice;
    cout << "Ingrese el indice del estudiante a modificar  (Nombre, Edad, Promedio): ";
    cin >> indice;
    if (indice >= 0 && indice < estudiantes.size()) {
        Estudiante& estudiante = estudiantes[indice];
        cout << "Ingrese el nuevo nombre del estudiante: ";
        cin >> estudiante.nombre;
        cout << "Ingrese la nueva edad del estudiante: ";
        cin >> estudiante.edad;
        cout << "Ingrese el nuevo promedio del estudiante: ";
        cin >> estudiante.promedio;
    } else {
        cout << "Indice fuera de rango." << endl;
    }
}

void eliminarEstudiante(vector<Estudiante>& estudiantes) {
    int indice;
    cout << "Ingrese el indice del estudiante a eliminar: ";
    cin >> indice;
    if (indice >= 0 && indice < estudiantes.size()) {
        estudiantes.erase(estudiantes.begin() + indice);
    } else {
        cout << "Indice fuera de rango." << endl;
    }
}

int main() {
    vector<Estudiante> estudiantes;
    int opcion;

    do {
        menu();
        cin >> opcion;

        switch(opcion) {
            case 1:
                ingresarEstudiante(estudiantes);
                break;
            case 2:
                modificarEstudiante(estudiantes);
                break;
            case 3:
                eliminarEstudiante(estudiantes);
                break;
            case 4:
                mostrarEstudiantes(estudiantes);
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, ingrese una opcion valida." << endl;
                break;
        }

    } while (opcion != 5);

    return 0;
}

