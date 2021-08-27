// Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {

    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    float peso, altura, indice;

    printf("Informe a altura para calcular o índice de massa corporal: ");
    scanf("%f", &altura);
    printf("Informe o peso para calcular o índice de massa corporal: ");
    scanf("%f", &peso);

    indice = (peso / (altura * altura));

    if (indice <= 18.5) {
        printf("O índice de massa corporal está abaixo do peso normal");
    } else if (indice > 18.5 && indice <= 25) {
        printf("O índice de massa corporal está no peso normal");
    } else if (indice > 25 && indice <= 30) {
        printf("O índice de massa corporal está acima do peso normal");
    } else {
        printf("O índice de massa corporal está com peso excessivo");
    }

    return 0;
}
