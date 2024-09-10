#include <stdio.h>

int Absoluto(int num) {
    if (num < 0)
        return -num;
    else
        return num;
}

int main() {
    int valores[5]; 
    int i;

    printf("Digite 5 valores inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nValores absolutos:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor absoluto de %d eh: %d\n", valores[i], Absoluto(valores[i]));
    }

    return 0;
}
