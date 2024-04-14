#include "Registro.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <persona.h>
#include <maestros.h>


using namespace std;



void Registro::menuR()
{


     system("color 9");
    int elec;

    cout<<"+-----------------------------------------------------------+"<< endl;
    cout<<"+             Registro de Alumnos y Maestros                +"<< endl;
    cout<<"+-----------------------------------------------------------+"<< endl;
    cout<<"    Indique si quiere agregar a un alumno o a un maestro    +" << endl;
    cout<<"+-----------------------------------------------------------+"<< endl;
    do
    {
    cout <<"       ->Ingrese su respuesta (alumno=1|maestros=2): ";
    cin >> elec;
    cout<<"+-----------------------------------------------------------+"<< endl;

    } while ((elec!=1) && (elec!=2));

    if (elec==1)
    {
        persona persona;
    persona.menu();
    }
    else if (elec==2)
    {
        maestros maestro;
        maestro.menu();
    }
 }

