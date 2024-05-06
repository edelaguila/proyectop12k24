#include "Notas.h"

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

//#include "maestro.h"//oh maestros o Maestros segun sea el caso
using namespace std;

//maestro maestroRegistrado;



void Notas::menuNotas()  //Creación de constructor menuNotas
{

//bool accesoUsuarios;//varibale booleana para guardar resultados de las funciones de MaestroRegistrado

//accesoUsuarios=maestroResgistrado.loginUsuario();
//if (accesoUsuario)
//{
//     cout<<"Has ingresado correctamente a tu usuario"<<endl;
// //       menuGeneral();
//
//
        int opcion;
        char x;
        bool menuActivo = true;

        do
        {
        system("cls"); //Limpia pantalla

        //Menú para el modificación e ingreso Notas
        cout<<"\t\t\t---------------------------------"<<endl;
        cout<<"\t\t\t |      Menu para Notas            |"<<endl;
        cout<<"\t\t\t---------------------------------"<<endl;
        cout<<"\t\t\t 1. Ingreso Notas "<<endl;
        cout<<"\t\t\t 2. Despliegue notas"<<endl;//menu que puede servir para las actas


        cout<<"\t\t\t 3. Modifica Notas (NO FUNCIONA DEL TODO, DE MOMENTO NO USAR) "<<endl;
        cout<<"\t\t\t 4. Buscar Notas"<<endl;
        cout<<"\t\t\t 5. Borrar Notass"<<endl;
        cout<<"\t\t\t 6. Salir de Menu"<<endl;

        cout<<"\t\t\t---------------------------------------"<<endl;

        cout<<"Ingresa una Opcion: ";
        cin>>opcion;

        //Elegir una opcion de Menu
        switch(opcion)
        {
        case 1:
            agregarNotas();
            break;
        case 2:
            mostrarNotas();
            break;
        case 3:
            modificarNotas();
            break;
        case 4:
            buscarNota();
            break;
        case 5:
            borrarNota();
            break;
        case 6:
            cout << "Fin de Programa.\n";
            menuActivo = false;
            break;
        default:
            cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
            }
        getch();
        }while(opcion!= 6);
}
//}




 void Notas::agregarNotas()      //Constructor de la clase   agregarNotas
{

	system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n----------------------------------------Agregar Notas -----------------------------------------"<<endl;
	//Ingreso de datos
	cout<<"\t\t\tIngresa ID de Notas       : ";
	cin>>id;

	cout<<"\t\t\tIngresa Nombre de Estudiante   : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Nota parcial 1    : ";
	cin>>notaP1;

    cout<<"\t\t\tIngresa Nota parcial 2    : ";
	cin>>notaP2;
    cout<<"\t\t\tIngresa Nota Actividad    : ";
	cin>>actividad;
    cout<<"\t\t\tIngresa Nota Parcial Final: ";
	cin>>notaFinal;







//esta area no deberia ir aqui
	cout<<"\t\t\tIngresa PIN      : ";
	cin>>PIN;

	//Abre archivo y luego lo ve al final de la salida
	file.open("Notas.txt", ios::app | ios::out);
	file<< left<< setw(15)<< id << left<< setw(15)<< nombre << left<< setw(15)
	<< notaP1 << left<< setw(15)<<notaP2<< left<< setw(15)<< left<< setw(15)<<actividad
	<< left<< setw(15)<< notaFinal<< PIN << "\n";
	file.close();   //Cierra el archivo
}

 void Notas::mostrarNotas()        //Creación de constructor de la clase  mostrarNotases
{
    int sumatoria=0;
	system("cls");  //limpia pantalla
	fstream file;   //crea
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Notas -------------------------"<<endl;
	file.open("Notas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> notaP1 >> notaP2>>actividad >>notaFinal>>PIN;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id de Notas: "<<id<<endl;
			cout<<"\t\t\t Nombre de Curso: "<<nombre<<endl;
			cout<<"\t\t\t notaP1 de Notas: "<<notaP1<<endl;
			cout<<"\t\t\t notaP2 de Notas: "<<notaP2<<endl;
			cout<<"\t\t\t Actividad de Notas: "<<actividad<<endl;
			cout<<"\t\t\t Nota de Parcial Final: "<<notaFinal<<endl;

			sumatoria=notaP1+notaP2+actividad+notaFinal;

            cout<<"El total de su nota es: "<<sumatoria<<endl;



		//	cout<<"\t\t\t PIN de Notas: "<<PIN<<endl;
			file >> id >> nombre >> notaP1 >> notaP2 >> actividad >> notaFinal>> PIN;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay Notas...";
		}
	}
	file.close();
}

 void Notas::modificarNotas()  //Creacion de la clase  modificarNotases
{
	system("cls");
	fstream file,file1;
    string jugador_id;
	int found=0;
	cout<<"\n------------------------- \"Modificacion Detalles Notas\" -------------------------"<<endl;
	file.open("Notas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese ID de Notas que quiere modificar: ";
		cin>>jugador_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> notaP1 >>notaP2>> actividad>>notaFinal>>PIN;
		while(!file.eof())
		{
			if(jugador_id!=id)
			{
			 file1<< left<< setw(15)<< id << left<< setw(15)<< nombre << left<< setw(15)<< notaP1<<  left<< setw(15)<<notaP2<<left<< setw(15)<< actividad<< left<< setw(15)<< notaFinal<< left<< setw(15)<< PIN << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id de Notas: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre de Notas: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese notaP1 de Notas: ";
				cin>>notaP1;

				cout<<"\t\t\tIngrese notaP2 de Notas: ";
				cin>>notaP2;
                cout<<"\t\t\tIngrese Actividad de Notas: ";
				cin>>actividad;
				cout<<"\t\t\tIngrese Notas Parcial Final: ";
				cin>>notaFinal;

				cout<<"\t\t\tIngrese la PIN de Notas: ";
				cin>>PIN;
                file1<< left<< setw(15)<< id << left<< setw(15)<< nombre << left<< setw(15)<< notaP1<<  left<< setw(15)<<notaP2 <<left<< setw(15)<<actividad<< left<< setw(15)<< left<< setw(15)<< notaFinal<< PIN << "\n";
				found++;
			}
			file >> id >> nombre >> notaP1 >>notaP2 >>actividad>>notaFinal>>PIN;
break;
		}
		file1.close();
		file.close();
		remove("Notas.txt");
		rename("Record.txt","Notas.txt");

	}
}

 void Notas::buscarNota()       //Creacion de la clase  buscarNotaes
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Notas.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de Notas buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string jugador_id;
		cout<<"\n-------------------------Datos de Notas buscado------------------------"<<endl;
		cout<<"\nIngrese Id de Notas que quiere buscar: ";
		cin>>jugador_id;
		file >> id >> nombre >> notaP1 >>notaP2 >>actividad>>notaFinal>>PIN;
		while(!file.eof())
		{
			if(jugador_id==id)
			{
				cout<<"\n\n\t\t\t ID Notas: "<<id<<endl;
				cout<<"\t\t\t Nombre Notas: "<<nombre<<endl;
				cout<<"\t\t\t notaP1 Notas: "<<notaP1<<endl;
				cout<<"\t\t\t notaP2 Notas: "<<notaP2<<endl;
				cout<<"\t\t\t Actividad Notas: "<<actividad<<endl;
				cout<<"\t\t\tNotas parcial Final  : "<<notaFinal<<endl;



				cout<<"\t\t\t PIN Notas: "<<PIN<<endl;
				found++;
			}
			file >> id >> nombre >> notaP1 >> notaP2>>actividad>>notaFinal>>PIN;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Notas no encontrado...";
		}
		file.close();
	}
}

 void Notas::borrarNota()       //Creacion constructor de la clase borrarNota
{
	system("cls");
	fstream file,file1;
	string jugador_id;
	int found=0;
	cout<<"\n-------------------------Detalles de Notas a Borrar-------------------------"<<endl;
	file.open("Notas.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id de Notas que quiere borrar: ";
		cin>>jugador_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> notaP1 >>notaP2>> actividad>>notaFinal>>PIN;
		while(!file.eof())
		{
			if(jugador_id!= id)
			{
				file1<< left<< setw(15)<< id << left<< setw(15)<< nombre << left<< setw(15)<< notaP1 << left<< setw(15)<<notaP2 << left<<  setw(15)<< actividad<< setw(15)<< left<< setw(15)<< notaFinal<< PIN << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de Notas exitoso";
			}
			file >> id >> nombre >> notaP1 >>notaP2 >>notaFinal>>actividad >>PIN;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id de Notas no encontrado...";
		}
		file1.close();
		file.close();
		remove("Notas.txt");
		rename("Record.txt","Notas.txt");

		//en esta seccion falta hacer lo de la bitacora
		//ya que si se realiza se hace un bucle en la creacion de notas

	}
}
