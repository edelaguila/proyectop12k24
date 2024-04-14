#ifndef CURSOS_H
#define CURSOS_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;

class Curso       //Clase Curso
{
    public: //constructores para la clase
        void menuCurso();
        void agregarCurso();
        void mostarCurso();
        void modificarCurso();
        void buscarCurso();
        void borrarCurso();
        bool loginCurso();
        bool buscarloginCurso(string user, string passw);
        //string getapodo();



    protected:

    private:    //Atributos privados
        string id;
        string nombre;
        string horario;
        string contrasena;

};
#endif
