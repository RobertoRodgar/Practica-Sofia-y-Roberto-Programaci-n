#include <stdio.h>
#include <stdlib.h>


int main(){

	int guardar_dia;
	int contador = 0;
	int maxima = 0;
	int minima = 999; //Se ponje un número muy alto pra que en la función se pueda sustituir ya que si no será por defecto 0.
	float promedio;
	float temp_dia[7];

	char dias[7][10] = {"lunes","martes","miercoles","jueves","viernes","sábado","domingo"}; //el primer valor es la cantidad de variables  y el segundo la longitud máxima.
	for (int i = 0; i < 7; i++){ //Función que pide las temperaturas de cada día.

		printf("Introduce el promedio de temperatura del %s: ", dias[i]);
		scanf("%f", &temp_dia[i]);
	}

	for (int i = 0; i < 7; i++){ //Función que suma cada día y calcula su promedio.
		promedio += temp_dia[i];
	}
	promedio = promedio / 7;

	printf("Temperatura promedio de la semana: %0.1fºC\n", promedio);

	for (int i = 0; i < 7; i++){ //Función que sobrescribe la funcion maxima y la cambia por la mas alta
		if (temp_dia[i] > maxima){
			maxima = temp_dia[i];
			guardar_dia = i;
		} else {
		}
	}
	printf("Temperatura máxima: %dºC del día %s.\n",maxima, dias[guardar_dia]);

	for (int i = 0; i < 7; i++){ //Lo mismo que la máxima pero con la mínima.
		if (temp_dia[i] < minima){
			minima = temp_dia[i];
			guardar_dia = i;
		} else {
		}
	}
	printf("Temperatura mínima: %dºC del día %s.\n",minima, dias[guardar_dia]);

	for(int i = 0; i < 7; i++){ //Función que calcula los días que superan el promedio.
		if (temp_dia[i] > promedio){
			contador += 1;
		} else {
		}
	}
	printf("Número de días con temperaturas superiores al promedio: %d\n", contador);

	printf("Dias con temperatura por debajo del promedio: \n");
	for (int i = 0; i < 7; i++){ //Función que imprime los días por debajo del promedio.
		if (temp_dia[i] < promedio){
			char letra_mayuscula = dias[i][0] - 'a' + 'A';
			dias[i][0] = letra_mayuscula;
			printf("%s: %0.1fºC \n", dias[i], temp_dia[i]);
		} else {
		}
	}

	return 0;
}
