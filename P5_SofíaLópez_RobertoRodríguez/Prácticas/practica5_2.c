#include <stdio.h>
#include <stdlib.h>

#define aprobado 5.0 

int main(){
	double num_estudiantes[100];
	int reemplazo;
	double nota_final;
	double promedio;
	int cuenta_aprobado = 0;
	int cuenta_suspenso = 0;
	double maxima = 0;
	double minima = 100;
	int estudiante;
	printf("Introduce el número de estudiantes: ");
	scanf("%d", &reemplazo);

	num_estudiantes[100] = reemplazo - 1;

	for (int i = 0; i < reemplazo; i++){
	printf("Introduce la nota final de cada alumno: ");
	scanf("%lf", &nota_final);
	num_estudiantes[i] = nota_final;
	}
	
	for (int i = 0; i < reemplazo; i++){
		promedio += num_estudiantes[i];
	}
	promedio = promedio / reemplazo;
	printf("Promedio de notas: %0.2f\n", promedio);

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
}
