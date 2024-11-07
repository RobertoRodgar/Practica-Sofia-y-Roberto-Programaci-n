#include <stdio.h>
#include <stdlib.h>

int main(){
	//Definimos el array de 5 dimensiones
	int inventario[2][3][4][5][10];

	//Valores aleatorios
	inventario[0][0][0][0][0] = 50;		//América, sede 1, televisores, modelo 0, lote 0 --> 50 unidades
	inventario[1][1][1][3][2] = 120;	//Europa, sede 2, teléfonos, modelo 3, lote 2 --> 120 unidades
	inventario[0][2][2][1][8] = 70;		//América, sede 3, ordenadores, modelo 2, lote 9 --> 70 unidades
	inventario[0][0][0][3][5] = 25;		//América, sede 1, televisores, modelo 4, lote 6 --> 25 unidades
	inventario[1][1][3][4][2] = 12;		//Europa, sede 2, electrodomésticos, modelo 5, lote 3 --> 12 unidades

	//Definir lo que se va a imprimir
	printf("Las unidades de América, sede 1, televisores, modelo 0, lote 0 son: %d\n", inventario[0][0][0][0][0]);
	printf("Las unidades de Europa, sede 2, teléfonos, modelo 3, lote 2 son: %d\n", inventario[1][1][1][3][2]);
	printf("Las unidades de América, sede 3, ordenadores, modelo 2, lote 9 son: %d\n", inventario[0][2][2][1][8]);
	printf("Las unidades de América, sede 1, televisores, modelo 4, lote 6 son: %d\n", inventario[0][0][0][3][5]);
	printf("Las unidades de Europa, sede 2, electrodomésticos,  modelo 5, lote 3 son: %d\n", inventario[1][1][3][4][2]);

return EXIT_SUCCESS;
}
