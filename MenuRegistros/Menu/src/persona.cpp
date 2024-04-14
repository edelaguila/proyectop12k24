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
<<<<<<< HEAD
		string id, nombre, telefono, DPI, direccion;
=======
		string id, nombre, telefono, universidad, direccion;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
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

<<<<<<< HEAD
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
=======
		cout<<"\t\t\t+------------------------------------------------+"<<endl;
		cout<<"\t\t\t|   BIENVENIDO AL SISTEMA DE GESTION DE ALUMNOS  |"<<endl;
		cout<<"\t\t\t+------------------------------------------------+"<<endl;
		cout<<"\t\t\t|1. Agregar Estudiante               |"<<endl;
		cout<<"\t\t\t|2. Mostrar Estudiante               |"<<endl;
		cout<<"\t\t\t|3. Modificar Estudiante             |"<<endl;
		cout<<"\t\t\t|4. Buscar Estudiante                |"<<endl;
		cout<<"\t\t\t|5. Borrar Estudiante                |"<<endl;
		cout<<"\t\t\t|6. Salir del programa               |"<<endl;

		cout<<"\t\t\t+------------------------------------+"<<endl;
		cout<<"\t\t\tIngrese su opcion [1/2/3/4/5/6]:     |"<<endl;
		cout<<"\t\t\t+------------------------------------+"<<endl;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		cin>>opcion;

		switch(opcion)
		{
			case 1:
				do
				{
					insertar();
<<<<<<< HEAD
					cout<<" -> ¿Deseas ingresar a otro estudiante? (S/N): ";
=======
					cout<<"\n\t\t\t ->¿Deseas ingresar a otro estudiante? (S/N): ";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
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
<<<<<<< HEAD
				cout<<"ERROR, OPCION NO VALIDA, INTENTELO DE NUEVO PORFAVOR";
=======
				cout<<"\n\t\t\t Opción no válida. Por favor, inténtelo de nuevo.";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		}
		getch();
    }while(opcion != 6);
}
void persona::insertar()
{
	system("cls");
	fstream archivo;
<<<<<<< HEAD
	cout<<"+---------------------------------------------------------+"<< endl;
	cout<<"|                Agregar detalles del Estudiante          |"<< endl;
	cout<<"+---------------------------------------------------------+"<< endl;
=======
	cout<<"\n+----------------------------------------------------------------------------------------------------------------------+";
	cout<<"\n|------------------------------------------------Agregar detalles del Estudiante --------------------------------------|";
	cout<<"\n+----------------------------------------------------------------------------------------------------------------------+"<<endl;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
	srand(getpid());
    int year = 24; // Suponiendo que queremos el año 2024
    int numAleatorio = rand() % 10000; // Genera un número aleatorio de 4 dígitos

    string id = "9959-" + to_string(year) + "-" + to_string(numAleatorio);
<<<<<<< HEAD
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
=======
    cout << "\t\t\tGenerando carnet: " << id << endl;

	cout<<"\t\t\t->Ingrese el nombre del estudiante: ";
	cin>>nombre;
	cout<<"\t\t\t->Ingrese el telefono del estudiante: ";
	cin>>telefono;
	cout<<"\t\t\t->Ingrese la universidad del estudiante: ";
	cin>>universidad;
	cout<<"\t\t\t->Ingrese la direccion del estudiante: ";
	cin>>direccion;
	archivo.open("RegistroPersonas.txt", ios::app | ios::out);
	archivo<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<universidad<<left<<setw(15)<<direccion<<"\n";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
	archivo.close();
}
void persona::desplegar()
{
	system("cls");
	fstream archivo;
	int total=0;
<<<<<<< HEAD
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
	cout<<"+                            Tabla de Detalles del Estudiante                     +"<<endl;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"Error, no se encuentra informacion...";
=======
    cout<<"\n+---------------------------------------------------------------------------------+";
	cout<<"\n+------------------------Tabla de Detalles del Estudiante ------------------------+";
    cout<<"\n+---------------------------------------------------------------------------------+"<<endl;
	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"\n\t\t\tNo hay informacion...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		archivo.close();
	}
	else
	{
<<<<<<< HEAD
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
=======
		archivo >> id >> nombre >> telefono >> universidad >> direccion;
		while(!archivo.eof())
		{
			total++;
			cout<<"\n\n\t\t\t ID Persona: "<<id<<endl;
			cout<<"\t\t\t >Nombre Persona: "<<nombre<<endl;
			cout<<"\t\t\t >Telefono Persona: "<<telefono<<endl;
			cout<<"\t\t\t >Universidad Persona: "<<universidad<<endl;
			cout<<"\t\t\t >Dirección Persona: "<<direccion<<endl;
			archivo >> id >> nombre >> telefono >> universidad >> direccion;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay información...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
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
<<<<<<< HEAD
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
	cout<<"+                       Modificar Detalles del estudiante                         +"<<endl;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;

	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"Error, no se encuentra informacion...";
=======
	cout<<"\n+------------------------Modificar Detalles de Persona------------------------+"<<endl;
	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		archivo.close();
	}
	else
	{
<<<<<<< HEAD
		cout<<"-> Ingrese el ID de la persona que desea modificar: ";
		cin>>idPersona;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
		archivoTemporal.open("Temporal.txt",ios::app | ios::out);
		archivo >> id >> nombre >> telefono >> DPI >> direccion;
=======
		cout<<"\nIngrese el ID de la persona que desea modificar: ";
		cin>>idPersona;
		archivoTemporal.open("Temporal.txt",ios::app | ios::out);
		archivo >> id >> nombre >> telefono >> universidad >> direccion;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		while(!archivo.eof())
		{
			if(idPersona != id)
			{
<<<<<<< HEAD
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
=======
				archivoTemporal<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<universidad<<left<<setw(15)<<direccion<<"\n";
			}
			else
			{
				cout<<"\t\t\tIngrese el nuevo ID del estudiante: ";
				cin>>id;
				cout<<"\t\t\tIngrese el nuevo nombre del estudiante: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese el nuevo teléfono del estudiante: ";
				cin>>telefono;
				cout<<"\t\t\tIngrese la nueva universidad del estudiante: ";
				cin>>universidad;
				cout<<"\t\t\tIngrese la nueva dirección del estudiante: ";
				cin>>direccion;
				archivoTemporal<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<universidad<<left<<setw(15)<<direccion<<"\n";
				encontrado++;
			}
			archivo >> id >> nombre >> telefono >> universidad >> direccion;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0

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
<<<<<<< HEAD
        cout<<"+-----------------------------------------------------------------------------+"<<endl;
		cout<<"+                        Detalles del estudiante Buscado                      +"<<endl;
        cout<<"+-----------------------------------------------------------------------------+"<<endl;

		cout<<"No hay información...";
=======
		cout<<"\n+------------------------Detalles del estudiante Buscado----------------------+"<<endl;
		cout<<"\n\t\t\tNo hay información...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
	}
	else
	{
		string idPersona;
<<<<<<< HEAD
        cout<<"+-----------------------------------------------------------------------------+"<<endl;
		cout<<"+                        Detalles del estudiante Buscada                      +"<<endl;
        cout<<"+-----------------------------------------------------------------------------+"<<endl;

		cout<<"                Ingrese el ID del estudiante que desea buscar: ";
		cin>>idPersona;
        cout<<"+-----------------------------------------------------------------------------+"<<endl;
		archivo >> id >> nombre >> telefono >> DPI >> direccion;
=======
		cout<<"\n+------------------------Detalles del estudiante Buscada-----------------------+"<<endl;
		cout<<"\nIngrese el ID de la persona que desea buscar: ";
		cin>>idPersona;
		archivo >> id >> nombre >> telefono >> universidad >> direccion;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		while(!archivo.eof())
		{
			if(idPersona==id)
			{
<<<<<<< HEAD
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
=======
				cout<<"\n\n\t\t\t ID estudiantes: "<<id<<endl;
				cout<<"\t\t\t Nombre estudiante: "<<nombre<<endl;
				cout<<"\t\t\t Teléfono estudiante: "<<telefono<<endl;
				cout<<"\t\t\t Universidad estudiante: "<<universidad<<endl;
				cout<<"\t\t\t Dirección estudiante: "<<direccion<<endl;
				encontrado++;
			}
			archivo >> id >> nombre >> telefono >> universidad >> direccion;
		}
		if(encontrado==0)
		{
			cout<<"\n\t\t\t Estudiante no encontrado...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
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
<<<<<<< HEAD
    cout<<"+--------------------------------------------------------------------------------+"<<endl;
	cout<<"+                    Detalles de el o la estudiante a Borrar                     +"<<endl;
    cout<<"+--------------------------------------------------------------------------------+"<<endl;

	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"ERROR, NO SE ENCUENTRA INFORMACION...";
=======
	cout<<"\n+------------------------Detalles de el o la estudiante a Borrar------------------------+"<<endl;
	archivo.open("RegistroPersonas.txt",ios::in);
	if(!archivo)
	{
		cout<<"\n\t\t\tNo hay existe información...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		archivo.close();
	}
	else
	{
<<<<<<< HEAD
		cout<<"              Ingrese el ID del estudiante que desea borrar: ";
		cin>>idPersona;
    cout<<"+--------------------------------------------------------------------------------+"<<endl;

		archivoTemporal.open("Temporal.txt",ios::app | ios::out);
		archivo >> id >> nombre >> telefono >> DPI >> direccion;
=======
		cout<<"\nIngrese el ID del estudiante que desea borrar: ";
		cin>>idPersona;
		archivoTemporal.open("Temporal.txt",ios::app | ios::out);
		archivo >> id >> nombre >> telefono >> universidad >> direccion;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		while(!archivo.eof())
		{
			if(idPersona != id)
			{
<<<<<<< HEAD
				archivoTemporal<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<DPI<<left<<setw(15)<<direccion<<"\n";
=======
				archivoTemporal<<left<<setw(15)<<id<<left<<setw(15)<<nombre<<left<<setw(15)<<telefono<<left<<setw(15)<<universidad<<left<<setw(15)<<direccion<<"\n";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
			}
			else
			{
				encontrado++;
<<<<<<< HEAD
    cout << "             La informacion de la persona ha sido borrada con exito" <<endl;
    cout<<"+--------------------------------------------------------------------------------+"<<endl;

			}
			archivo >> id >> nombre >> telefono >> DPI >> direccion;
		}
		if(encontrado==0)
		{
			cout<<" ID de estudiante no encontrado...";
=======
				cout << "\n\t\t\t¡La información de la persona ha sido borrada con éxito!";
			}
			archivo >> id >> nombre >> telefono >> universidad >> direccion;
		}
		if(encontrado==0)
		{
			cout<<"\n\t\t\t ID de estudiante no encontrado...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		}
		archivoTemporal.close();
		archivo.close();
		remove("RegistroEstudiante.txt");
		rename("Temporal.txt","RegistroEstudiante.txt");
	}
}
