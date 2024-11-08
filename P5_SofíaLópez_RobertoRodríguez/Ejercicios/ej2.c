#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	//Lista de palabras aleatorias
	char palabra[5][10] = {"manzana","limón","uva","melón","lima"};

	//
	for(int i = 0; i < 5; i++){	
		for (int a = 0; a < strlen(palabra[i]); a++){	
			if(palabra[i][a] == 'a'){
				continue;
			} 
		printf("%s\n", palabra[i]);
		}
	}

return EXIT_SUCCESS;
}
