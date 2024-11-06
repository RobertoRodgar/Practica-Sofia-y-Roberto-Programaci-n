#include <stdio.h>
#include <stdlib.h>

#define aprobado 5.0 

int main(){
	int num_estudiantes[100];
	int reemplazo;
	double nota_final;
	double promedio;
	int cuenta_aprobado = 0;
	int cuenta_suspenso = 0;
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

}
