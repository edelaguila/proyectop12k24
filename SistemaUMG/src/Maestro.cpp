//Menu Maestros
//creado por Mishel Loeiza 9959/23/3457
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <conio.h>
#include "Maestro.h"

using namespace std;

struct Alumno {
    string nombre;
    string carnet;
};

struct Tarea {
    string descripcion;
    float calificacion;
};

class Curso {
private:
    string nombre;
    vector<Alumno> alumnos;
    vector<Tarea> tareas;

public:
    Curso(string n) : nombre(n) {}

    void agregarAlumno(Alumno alumno) {
        alumnos.push_back(alumno);
    }

    void mostrarAlumnos() {
        cout << "\nAlumnos del curso " << nombre << ":\n";
        for (const auto& alumno : alumnos) {
            cout << "Nombre: " << alumno.nombre << ", Carnet: " << alumno.carnet << endl;
        }
    }

    void asignarTarea(int indiceAlumno) {
        if (indiceAlumno >= 0 && indiceAlumno < alumnos.size()) {
            cout << "Ingrese la descripción de la tarea para " << alumnos[indiceAlumno].nombre << ": ";
            string descripcion;
            cin.ignore();
            getline(cin, descripcion);
            tareas.push_back({descripcion, -1.0}); // Calificación inicializada en -1
            cout << "Tarea asignada exitosamente." << endl;
        } else {
            cout << "Índice de alumno inválido." << endl;
        }
    }

    void mostrarTareas() {
        cout << "\nTareas del curso " << nombre << ":\n";
        for (size_t i = 0; i < tareas.size(); ++i) {
            cout << "Tarea " << i + 1 << ": " << tareas[i].descripcion << ", Calificación: " << tareas[i].calificacion << endl;
        }
    }

    void calificarTarea(int indiceTarea, float calificacion) {
        if (indiceTarea >= 0 && indiceTarea < tareas.size()) {
            tareas[indiceTarea].calificacion = calificacion;
            cout << "Tarea calificada exitosamente." << endl;
        } else {
            cout << "Índice de tarea inválido." << endl;
        }
    }
};

int main() {
    Maestro profesor;
    // Crear cursos
    Curso cursoCalculo("Cálculo");
    Curso cursoProgramacion("Programación");

    // Agregar alumnos a los cursos
    cursoCalculo.agregarAlumno({"Mishel Loeiza", "9959-23-3457"});
    cursoCalculo.agregarAlumno({"Rocio López", "9959-23-6421"});
    cursoCalculo.agregarAlumno({"Ruddy Eduardo", "9959-23-0101"});

    cursoProgramacion.agregarAlumno({"Mishel Loeiza", "9959-23-3457"});
    cursoProgramacion.agregarAlumno({"Rocio López", "9959-23-6421"});
    cursoProgramacion.agregarAlumno({"Ruddy Eduardo", "9959-23-0101"});

    // Agregar cursos al profesor
    profesor.menu();
    return 0;
}
