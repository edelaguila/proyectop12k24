#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

class persona
{
	private:
		string id, nombre, telefono, DPI, direccion;
	public:
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
};
void persona::menu()
{
    int opcion;
	char continuar;
	do
    {
		system("cls");

		cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|  BIENVENIDO AL SISTEMA DE GESTION DE ALUMNOS  |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|            1. Agregar Estudiante              |"<<endl;
		cout<<"|            2. Mostrar Estudiante              |"<<endl;
		cout<<"|            3. Modificar Estudiante            |"<<endl;
		cout<<"|            4. Buscar Estudiante               |"<<endl;
		cout<<"|            5. Borrar Estudiante               |"<<endl;
		cout<<"|            6. Salir del programa              |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
		cout<<"|         Ingrese su opcion [1/2/3/4/5/6]       |"<<endl;
		cout<<"+-----------------------------------------------+"<<endl;
		cin>>opcion;

		switch(opcion)
		{
			case 1:
				do
				{
					insertar();
					cout<<" -> ¿Deseas ingresar a otro estudiante? (S/N): ";
					cin>>continuar;
				}while(continuar=='S' || continuar=='s');
				break;
			case 2:
				desplegar();
				break;
			case 3:
				modificar();
				break;
			case 4:
				buscar();
				break;
			case 5:
				borrar();
				break;
			case 6:
				exit(0);
			default:
				cout<<"ERROR, OPCION NO VALIDA, INTENTELO DE NUEVO PORFAVOR";
		}
		getch();
    }while(opcion != 6);
}
void persona::insertar()
{
	system("cls");
	fstream archivo;
	cout<<"+---------------------------------------------------------+"<< endl;
	cout<<"|                Agregar detalles del Estudiante          |"<< endl;
	cout<<"+---------------------------------------------------------+"<< endl;
	srand(getpid());
    int year = 24; // Suponiendo que queremos el año 2024
    int numAleatorio = rand() % 10000; // Genera un número aleatorio de 4 dígitos

    string id = "9959-" + to_string(year) + "-" + to_string(numAleatorio);
    cout<<"       -> Generando carnet del estudiante: " << id << endl;

	cout<<"       -> Ingrese el nombre del estudiante:  ";
	cin>> nombre;

	cout<<"       -> Ingrese el telefono del estudiante: ";
	cin>> telefono;

	cout<<"       -> Ingrese el DPI del estudiante: ";
	cin>>DPI;

	cout<<"       -> Ingrese la direccion del estudiante: ";
	cin>>direccion;

    cout<<"+---------------------------------------------------------+"<< endl;

	archivo.open("RegistroPersonas.txt", ios::app | ios::out);
	archivo<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<DPI<<left<<setw(15)<<direccion<<"\n";
	archivo.close();
}
void persona::desplegar()
{
	system("cls");
	fstream archivo;
	int total=0;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
	cout<<"+                            Tabla de Detalles del Estudiante                     +"<<endl;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"Error, no se encuentra informacion...";
		archivo.close();
	}
	else
	{
		archivo >> id >> nombre >> telefono >> DPI >> direccion;
		while(!archivo.eof())
		{
			total++;
    cout<<"                        Mostrando -> ID del estudiante: "<<id <<endl;
    cout<<"                        Mostrando -> Nombre del estudiante: "  << nombre << endl;
    cout<<"                        Mostrando -> Telefono: " << telefono <<endl;
    cout<<"                        Mostrando -> DPI : " << DPI <<endl;
    cout<<"                        Mostrando -> Direccion: " << direccion <<endl;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;

			archivo >> id >> nombre >> telefono >> DPI >> direccion;
		}
		if(total==0)
		{
			cout<<"Error, no se encuentra informacion...";
		}
	}
	archivo.close();
}
void persona::modificar()
{
	system("cls");
	fstream archivo, archivoTemporal;
	string idPersona;
	int encontrado=0;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
	cout<<"+                       Modificar Detalles del estudiante                         +"<<endl;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;

	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"Error, no se encuentra informacion...";
		archivo.close();
	}
	else
	{
		cout<<"-> Ingrese el ID de la persona que desea modificar: ";
		cin>>idPersona;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
		archivoTemporal.open("Temporal.txt",ios::app | ios::out);
		archivo >> id >> nombre >> telefono >> DPI >> direccion;
		while(!archivo.eof())
		{
			if(idPersona != id)
			{
				archivoTemporal<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<DPI<<left<<setw(15)<<direccion<<"\n";
			}
			else
			{
				cout<<" -> Ingrese el nuevo ID del estudiante: ";
				cin>>id;
				cout<<" -> Ingrese el nuevo nombre del estudiante: ";
				cin>>nombre;
				cout<<" -> Ingrese el nuevo telefono del estudiante: ";
				cin>>telefono;
				cout<<" -> Ingrese el nuevo DPI del estudiante: ";
				cin>>DPI;
				cout<<" -> Ingrese la nueva direccion del estudiante: ";
				cin>>direccion;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;

				archivoTemporal<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<DPI<<left<<setw(15)<<direccion<<"\n";
				encontrado++;
			}
			archivo >> id >> nombre >> telefono >> DPI >> direccion;

		}
		archivoTemporal.close();
		archivo.close();
		remove("RegistroEstudiante.txt");
		rename("Temporal.txt","RegistroEstudiante.txt");
	}
}
void persona::buscar()
{
	system("cls");
	fstream archivo;
	int encontrado=0;
	archivo.open("RegistroEstudiante.txt",ios::in);
	if(!archivo)
	{
        cout<<"+-----------------------------------------------------------------------------+"<<endl;
		cout<<"+                        Detalles del estudiante Buscado                      +"<<endl;
        cout<<"+-----------------------------------------------------------------------------+"<<endl;

		cout<<"No hay información...";
	}
	else
	{
		string idPersona;
        cout<<"+-----------------------------------------------------------------------------+"<<endl;
		cout<<"+                        Detalles del estudiante Buscada                      +"<<endl;
        cout<<"+-----------------------------------------------------------------------------+"<<endl;

		cout<<"                Ingrese el ID del estudiante que desea buscar: ";
		cin>>idPersona;
        cout<<"+-----------------------------------------------------------------------------+"<<endl;
		archivo >> id >> nombre >> telefono >> DPI >> direccion;
		while(!archivo.eof())
		{
			if(idPersona==id)
			{
        cout<<"                     Mostrando -> ID estudiantes: "<<id<<endl;
        cout<<"                     Mostrando -> Nombre estudiante: "<<nombre<<endl;
        cout<<"                     Mostrando -> Telefono estudiante: "<<telefono<<endl;
        cout<<"                     Mostrando -> DPI estudiante: "<<DPI<<endl;
        cout<<"                     Mostrando -> Direccion estudiante: "<<direccion<<endl;
        cout<<"+-----------------------------------------------------------------------------+"<<endl;

				encontrado++;
			}
			archivo >> id >> nombre >> telefono >> DPI >> direccion;
		}
		if(encontrado==0)
		{
			cout<<"ERROR, ESTUDIANTE NO ENCONTRADO...";
		}
		archivo.close();
	}
}
void persona::borrar()
{
	system("cls");
	fstream archivo, archivoTemporal;
	string idPersona;
	int encontrado=0;
    cout<<"+--------------------------------------------------------------------------------+"<<endl;
	cout<<"+                    Detalles de el o la estudiante a Borrar                     +"<<endl;
    cout<<"+--------------------------------------------------------------------------------+"<<endl;

	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"ERROR, NO SE ENCUENTRA INFORMACION...";
		archivo.close();
	}
	else
	{
		cout<<"              Ingrese el ID del estudiante que desea borrar: ";
		cin>>idPersona;
    cout<<"+--------------------------------------------------------------------------------+"<<endl;

		archivoTemporal.open("Temporal.txt",ios::app | ios::out);
		archivo >> id >> nombre >> telefono >> DPI >> direccion;
		while(!archivo.eof())
		{
			if(idPersona != id)
			{
				archivoTemporal<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<DPI<<left<<setw(15)<<direccion<<"\n";
			}
			else
			{
				encontrado++;
    cout << "             La informacion de la persona ha sido borrada con exito" <<endl;
    cout<<"+--------------------------------------------------------------------------------+"<<endl;

			}
			archivo >> id >> nombre >> telefono >> DPI >> direccion;
		}
		if(encontrado==0)
		{
			cout<<" ID de estudiante no encontrado...";
		}
		archivoTemporal.close();
		archivo.close();
		remove("RegistroEstudiante.txt");
		rename("Temporal.txt","RegistroEstudiante.txt");
	}
}
