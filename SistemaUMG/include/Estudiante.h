#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <vector>
#include <string>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;


class Estudiante
{
private:
std::vector<Estudiante> estudiantes;
    string nombre;
    int edad;
    int promedio;

public:
    void inicio();
    void menu();
    void mostrarEstudiantes();
    void ingresarEstudiante();
    void modificarEstudiante();
    void eliminarEstudiante();
};
//struct Estudiante {
//std::string nombre;
//int edad;
//double promedio;
//};

#endif // ESTUDIANTES_H
