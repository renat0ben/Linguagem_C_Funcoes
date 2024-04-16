#include<stdio.h>
#include<locale.h>
#include<math.h>

float area(float r); //Protótipo da função

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r;
	
	printf("Informe o raio: ");
	scanf("%f", &r);
	
	printf("O tamanho da area é %.1f", area(r)); //Chamada da função
	
return(0);
}

float area(float r){ //Função para saber a area
	return(3.14 * pow(r,2));
}
