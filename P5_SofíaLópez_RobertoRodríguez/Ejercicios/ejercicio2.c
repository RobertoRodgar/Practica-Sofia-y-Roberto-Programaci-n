#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Lista de palabras aleatorias
	char palabra[5][10] = {"manzana","limón","uva","melón","lima"};

	//
	for(int i = 0; i < 5; i++){	
		if(palabra == 'a'){
			continue;
		} else 
		printf("%s", palabra[i]);
	}

return EXIT_SUCCESS;
}
