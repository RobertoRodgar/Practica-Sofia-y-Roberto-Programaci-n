#include <stdio.h>
#include <stdlib.h>

	int main(){
	
	float promedio;
	float temp_dia[7];

	for (int i = 0; i < 7; i++){

		printf("Introduce el promedio de temperatura: ");
		scanf("%f", &temp_dia[i]);
	}
	
	for (int i = 0; i < 7; i++){
		promedio += temp_dia[i];
	}
	promedio = promedio / 7;

	printf("El promedio de temperatura de la semana es: %f\n", promedio);
	
	return 0;
	}
