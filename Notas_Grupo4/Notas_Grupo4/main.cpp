#include <iostream>

#include <Notas.h>
using namespace std;

int main()
{
    Notas nota;
    nota.menuNotas();

//este metodo nos ense�a literalmete todos los campos creados
//todas las notas y su total
//lo que no deberia salir es la contrase�a, ya se la quite
//pero deberia ser de una sola facultad, horario y curso ya que de momento se ve de cualqueir curso y no del alumno
    nota.mostrarNotas();
    return 0;
}
