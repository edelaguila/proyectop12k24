#ifndef CELDA_H
#define CELDA_H

//Clase "Celda" (Subclase de la clase Tablero)
class Celda
{
    //Parte publica de la clase Celda
    public:

        Celda();
        //Constructor encargado de realizar abstracciones
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);

        //Gets y sets para enviar y recibir los atributos
        int getCoordenadaX();
        int setCoordenadaX(int coordenadaX);
        int getCoordenadaY();
        int setCoordenadaY(int coordenadaY);
        bool getMina();
        bool setMina(bool mina);
        bool getMinaDescubierta ();
        bool setMinaDescubierta (bool minaDescubierta);

        //Constructor encargado de imprimir las celdas (encapsulado)
        void imprimirCelda();

    protected:

    //Parte privada de la clase Celda
    private:

    //Declaracion de atrivutos
        int coordenadaX, coordenadaY;
        bool mina, minaDescubierta;

};

#endif // CELDA_H
