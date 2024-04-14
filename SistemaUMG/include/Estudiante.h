#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <vector>
#include <string>

struct Estudiante {
    std::string nombre;
    int edad;
    double promedio;
};

void mostrarEstudiantes(const std::vector<Estudiante>& estudiantes);
void ingresarEstudiante(std::vector<Estudiante>& estudiantes);
void modificarEstudiante(std::vector<Estudiante>& estudiantes);
void eliminarEstudiante(std::vector<Estudiante>& estudiantes);

#endif // ESTUDIANTE_H
