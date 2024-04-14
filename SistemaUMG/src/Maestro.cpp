//Menu Maestros
//creado por Mishel Loeiza 9959/23/3457
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>
#include <string>

using namespace std;

class Persona {
private:
    string ID, nombre, contrasena;
    string tareaCurso1, tareaCurso2;
    string entregaTareaCurso1, entregaTareaCurso2;
    float califTareaCurso1, califTareaCurso2;
    float notaCurso1, notaCurso2;

public:
    void menu();
    void verInformacionAlumnos();
    void asignarTareas();
    void verEntregaTareas();
    void calificarTareas();
    void entregaNotas();
};

void Persona::menu() {
    int eleccion;
    do {
        system("cls");

        cout<< "\t\t\t ------------------------------- " <<endl;
        cout<< "\t\t\t | MENU PARA MAESTROS | " <<endl;
        cout<< "\t\t\t ------------------------------- " <<endl;
        cout<< "\t\t\t 1. Ver Información de Alumnos " <<endl;
        cout<< "\t\t\t 2. Asignar Tareas " <<endl;
        cout<< "\t\t\t 3. Ver Entrega de Tareas " <<endl;
        cout<< "\t\t\t 4. Calificar Tareas " <<endl;
        cout<< "\t\t\t 5. Entrega de Notas " <<endl;
        cout<< "\t\t\t 6. Salir " <<endl;

        cout<< "\t\t\t ------------------------------- " <<endl;
        cout<< "\t\t\t Opción a elegir:[1/2/3/4/5/6] " <<endl;
        cout<< "\t\t\t ------------------------------- " <<endl;
        cout<< "Ingresa tu Opción: " ;
        cin>>eleccion;

        switch (eleccion) {
            case 1:
                verInformacionAlumnos();
                break;
            case 2:
                asignarTareas();
                break;
            case 3:
                verEntregaTareas();
                break;
            case 4:
                calificarTareas();
                break;
            case 5:
                entregaNotas();
                break;
            case 6:
                exit(0);
            default:
                cout<< "\n\t\t\t Opción inválida...Por favor prueba otra vez.. " ;
        }
        getch();
    } while (eleccion != 6 );
}

void Persona::verInformacionAlumnos() {
    system("cls");
    cout << " ---------------------------------------- " << endl;
    cout << "    CURSO DE CÁLCULO " << endl;
    cout << " ---------------------------------------- " << endl;
    cout << " Alumno 1: Mishel Loeiza, Carnet 9959-23-3457 " << endl;
    cout << " Alumno 2: Rocio López, Carnet 9959-23-6421 " << endl;
    cout << " Alumno 3: Ruddy Eduardo, Carnet 9959-23-0101 " << endl;

    cout << " \n ---------------------------------------- " << endl ;
    cout << "    CURSO DE PROGRAMACION 1 " << endl;
    cout << " ---------------------------------------- " << endl;
    cout << " Alumno 1: Mishel Loeiza, Carnet 9959-23-3457 " << endl;
    cout << " Alumno 2: Rocio López, Carnet 9959-23-6421 " << endl;
    cout << " Alumno 3: Ruddy Eduardo, Carnet 9959-23-0101 " << endl;
}

void Persona::asignarTareas() {
    system("cls");
    cout << " ---------------------------------------- " << endl;
    cout << "    ASIGNAR TAREAS " << endl;
    cout << " ---------------------------------------- " << endl;
    cout << " Ingrese la tarea para el curso de Cálculo: " ;
    cin.ignore();
    getline(cin, tareaCurso1);
    cout << " Ingrese la tarea para el curso de Programacion 1: " ;
    getline(cin, tareaCurso2);
}

void Persona::verEntregaTareas() {
    system("cls");
    cout << " ---------------------------------------- " << endl;
    cout << "    VER ENTREGA DE TAREAS " << endl;
    cout << " ---------------------------------------- " << endl;
    cout << " Entrega de tarea para el curso de Calculo: " << entregaTareaCurso1 << endl;
    cout << " Entrega de tarea para el curso de Programacion 1: " << entregaTareaCurso2 << endl;
}

void Persona::calificarTareas() {
    system("cls");
    cout << " ---------------------------------------- " << endl;
    cout << "    CALIFICAR TAREAS " << endl;
    cout << " ---------------------------------------- " << endl;
    cout << " Ingrese la calificación para la tarea del curso de Cálculo: " ;
    cin >> califTareaCurso1;
    cout << " Ingrese la calificación para la tarea del curso de Programación 1: " ;
    cin >> califTareaCurso2;
}

void Persona::entregaNotas() {
    system("cls");
    cout << " ---------------------------------------- " << endl;
    cout << "    ENTREGA DE NOTAS " << endl;
    cout << " ---------------------------------------- " << endl;
    notaCurso1 = califTareaCurso1;
    notaCurso2 = califTareaCurso2;
    cout << " Nota final del curso de Cálculo: " << notaCurso1 << endl;
    cout << " Nota final del curso de Programación 1: " << notaCurso2 << endl;
}

int main() {
    Persona maestro;
    maestro.menu();
    return 0;
}