// Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {

    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    int indicador;
    float raio, area, perimetro;

    printf("Digite 1 para calcular a área ou 2 para calcular o perímetro da circunferência: ");
    scanf("%d", &indicador);
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    if (indicador == 1) {
        area = 3.14 * (raio * raio);
        printf("A área da circunferência é aproximadamente: %f", area);
    } else if (indicador == 2) {
        perimetro = 2 * (3.14 * raio);
        printf("O perímetro da circunferência é aproximadamente: %f", perimetro);
    } else {
        printf("O indicador foi fornecido errado. Tente novamente!");
    }

    return 0;
}
