#ifndef ALUMNOS_H
#define ALUMNOS_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class alumnos
{
    private:
    string id,name,phone,college,address,Genero,Nacionalidadad,EstadoCivil,FechaNacimiento,AnoIngreso;
    public:
        void menu();
        void insertar();
        void desplegar();
        void modificar();
        void buscar();
        void borrar();
};

#endif // ALUMNOS_H
