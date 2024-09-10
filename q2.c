#include <stdio.h>
#include <math.h>  

float calcularDistancia(float x1, float y1, float x2, float y2) {
    float distancia;
    distancia = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    return distancia;
}

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do ponto 1 (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do ponto 2 (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    distancia = calcularDistancia(x1, y1, x2, y2);

    printf("A distancia euclidiana entre os pontos eh: %.2f\n", distancia);

    return 0;
}
