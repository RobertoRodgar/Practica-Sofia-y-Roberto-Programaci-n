#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	//Lista de palabras aleatorias
	char palabra[6][8] = {"manzana","limón","uva","melón","lima", "kiwi"};

	//Recorrido por la palabra 
	for(int i = 0; i < 6; i++){	
	int PalabraConA = 0;	
		for (int a = 0; a < strlen(palabra[i]); a++){ //para que mire las palabras caracter a caracter	
			if(palabra[i][a] == 'a'){
				PalabraConA = 2;
				break;
			} 
		}
	//con este condicional evitamos que se impriman las palabras con 'a'
	if(PalabraConA == 2){
		continue;
	}
	printf("%s\n", palabra[i]);
	}

return EXIT_SUCCESS;
}
