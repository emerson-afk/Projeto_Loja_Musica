#include <stdio.h>
#include <string.h>
#include "letra.h"

void cadastrarLetra(LetraMusica letras[], int *total) {
    printf("Título: ");
    fgets(letras[*total].titulo, 100, stdin);
    letras[*total].titulo[strcspn(letras[*total].titulo, "\n")] = 0;

    printf("Artista: ");
    fgets(letras[*total].artista, 100, stdin);
    letras[*total].artista[strcspn(letras[*total].artista, "\n")] = 0;

    printf("Gênero: ");
    fgets(letras[*total].genero, 20, stdin);
    letras[*total].genero[strcspn(letras[*total].genero, "\n")] = 0;

    printf("Preço: ");
    scanf("%f", &letras[*total].preco);
    getchar();

    letras[*total].vendas = 0;
    (*total)++;
    printf("Letra cadastrada com sucesso!\n");
}

void listarLetras(LetraMusica letras[], int total) {
    printf("\n--- Letras Cadastradas ---\n");
    for (int i = 0; i < total; i++) {
        printf("[%d] %s - %s (R$%.2f, Gênero: %s, Vendas: %d)\n",
            i+1, letras[i].titulo, letras[i].artista, letras[i].preco,
            letras[i].genero, letras[i].vendas);
    }
}

void comprarLetra(LetraMusica letras[], int total) {
    int escolha;
    listarLetras(letras, total);
    printf("Escolha o número da letra para comprar: ");
    scanf("%d", &escolha);
    getchar();

    if (escolha > 0 && escolha <= total) {
        letras[escolha-1].vendas++;
        printf("Compra realizada com sucesso!\n");
    } else {
        printf("Letra inválida.\n");
    }
}