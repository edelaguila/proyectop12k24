#ifndef ALUMNO_H
#define ALUMNO_H

using namespace std;

class Alumno
{
    public:
        Alumno();
        virtual ~Alumno();

        SetAlumno(string nombre,int edad)
        {
            this->edad = edad;
            this->nombre = nombre;
        }

    protected:

    private:
        string nombre ;
        int edad ;

};

#endif // ALUMNO_H
