//Hecho por Gabriela Pinto García / 9959-23-1087

Algoritmo CRUD_aula
    Definir opcion Como entero
	
    // Bucle principal
    Repetir
        // Menú principal
        Escribir "**************************"
        Escribir "*  Menu secciones aulas  *"
        Escribir "**************************"
        Escribir "1) Ingresar seccion "
        Escribir "2) Modificar seccion "
        Escribir "3) Borrar seccion"
        Escribir "4) Desplegar seccion"
        Escribir "5) Salir"
        Escribir "**************************"
        Escribir "* Seleccione [1/2/3/4/5] *"
        Escribir "**************************"
        Leer opcion
        
        Segun opcion hacer
				// Agregar sección
            Caso 1:
                Escribir "********** Agregar Seccion **********"
                Escribir "Ingrese el codigo de la seccion: "
                Leer codigo
                Escribir "Ingrese el nombre de la seccion: "
                Leer nombre
                Escribir "Ingrese el estatus de la seccion: "
                Leer estatus
                Escribir "Seccion guardada exitosamente..."
                
				// Modificar sección
            Caso 2:
                Escribir "********** Modificar Seccion **********"
                Escribir "Ingrese el codigo de la seccion a modificar: "
                Leer codigo
                Escribir "Ingrese el nuevo nombre de la seccion: "
                Leer nombre
                Escribir "Ingrese el nuevo estatus de la seccion: "
                Leer estatus
                Escribir "Seccion modificada correctamente..."
                
				// Borrar sección
            Caso 3:
                Escribir "********** Borrar Seccion **********"
                Escribir "Ingrese el codigo de la seccion a borrar: "
                Leer codigo
                Escribir "Seccion borrada correctamente..."
                
				// Desplegar secciones
            Caso 4:
                Escribir "********** Desplegar Secciones **********"
                Escribir "Codigo de la seccion: ", codigo
                Escribir "Nombre de la seccion: ", nombre
                Escribir "Estatus de la seccion: ", estatus
                Escribir "----------------------------------------"
                
				// Salir
            Caso 5:
                Escribir "********** Salir **********"
                Escribir "Gracias por usar el sistema. ¡Hasta luego!"
                
            De Otro Modo:
                Escribir "Opcion invalida. Por favor, ingrese una opcion [1/2/3/4/5]"
        FinSegun
        
    Hasta Que opcion = 5
FinAlgoritmo

	