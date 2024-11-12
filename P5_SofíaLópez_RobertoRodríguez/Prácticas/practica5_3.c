#include <stdio.h>
#include <stdlib.h>
#include <string.h> //librería para el strcmp

/*
	Autores: Roberto Rodríguez y Sofía López
*/

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
	int cantidad_añadida;
	char pregunta[20];

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
	while(1){ //bucle infinito hasta que la respuesta sea no
	printf("¿Desea reabastecer algún producto? (si/no): ");
	scanf("%s", respuesta);
		if (strcmp(respuesta,"si") == 0){ 	//si la respuesta es igual a "si", serán == 0, indicando que las cadenas son iguales
			printf("Ingrese el nombre del producto: ");
			scanf(" %s", pregunta);
			for(int i = 1;i < total_productos; i++){
				if(strcmp(pregunta, productos[i].nombre) == 0){	//condicional para sumar la cantidad añadida anterior
										//de un producto específico a la nueva
				printf("Cantidad a añadir: ");
				scanf(" %d", &cantidad_añadida);
				productos[i].cantidad += cantidad_añadida;
				}
			}
		} else { break; }	
	}

	//Apartado 4; Cálculo de productos en baja existencia
	printf("Productos en baja existencia:\n");
	for(int i = 0;i < total_productos; i++){
		if(productos[i].cantidad < 5){	//ponemos como que un stock por debajo de 5 es de baja existencia 
			printf("%s - %d unidades\n", productos[i].nombre, productos[i].cantidad);		
		}
	}

	//Apartado 5; Buscar un producto por el nombre
	printf("Ingrese el nombre del producto a buscar: ");
	scanf("%s", pregunta);
	for(int i = 0; i < total_productos; i++){
		if(strcmp(pregunta, productos[i].nombre) == 0){ //condicional para buscar el producto por el que preguntas en el scanf	
			printf("Cantidad en stock: %d unidades\n", productos[i].cantidad);
			} else if (i == productos[i].cantidad - 1) {
				printf("Este producto no existe\n");
		}
	}

return EXIT_SUCCESS;
}
