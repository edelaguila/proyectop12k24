#ifndef CONFIG_H
#define CONFIG_H

//Clase "Config"
class Config
{
    //Parte publica de la clase Config
    public:

        //Declaracion de atrivutos
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

        //Gets y sets para enviar y recibir los atributos
        int getFilasTablero();
        int setFilasTablero(int filasTablero);
        int getColumnasTablero();
        int setColumnasTablero(int columnasTablero);
        int getMinasTablero();
        int setMinasTablero(int minasTablero);
        int getVidasTablero();
        int setVidasTablero(int vidasTablero);
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);

        //Constructor encargado de el menu de configuraciones del juego
        void menuConfiguracion();

    protected:

    //Parte privada de la clase Config
    private:

    //Declaracion de atrivutos
        int filasTablero;
        int columnasTablero;
        int minasTablero;
        int vidasTablero;
        bool modoDesarrollador;
};

#endif // CONFIG_H
