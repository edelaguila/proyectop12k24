#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class persona
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


#endif // ARCHIVO_H
