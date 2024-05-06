Algoritmo secciones_Aula
	estudiante= entero;
	alumnoExiste=bool;
	alumnoExiste=Verdadero;
	Mientras alumnoExiste Hacer
		Leer estudiante;
		Para i<-1 Hasta estudiante Con Paso 1 Hacer
			
			Si i<=3 Entonces
				Escribir "Estudiante asignado a seccion A";
			SiNo
				Escribir "Estudiante asignado a seccion b";
			Fin Si
		
		Fin Para
		alumnoExiste=Falso;
	Fin Mientras
FinAlgoritmo
