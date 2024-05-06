#ifndef NOTAS_H
#define NOTAS_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;
class Notas
{
     public: //constructores para la clase
        void menuNotas();
        void agregarNotas();
        void mostrarNotas();
        void modificarNotas();
        void buscarNota();
        void borrarNota();
        bool loginMaestro();
        bool buscar(string user, string passw);



    protected:

    private:    //Atributos privados
        string id;
        string nombre;
        int notaP1;
        int notaP2;
        int actividad;
        int notaFinal;
        string PIN;

};

#endif // NOTAS_H
