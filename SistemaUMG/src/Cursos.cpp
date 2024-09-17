#include "Cursos.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

void Curso::menuCurso()  //Creación del constructor menuCurso
{
    int opcion;
	char x;
    bool menuActivo = true;

	do
    {
	system("cls"); //Limpia pantalla

    //Menú para el modificación e ingreso de Jugadores
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |   Menu para crear un Curso  |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Curso"<<endl;
	cout<<"\t\t\t 2. Despliegue Curso"<<endl;
	cout<<"\t\t\t 3. Modifica Curso"<<endl;
	cout<<"\t\t\t 4. Buscar Curso"<<endl;
	cout<<"\t\t\t 5. Borrar Cursos"<<endl;
	cout<<"\t\t\t 6. Salir del Menu"<<endl;

	cout<<"\t\t\t---------------------------------------"<<endl;

	cout<<"Ingresa una Opcion: ";
    cin>>opcion;

    //Elegir una opcion del Menu
    switch(opcion)
    {
    case 1:
        agregarCurso();
		break;
	case 2:
		mostarCurso();
		break;
	case 3:
		modificarCurso();
		break;
	case 4:
		buscarCurso();
		break;
	case 5:
		borrarCurso();
		break;
	case 6:
	    cout << "Fin del Programa.\n";
        menuActivo = false;
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		}
	getch();
    }while(opcion!= 6);

}




 void Curso::agregarCurso()      //Constructor de la clase Jugador, agregarCurso
{
	system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n----------------------------------------Agregar Curso -----------------------------------------"<<endl;
	//Ingreso de datos
	cout<<"\t\t\tIngresa ID del Curso     : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Curso : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa horario curso           : ";
	cin>>horario;
	cout<<"\t\t\tIngresa la Contraseña      : ";
	cin>>contrasena;

	//Abre archivo y luego lo ve al final de la salida
	file.open("Curso.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< horario <<std::left<<std::setw(15)<< contrasena << "\n";
	file.close();   //Cierra el archivo
}

 void Curso::mostarCurso()        //Creación del constructor de la clase Jugador, mostarCursoes
{
	system("cls");  //limpia pantalla
	fstream file;   //crea
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Curso -------------------------"<<endl;
	file.open("Curso.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> horario >> contrasena;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Curso: "<<id<<endl;
			cout<<"\t\t\t Nombre del Curso: "<<nombre<<endl;
			cout<<"\t\t\t horario del Curso: "<<horario<<endl;
			cout<<"\t\t\t Contraseña del Curso: "<<contrasena<<endl;
			file >> id >> nombre >> horario >> contrasena;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay Curso...";
		}
	}
	file.close();
}

 void Curso::modificarCurso()  //Creacion de la clase Jugador, modificarCursoes
{
	system("cls");
	fstream file,file1;
	string jugador_id;
	int found=0;
	cout<<"\n------------------------- \"Modificacion Detalles Curso\" -------------------------"<<endl;
	file.open("Curso.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese ID del Curso que quiere modificar: ";
		cin>>jugador_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> horario >> contrasena;
		while(!file.eof())
		{
			if(jugador_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< horario <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Curso: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Curso: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese horario del Curso: ";
				cin>>horario;
				cout<<"\t\t\tIngrese la contraseña del Curso: ";
				cin>>contrasena;
                file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< horario <<std::left<<std::setw(15)<< contrasena << "\n";
				found++;
			}
			file >> id >> nombre >> horario >> contrasena;

		}
		file1.close();
		file.close();
		remove("Curso.txt");
		rename("Record.txt","Curso.txt");
	}
}

 void Curso::buscarCurso()       //Creacion de la clase Jugador, buscarCursoes
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Curso.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Curso buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string jugador_id;
		cout<<"\n-------------------------Datos del Curso buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Curso que quiere buscar: ";
		cin>>jugador_id;
		file >> id >> nombre >> horario >> contrasena;
		while(!file.eof())
		{
			if(jugador_id==id)
			{
				cout<<"\n\n\t\t\t ID Curso: "<<id<<endl;
				cout<<"\t\t\t Nombre Curso: "<<nombre<<endl;
				cout<<"\t\t\t horario Curso: "<<horario<<endl;
				cout<<"\t\t\t Contraseña Curso: "<<contrasena<<endl;
				found++;
			}
			file >> id >> nombre >> horario >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Curso no encontrado...";
		}
		file.close();
	}
}

 void Curso::borrarCurso()       //Creacion constructor de la clase Jugador, borrarCurso
{
	system("cls");
	fstream file,file1;
	string jugador_id;
	int found=0;
	cout<<"\n-------------------------Detalles del Curso a Borrar-------------------------"<<endl;
	file.open("Curso.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Curso que quiere borrar: ";
		cin>>jugador_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> horario >> contrasena;
		while(!file.eof())
		{
			if(jugador_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< horario <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado del Curso exitoso";
			}
			file >> id >> nombre >> horario >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Curso no encontrado...";
		}
		file1.close();
		file.close();
		remove("Curso.txt");
		rename("Record.txt","Curso.txt");
	}
}


bool Curso::buscarloginCurso(string user, string passw)
{
    system ("cls");
    fstream file;
    int found=0;
    file.open("Curso.txt", ios::in);
    if (!file)
    {
        cout<<"\n---------------------------Datos del Curso buscado----------------------"<<endl;
        cout<<"\n\t\t\tNo hay informacion...";
    }
    else
    {
        file >> id >> nombre >> horario >> contrasena;
        while(!file.eof())
        {
            if(user==nombre)
            {
                if (passw == contrasena)
                {
                    found++;
                }
            }
            file >> id >> nombre >> horario >> contrasena;
        }
        if(found==0)
        {
            return false;
        }
        else
            return true;

        file.close();}
}
