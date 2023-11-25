#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int i,j, escolha; 
	char nome[1][200];
	char contatos[1][200];

	do{
		printf("Deseja aplicar um contato ou ver os contatos aplicados ?\n");
		printf("Aplicar (1), Ver e encerrar (2) ?\n");
		scanf("%d", &escolha);
		
		if(escolha==1){
			printf("Adicione um nome:\n");
			
			for(i=0; i<1; i++){
				fflush(stdin);
				gets(nome[i]);
				fflush(stdin);
				printf("Adicione um numero:\n");
				gets(contatos[i]);
			}
			
		}  
	
	} while (escolha != 2);
	
	for(i=0; i<1; i++){
   	   	printf("Contatos adicionados:%s \n", nome[i]);
		printf("Contatos adicionados:%s \n", contatos[i]);
	}
	
	
	
}