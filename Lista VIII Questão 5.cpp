#include<stdio.h>
#include<locale.h>

void multiplicou(int m); //Portótipo da função

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &n);
	
	multiplicou(n); //Chamada da função, passando n como argumento
	
	return(0);
}

void multiplicou(int m){ //Função para verificar se o número é múltiplo de 5
	if(m % 5 == 0){
		printf("%i é múltiplo de 5!", m);
	}
	else{
		printf("%i não é múltiplo de 5!", m);
	}
}
