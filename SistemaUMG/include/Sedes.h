#ifndef SEDES_H
#define SEDES_H


#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;

class Sedes
{
    public:
        //Sedes();
        //virtual ~Sedes();
        void menuSede();
        void agregarSede();
        void mostarSede();
        void modificarSede();
        void buscarSede();
        void borrarSede();
        bool loginSede();
        bool buscarloginSede(string user, string passw);
        //string getapodo();


    protected:


    private:    //Atributos privados
        string id;
        string nombre;
        string horario;
        //string contrasena;

};

#endif // SEDES_H
