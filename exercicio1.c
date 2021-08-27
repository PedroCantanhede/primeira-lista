// Bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Declaração das Variáveis
    int estoque, pedido, atual;

    // Entrada e Leitura dos Dados
    printf("Digite o número de itens em estoque: ");
    scanf("%d", &estoque);
    printf("Digite o número de itens a serem fornecidos: ");
    scanf("%d", &pedido);

    atual = estoque - pedido;

    // Condição Lógica
    if (pedido <= estoque) {
        printf("Estoque Atualizado: %d", atual);
    } else {
        printf("Não há itens suficientes em estoque!");
    }

    return 0;
}
