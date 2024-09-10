#include <stdio.h>
#include <math.h>
float potencia(float base, int expoente) {
    float resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main () {
	float base, resultado;
	int expoente;
	printf("digite a base: ");
	scanf("%f", &base);
	
	printf("digite o expoente: ");
	scanf("%d", &expoente);
 
 	if(expoente >= 1){
	resultado = potencia(base,expoente);
	
	printf("o resultado eh: %.2f", resultado);
}else {
	printf("expoente nao pode ser menor que 1!");
}
}