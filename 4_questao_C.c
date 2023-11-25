#include <stdio.h>

    int main (){
	
		int numeros[5], i; 
		float media,soma,media2,mediatodos,pares=0,impares=0,negativos=0,positivos=0,quantia=0,maior=0,menor=999; 
	
	    for(i=0; i<5; i++){
			printf("Digite %d numeros:",i+1);
			scanf("%d", &numeros[i]);
			quantia++;

		if(numeros[i] %2 == 0){
			pares++;
		} else {
			impares++;
		}
	
		if(numeros[i] < 0){
			negativos++;
		} else {
			positivos++;
		}
		
		soma+= (float) numeros[i]; 
	 
    	}
    	
		for (i=0; i<5; i++){
        if(numeros[i] < menor){
        	menor= numeros[i]; 
        }
        if(numeros[i] > maior){
            maior= numeros[i]; 
       	}
   	 }
		
		system("cls||clear");
			
    	media= soma/ pares;
		media2= soma/impares;
		mediatodos= soma/quantia;
		fflush(stdin);	
		
		printf("\n--------------\nRESULTADOS\n--------------\n");
	    printf("Media pares:%.1f\n", media);
		printf("Media todos:%.1f\n", mediatodos);
		printf("\n----------------------------\n");
		printf("Quantia impares:%.1f\n", impares);
		printf("\n----------------------------\n");
		printf("Numeros negativos: %.1f\n", negativos);
		printf("\n-----------------------------\n");
		printf("Maior: %.1f\n", maior);
		printf("Menor: %.1f\n", menor);
		printf("\n----------------------------\n");
	
		return 0; 
		
	
}
