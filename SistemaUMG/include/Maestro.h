#ifndef MAESTRO_H
#define MAESTRO_H
#include<iostream>
using std::string;

class Maestro
{
    public:
        Maestro();
        void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
        //virtual ~Maestro();

    protected:

    private:
        string codigo, nombre, telefono;

};

#endif // MAESTRO_H
