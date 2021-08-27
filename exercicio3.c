// Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {

    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    int codigo;
    float quadrado, retangulo, trapezio, potencia;
    float lado, base, alturaRetangulo, baseMaior, baseMenor, alturaTrapezio, basePotencia, expoente;

    printf("--- Digite o Código Referente ao Cálculo ---\n 1 - Área de um Quadrado \n 2 - Área de um Retângulo \n 3 - Área de um Trapézio \n 4 - Potência \n");
    scanf("%d", &codigo);
    system("cls");

    switch (codigo) {
        case 1:
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            quadrado = lado * lado;
            printf("A área do quadrado é: %f", quadrado);
            break;

        case 2:
            printf("Digite a base do retângulo: ");
            scanf("%f", &base);
            printf("Digite a altura do retângulo: ");
            scanf("%f", &alturaRetangulo);
            retangulo = base * alturaRetangulo;
            printf("A área do retângulo é: %f", retangulo);
            break;

        case 3:
            printf("Digite a base maior do trapézio: ");
            scanf("%f", &baseMaior);
            printf("Digite a base menor do trapézio: ");
            scanf("%f", &baseMenor);
            printf("Digite a altura do trapézio: ");
            scanf("%f", &alturaTrapezio);
            trapezio = ((baseMaior + baseMenor) / 2) * alturaTrapezio;
            printf("A área do trapézio é: %f", trapezio);
            break;

        case 4:
            printf("Digite a base da potência: ");
            scanf("%f", &basePotencia);
            printf("Digite o expoente da potência: ");
            scanf("%f", &expoente);
            potencia = pow(basePotencia,expoente);
            printf("O resultado da potência é: %f", potencia);
            break;

        default:
            printf("Código Informado Inválido!");
    }

    return 0;
}
