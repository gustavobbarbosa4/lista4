#include <stdio.h>

int verificarSinal(int numero) {
    if (numero > 0) {
        return 1; 
    } else if (numero < 0) {
        return -1; 
    } else {
        return 0;  
    }
}

int main() {
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = verificarSinal(numero);

    if (resultado == 1) {
        printf("O numero %d e positivo.\n", numero);
    } else if (resultado == -1) {
        printf("O numero %d e negativo.\n", numero);
    } else {
        printf("O numero e zero.\n");
    }

    return 0;
}
