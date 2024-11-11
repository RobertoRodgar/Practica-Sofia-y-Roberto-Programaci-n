#include <stdio.h>
#include <stdlib.h>
#include <string.h> //librería para el strcmp

//struct apartado 1
struct Producto{
	char nombre[20];
	int cantidad;
};

int main(){
	//variables apartado 1
	struct Producto productos[10];
	int total_productos = 1;
	//variables apartado 3
	char respuesta[10];

	//Apartado 1; ingreso de productos y cantidades
	//¿Cuántos productos?
	printf("Introduce el total de productos (máx 10): ");
	scanf("%d", &total_productos);
	if(total_productos > 10){
		printf("Solo admite hasta 10 tipos de productos\n");
	} else {
	//¿El nombre del producto?
	for (int i = 0; i < total_productos; i++){
		printf("Introduce el nombre del producto: ");
		scanf("%s", productos[i].nombre);
		printf("Introduce su stock: ");
		scanf("%d", &productos[i].cantidad);
	}
	}

	//Apartado 2; listado de productos con cantidad y nombre
	printf("Inventario Completo:\n");
	for(int i = 0; i < total_productos; i++){
		printf("Producto %d: %s - %d unidades\n", i+1, productos[i].nombre, productos[i].cantidad);
	//ponemos un i + 1 para que el producto empiece en 1, no en 0
	}

	//Apartado 3; rebastecimiento de productos
	printf("¿Desea reabastecer algún producto? (si/no): ");
	scanf("%s", respuesta);
	for(int i = 0; i < total_productos; i++){
		if (strcmp(respuesta,"si") == 0){
			printf("Ingrese el nombre del producto: ");
			scanf(" %c", productos[i].nombre);
			//printf("Cantidad a añadir: ");
			//scanf(" %d", &productos[i].cantidad);
		}
	}

return EXIT_SUCCESS;
}
