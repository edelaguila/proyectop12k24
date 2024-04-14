#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

class maestros
{
	private:
		string id,name,phone,college,address;
	public:
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
};
void maestros::menu()
{
    int choice;
	char x;
	do
    {
	system("cls");

<<<<<<< HEAD
        //cout<<"+-----------------------------------------------+"<<endl;
		//cout<<"|  BIENVENIDO AL SISTEMA DE GESTION DE ALUMNOS  |"<<endl;
		//cout<<"+-----------------------------------------------+"<<endl;
		//cout<<"|            1. Agregar Estudiante              |"<<endl;
		//cout<<"|            2. Mostrar Estudiante              |"<<endl;
		//cout<<"|            3. Modificar Estudiante            |"<<endl;
		//cout<<"|            4. Buscar Estudiante               |"<<endl;
		//cout<<"|            5. Borrar Estudiante               |"<<endl;
		//cout<<"|            6. Salir del programa              |"<<endl;
		//cout<<"+-----------------------------------------------+"<<endl;
		//cout<<"|         Ingrese su opcion [1/2/3/4/5/6]       |"<<endl;
		//cout<<"+-----------------------------------------------+"<<endl;
		//cin>>opcion;

	cout<<"+------------------------------------------------+"<<endl;
    cout<<"|  BIENVENIDO AL SISTEMA DE GESTION DE MAESTROS  |"<<endl;
	cout<<"+------------------------------------------------+"<<endl;
	cout<<"|              1. Agregar Maestro                |"<<endl;
	cout<<"|              2. Mostrar Maestro                |"<<endl;
	cout<<"|              3. Modificar Maestro              |"<<endl;
	cout<<"|              4. Buscar Maestro                 |"<<endl;
    cout<<"|              5. Borrar Maestro                 |"<<endl;
    cout<<"|              6. Salir del programa             |"<<endl;
    cout<<"+------------------------------------------------+"<<endl;
    cout<<"|         Ingrese su opcion [1/2/3/4/5/6]        |"<<endl;
    cout<<"+------------------------------------------------+"<<endl;
    cin>>choice;


=======
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION MAESTROS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Personas"<<endl;
	cout<<"\t\t\t 2. Despliegue Personas"<<endl;
	cout<<"\t\t\t 3. Modifica Personas"<<endl;
	cout<<"\t\t\t 4. Busca Personas"<<endl;
	cout<<"\t\t\t 5. Borra Personas"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
    switch(choice)
    {
    case 1:
    	do
    	{
    		insertar();
<<<<<<< HEAD
    		cout<<" Agrega otra persona(Y,N): ";
=======
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
    		cin>>x;
		}while(x=='y'||x=='Y');
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
		cout<<" ERROR, OPCION INVALIDA, INGRESAR NUEVAMENTE LOS DATOS";
=======
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
	}
	getch();
    }while(choice!= 6);
}
void maestros::insertar()
{
	system("cls");
	fstream file;
<<<<<<< HEAD
	cout<<"+---------------------------------------------------------+"<< endl;
	cout<<"|                Agregar detalles del Maestro             |"<< endl;
	cout<<"+---------------------------------------------------------+"<< endl;
=======
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar detalles Persona ---------------------------------------------"<<endl;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0

	srand(getpid());
    int year = 24; // Suponiendo que queremos el año 2024
    int numAleatorio = rand() % 10000; // Genera un número aleatorio de 4 dígitos

	string id = "9959-" + to_string(year) + "-" + to_string(numAleatorio);
<<<<<<< HEAD
    cout<<"       -> Generando carnet del maestro: " << id << endl;

	cout<<"       -> Ingrese el nombre del maestro:  ";
	cin>>name;

	cout<<"       -> Ingrese el telefono del maestro: ";
	cin>>phone;

	cout<<"       -> Ingrese la universidad del maestro: ";
	cin>>college;

    cout<<"       -> Ingrese la direccion del maestro: ";
	cin>>address;
    cout<<"+---------------------------------------------------------+"<< endl;

=======
    cout << "\t\t\tgenerarCarnet: " << id << endl;

	cout<<"\t\t\tIngresa Nombre Persona     : ";
	cin>>name;
	cout<<"\t\t\tIngresa Telefono Persona   : ";
	cin>>phone;
	cout<<"\t\t\tIngresa Universidad Persona: ";
	cin>>college;
	cout<<"\t\t\tIngresa Direccion Persona  : ";
	cin>>address;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
	file.open("ParticipantRecord2.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< college <<std::left<<std::setw(15)<< address << "\n";
	file.close();
}
void maestros::desplegar()
{
	system("cls");
	fstream file;
	int total=0;
<<<<<<< HEAD
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
	cout<<"+                             Tabla de Detalles de Personas                       +"<<endl;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;

	file.open("ParticipantRecord2.txt",ios::in);
	if(!file)
	{
		cout<<" No hay informacion ";
=======
	cout<<"\n-------------------------Tabla de Detalles de Personas -------------------------"<<endl;
	file.open("ParticipantRecord2.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informaci�n...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		file.close();
	}
	else
	{
		file >> id >> name >> phone >> college >> address;
		while(!file.eof())
		{
			total++;
<<<<<<< HEAD
    cout<<"                        Mostrando -> ID del estudiante: "<<id <<endl;
    cout<<"                        Mostrando -> Nombre del estudiante: "  << name << endl;
    cout<<"                        Mostrando -> Telefono: " << phone <<endl;
    cout<<"                        Mostrando -> Universidad : " << college <<endl;
    cout<<"                        Mostrando -> Direccion: " << address <<endl;
    cout<<"+---------------------------------------------------------------------------------+"<<endl;
=======
			cout<<"\n\n\t\t\t Id Persona: "<<id<<endl;
			cout<<"\t\t\t Nombre Persona: "<<name<<endl;
			cout<<"\t\t\t Telefono Persona: "<<phone<<endl;
			cout<<"\t\t\t Universidad Persona: "<<college<<endl;
			cout<<"\t\t\t Direccion Persona: "<<address<<endl;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
			file >> id >> name >> phone >> college >> address;
		}
		if(total==0)
		{
<<<<<<< HEAD
			cout<<" No hay informacion";
=======
			cout<<"\n\t\t\tNo hay informacion...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		}
	}
	file.close();
}
void maestros::modificar()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
<<<<<<< HEAD
    cout<<"+-------------------------------------------------------------------------------------+"<<endl;
	cout<<"+                           Modificacion Detalles del maestro                         +"<<endl;
    cout<<"+-------------------------------------------------------------------------------------+"<<endl;

	file.open("ParticipantRecord2.txt",ios::in);
	if(!file)
	{
		cout<<"No hay informacion..,";
=======
	cout<<"\n-------------------------Modificacion Detalles Persona-------------------------"<<endl;
	file.open("ParticipantRecord2.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		file.close();
	}
	else
	{
<<<<<<< HEAD
    cout<<"                 Ingrese Id del maestro que quiere modificar: ";
    cin>>participant_id;
    cout<<"+-------------------------------------------------------------------------------------+"<<endl;

=======
		cout<<"\n Ingrese Id de la personas que quiere modificar: ";
		cin>>participant_id;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> name >> phone >> college >> address;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< college <<std::left<<std::setw(15)<< address << "\n";
			}
			else
			{
<<<<<<< HEAD
    cout<<"                    -> Ingrese el nuevo ID del maestro: ";
    cin>>id;
    cout<<"                    -> Ingrese el nuevo nombre del maestro: ";
    cin>>name;
    cout<<"                    -> Ingrese el nuevo telefono del maestro: ";
    cin>>phone;
    cout<<"                    -> Ingrese la nueva universidad del maestro: ";
    cin>>college;
    cout<<"                    -> Ingrese la nueva direccion del maestro: ";
    cin>>address;
    cout<<"+-------------------------------------------------------------------------------------+"<<endl;
=======
				cout<<"\t\t\tIngrese Id Persona: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre Persona: ";
				cin>>name;
				cout<<"\t\t\tIngrese Telefono Persona: ";
				cin>>phone;
				cout<<"\t\t\tIngrese Universidad Persona: ";
				cin>>college;
				cout<<"\t\t\tIngrese Direccion Persona: ";
				cin>>address;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< college <<std::left<<std::setw(15)<< address << "\n";
				found++;
			}
			file >> id >> name >> phone >> college >> address;

		}
		file1.close();
		file.close();
		remove("ParticipantRecord2.txt");
		rename("Record.txt","ParticipantRecord2.txt");
	}
}
void maestros::buscar()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("ParticipantRecord2.txt",ios::in);
	if(!file)
	{
<<<<<<< HEAD
        cout<<"+-------------------------------------------------------------------------------------+"<<endl;
		cout<<"+                            Detalles del maestro Buscado                             +"<<endl;
        cout<<"+-------------------------------------------------------------------------------------+"<<endl;
		cout<<"No hay informacion...";
=======
		cout<<"\n-------------------------Datos de la Persona buscada------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
	}
	else
	{
		string participant_id;
<<<<<<< HEAD
		cout<<"+-------------------------------------------------------------------------------------+"<<endl;
		cout<<"+                             Detalles del estudiante Buscado                         +"<<endl;
        cout<<"+-------------------------------------------------------------------------------------+"<<endl;
		cout<<"                    Ingrese Id de la Persona que quiere buscar: ";
		cin >>participant_id;
        cout<<"+-------------------------------------------------------------------------------------+"<<endl;

=======
		cout<<"\n-------------------------Datos de Persona buscada------------------------"<<endl;
		cout<<"\nIngrese Id de la Persona que quiere buscar: ";
		cin>>participant_id;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		file >> id >> name >> phone >> college >> address;
		while(!file.eof())
		{
			if(participant_id==id)
			{
<<<<<<< HEAD
        cout<<"                         Mostrando -> Id Maestro: "<<id<<endl;
        cout<<"                         Mostrando -> Nombre Maestro: "<<name<<endl;
        cout<<"                         Mostrando -> Telefono Maestro: "<<phone<<endl;
        cout<<"                         Mostrando -> Universidad Maestro: "<<college<<endl;
        cout<<"                         Mostrando -> ireccion Maestro: "<<address<<endl;
        cout<<"+-------------------------------------------------------------------------------------+"<<endl;

=======
				cout<<"\n\n\t\t\t Id Persona: "<<id<<endl;
				cout<<"\t\t\t Nombre Persona: "<<name<<endl;
				cout<<"\t\t\t Telefono Persona: "<<phone<<endl;
				cout<<"\t\t\t Universidad Persona: "<<college<<endl;
				cout<<"\t\t\t Direccion Persona: "<<address<<endl;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
				found++;
			}
			file >> id >> name >> phone >> college >> address;
		}
		if(found==0)
		{
<<<<<<< HEAD
			cout<<"ERROR MAESTRO NO ENCONTRADO...";
=======
			cout<<"\n\t\t\t Persona no encontrada...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		}
		file.close();
	}
}
void maestros::borrar()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
<<<<<<< HEAD

    cout<<"+-------------------------------------------------------------------------------------+"<<endl;
	cout<<"+                               Detalles Persona a Borrar                             +"<<endl;
    cout<<"+-------------------------------------------------------------------------------------+"<<endl;

	file.open("ParticipantRecord2.txt",ios::in);
	if(!file)
	{
		cout<<"NO HAY INFORMACION...";
=======
	cout<<"\n-------------------------Detalles Persona a Borrar-------------------------"<<endl;
	file.open("ParticipantRecord2.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		file.close();
	}
	else
	{
<<<<<<< HEAD
    cout<<"            Ingrese el Id de la Persona que quiere borrar: ";
    cin>>participant_id;
    cout<<"+-------------------------------------------------------------------------------------+"<<endl;

=======
		cout<<"\n Ingrese el Id de la Persona que quiere borrar: ";
		cin>>participant_id;
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> name >> phone >> college >> address;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< college <<std::left<<std::setw(15)<< address << "\n";
			}
			else
			{
				found++;
<<<<<<< HEAD
				cout << "Borrado de informacion exitoso";
=======
				cout << "\n\t\t\tBorrado de informacion exitoso";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
			}
			file >> id >> name >> phone >> college >> address;
		}
		if(found==0)
		{
<<<<<<< HEAD
			cout<<" Id de maestro no encontrado...";
=======
			cout<<"\n\t\t\t Id Persona no encontrado...";
>>>>>>> 0128a7b0016435a3e9a22045405af6619b696fe0
		}
		file1.close();
		file.close();
		remove("ParticipantRecord2.txt");
		rename("Record.txt","ParticipantRecord2.txt");
	}
}
