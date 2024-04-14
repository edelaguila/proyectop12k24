#include <iostream>
#include<fstream>

#include "Maestro.h"
#include "Estudiante.h"
#include "Curso.h"
#include "Sedes.h"


using namespace std;

void creditosModulo();
void catalogos();
void reportes();
void menuGeneral();
//usuarios usuarioRegistrado;

int main()//inicio del main
{
    bool accesoUsuarios;//varibale booleana para guardar resultados de las funciones de usuarioRegistrado
    menuGeneral();//primer menu ingreso de sistema
    return 0;
}

void menuGeneral(){
    system("cls");//limpia pantalla
    int choice;//opcion en uso switch
	//char x;
	do//inico del ciclo do while, hacer:
    {
	system("cls");//limpia pantalla
	//cout<<"\t\t\t\t\tUsuario: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|         SISTEMA UMG          |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Procesos"<<endl;
	cout<<"\t\t\t 3. Reportes"<<endl;
	cout<<"\t\t\t 4. Ayuda"<<endl;
	cout<<"\t\t\t 5. Salir del Sistema"<<endl;
    cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	/*do
    	{*/
    		catalogos();
    		/*cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
		//display();
		break;
	case 3:
		//modify();
		//reportes();
		break;
	case 4:
		//search();
		break;
	case 5:
    	break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);
}

void catalogos(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION  - Catalogos  |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Maestros"<<endl;
	cout<<"\t\t\t 2. Estudiantes"<<endl;
	cout<<"\t\t\t 3. Cursos"<<endl;
	cout<<"\t\t\t 4. Sedes"<<endl;
	cout<<"\t\t\t 5. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            Maestro maestro;
            maestro.menu();
        }
            /*do
    	{
    		catalogos();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');*/
		break;
	case 2:
	    {
            //Estudiante estudiante;
            //estudiante.menu()
	    }


		//display();
		//{
            //vendedores vendedor;
            //vendedor.menu();
		//}
		break;
	case 3:
	    {
	        //
	    }
		//modify();
		break;
	case 4:
        //{
           // aplicaciones aplicacion;
            //aplicacion.menu();
		//}
		//search();
		break;
	case 5:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 5);
}

