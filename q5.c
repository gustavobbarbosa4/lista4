#include <stdio.h>

int lerNumeroPositivo() {
    int num;
    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Número invalido! Por favor, insira um numero positivo.\n");
        }
    } while (num <= 0); 
    return num;
}

int SomaDivisores(int num) {
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {  
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int numeros[5];  
    int i, somaDiv;

    for (i = 0; i < 5; i++) {
        numeros[i] = lerNumeroPositivo();
    }

    for (i = 0; i < 5; i++) {
        somaDiv = SomaDivisores(numeros[i]);
        printf("A soma dos divisores de %d (exceto ele mesmo) eh: %d\n", numeros[i], somaDiv);
    }

    return 0;
}
