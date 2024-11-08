#include <stdio.h>
#include <stdlib.h>

#define aprobado 5.0 

int main(){
	double num_estudiantes[100]; // Array que guarda las notas de los estudiantes
	int reemplazo;	// sustituto de numero de estudiantes (en etse casao pasa de 100 al numero que pongamos)
	double nota_final; // variable que guarda la nota en el array
	double promedio; // variable que almacena el promedio
	int cuenta_aprobado = 0; //variable para ir contando los aprobados totales
	int cuenta_suspenso = 0; //variable para ir contando los suspensos totales
	double maxima = 0;	//variable para comparar maximas (empieza en 0 para que todas las notas que se comparen sean igual o mayores)
	double minima = 100; // variable para comprobar minimas (empieza en un numero muy alto e imposible para que cualquier nota sea inferior al numero
	int estudiante; //variable para guardar la posición del estudiantes
	//REGISTRAR NUMERO DE ESTUDIANTES
	printf("Introduce el número de estudiantes: "); 
	scanf("%d", &reemplazo);

	num_estudiantes[100] = reemplazo - 1; //cambia el 100 por el numero introducido y resta 1 porque empieza en 0

	//APARTADO 1 GUARDAR NOTA DE LOS ESTUDIANTES
	for (int i = 0; i < reemplazo; i++){
	printf("Introduce la nota final de cada alumno: ");
	scanf("%lf", &nota_final);
	num_estudiantes[i] = nota_final;
	}
	
	//APARTADO 2 PROMEDIO DE NOTAS
	for (int i = 0; i < reemplazo; i++){
		promedio += num_estudiantes[i];
	}
	promedio = promedio / reemplazo;
	printf("Promedio de notas: %0.2f\n", promedio);

	//APARTADO 3 NUMERO APROBADOS Y SUSPENSOS
	for (int i = 0;i < reemplazo; i++){
		if (num_estudiantes[i] >= aprobado){
			cuenta_aprobado += 1;
		}
	}
	printf("Número de estudiantes aprobados: %d\n", cuenta_aprobado);

	for (int i = 0;i < reemplazo; i++){
		if (num_estudiantes[i] < aprobado){
			cuenta_suspenso += 1;
		}
	}
	printf("Número de estudiantes supendidos: %d\n", cuenta_suspenso);
	
	//APARTADO 4 NOTA MAXIMA Y MINIMA
	for (int i = 0; i < reemplazo; i++){
		if (num_estudiantes[i] > maxima){
			maxima = num_estudiantes[i];
			estudiante = i + 1;
		}
	}
	printf("Nota máxima: %0.1f (Estudiante en la posición %d) \n", maxima, estudiante);
	
	for (int i = 0; i < reemplazo; i++){
		if (num_estudiantes[i] < minima){
			minima = num_estudiantes[i];
			estudiante = i + 1;
		}
	}
	printf("Nota mínima: %0.1f (Estudiante en la posición %d) \n", minima, estudiante);
	
	//APARTADO 5 NOTAS POR ENCIMA DEL PROMEDIO
	printf("Notas por encima del promedio:\n");
	for (int i = 0; i < reemplazo; i++){
		if (num_estudiantes[i] >= promedio){
			estudiante = i +1;
			printf("Estudiante en la posición %d: %0.1f\n", estudiante, num_estudiantes[i]);
		}
	}
	return 0;
}
