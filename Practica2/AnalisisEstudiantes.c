#include <stdio.h>
#include <stdlib.h>

int main(){
	int num_estudiantes[100];
	int reemplazo;
	double nota_final;
	int promedio;
	printf("Introduce el número de estudiantes: ");
	scanf("%d", &reemplazo);

	num_estudiantes[100] = reemplazo + 1;

	for (int i = 0; i < reemplazo; i++){
	printf("Introduce la nota final de cada alumno: ");
	scanf("%d", &nota_final);
	num_estudiantes[i] = nota_final;
	}
	
	for (int i = 0; i < reemplazo; i++){
		promedio += 
	return 0;
}

