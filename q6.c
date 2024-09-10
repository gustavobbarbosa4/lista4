#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char tipoMedia) {
    float media;

    switch (tipoMedia) {
        case 'A':  
            media = (nota1 + nota2 + nota3) / 3;
            break;

        case 'P': 
            media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
            break;

        case 'H': 
            media = 3 / ((1 / nota1) + (1 / nota2) + (1 / nota3));
            break;

        default:
            printf("Tipo de media invalido!\n");
            return -1;  
    }

    return media;
}

int main() {
    float nota1, nota2, nota3, resultado;
    char tipoMedia;

    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

   
    printf("Digite o tipo de media (A - aritmetica, P - ponderada, H - harmonica): ");
    scanf(" %c", &tipoMedia);

   
    resultado = calcularMedia(nota1, nota2, nota3, tipoMedia);

    
    if (resultado != -1) {
        printf("A media calculada e: %.2f\n", resultado);
    }

    return 0;
}
