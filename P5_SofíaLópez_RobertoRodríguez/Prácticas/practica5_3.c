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

	while (1==1){
		
		printf("¿Desea reabastecer algún producto? (si/no): ");
		scanf("%s", respuesta);

		if (strcmp(respuesta,"si") == 0){
			printf("Ingrese el nombre del producto: ");
			scanf(" %s", pregunta);
			for(int i = 1;i < total_productos; i++){
				if(strcmp(pregunta, productos[i].nombre)==0){
				printf("Cantidad a añadir: ");
				scanf(" %d", &cantidad_añadida);
				productos[i].cantidad += cantidad_añadida;
				
				printf("Producto: %s cantidad: %d", productos[i].nombre, productos[i].cantidad);
				}
			}

		}else{
			break;
		}	

	}
	printf("Productos de baja existencia:\n");
	for (int i=0;i<cantidad;i++){
		if (productos[i].cantidad<5){
			printf("%s - %d unidades\n", producto[i].nombre, producto[i].stock);		
		}
	}

		/*BÚSCAR UN PRODUCTO POR NOMBRE*/
	printf("Ingrese el nombre del producto a buscar: ");
	scanf("%s",pregunta);

	for(int i=0;i<total_productos;i++){
		if (strcmp(pregunta,producto[i].nombre)==0){ //compara el producto con toda la lista hasta que coincida	
		printf("Cantidad en stock: %d Unidades\n",producto[i].stock);
		break;
		}else if(i==cantidad-1){
			printf("El producto introducido no existe\n");
		}
	}

return EXIT_SUCCESS;
}
