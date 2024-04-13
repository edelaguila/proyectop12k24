//Menu realizado por Mishel Loeiza 9959-23-34547
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
        string id,name,pass;
        string tareaCurso1, tareaCurso2; // Variables para almacenar las tareas asignadas
        string entregaTareaCurso1, entregaTareaCurso2; // Variables para almacenar las entregas de tareas
        float califTareaCurso1, califTareaCurso2; // Variables para almacenar las calificaciones de las tareas
        float notaCurso1, notaCurso2; // Variables para almacenar las notas

    public:
        void menu();
        void verInformacionAlumnos();
        void asignarTareas();
        void verEntregaTareas();
        void calificarTareas();
        void entregaNotas();
};

void persona::menu()
{
    int choice;
    do
    {
        system("cls");

        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\t |   MENU PARA MAESTROS       |"<<endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\t 1. Ver Informacion de Alumnos"<<endl;
        cout<<"\t\t\t 2. Asignar Tareas"<<endl;
        cout<<"\t\t\t 3. Ver Entrega de Tareas"<<endl;
        cout<<"\t\t\t 4. Calificar Tareas"<<endl;
        cout<<"\t\t\t 5. Entrega de Notas"<<endl;
        cout<<"\t\t\t 6. Salir"<<endl;

        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"Ingresa tu Opcion: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                verInformacionAlumnos();
                break;
            case 2:
                asignarTareas();
                break;
            case 3:
                verEntregaTareas();
                break;
            case 4:
                calificarTareas();
                break;
            case 5:
                entregaNotas();
                break;
            case 6:
                exit(0);
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        }
        getch();
    } while(choice != 6);
}

void persona::verInformacionAlumnos()
{
    system("cls");
    cout << "----------------------------------------" << endl;
    cout << "   CURSO DE CALCULO" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Alumno 1: Mishel Loeiza, Carnet 9959-23-3457" << endl;
    cout << "Alumno 2: Rocio López, Carnet 9959-23-6421" << endl;
    cout << "Alumno 3: Ruddy Eduardo, Carnet 9959-23-0101" << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "   CURSO DE PROGRAMACION 1" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Alumno 1: Mishel Loeiza, Carnet 9959-23-3457" << endl;
    cout << "Alumno 2: Rocio López, Carnet 9959-23-6421" << endl;
    cout << "Alumno 3: Ruddy Eduardo, Carnet 9959-23-0101" << endl;
}

void persona::asignarTareas()
{
    system("cls");
    cout << "----------------------------------------" << endl;
    cout << "   ASIGNAR TAREAS" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Ingrese la tarea para el curso de Calculo: ";
    cin.ignore(); // Para limpiar el buffer del teclado
    getline(cin, tareaCurso1);
    cout << "Ingrese la tarea para el curso de Programacion 1: ";
    getline(cin, tareaCurso2);
}

void persona::verEntregaTareas()
{
    system("cls");
    cout << "----------------------------------------" << endl;
    cout << "   VER ENTREGA DE TAREAS" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Entrega de tarea para el curso de Calculo: " << entregaTareaCurso1 << endl;
    cout << "Entrega de tarea para el curso de Programacion 1: " << entregaTareaCurso2 << endl;
}

void persona::calificarTareas()
{
    system("cls");
    cout << "----------------------------------------" << endl;
    cout << "   CALIFICAR TAREAS" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Ingrese la calificacion para la tarea del curso de Calculo: ";
    cin >> califTareaCurso1;
    cout << "Ingrese la calificacion para la tarea del curso de Programacion 1: ";
    cin >> califTareaCurso2;
}

void persona::entregaNotas()
{
    system("cls");
    cout << "----------------------------------------" << endl;
    cout << "   ENTREGA DE NOTAS" << endl;
    cout << "----------------------------------------" << endl;
    notaCurso1 = califTareaCurso1; // Supongamos que la nota es igual a la calificación de la tarea
    notaCurso2 = califTareaCurso2; // Supongamos que la nota es igual a la calificación de la tarea
    cout << "Nota final del curso de Calculo: " << notaCurso1 << endl;
    cout << "Nota final del curso de Programacion 1: " << notaCurso2 << endl;
}

int main()
{
    persona maestro;
    maestro.menu();
    return 0;
}
