#ifndef LETRA_H
#define LETRA_H

#define MAX_MUSICAS 100

typedef struct {
    char titulo[100];
    char artista[100];
    float preco;
    char genero[20];
    int vendas;
} LetraMusica;

void cadastrarLetra(LetraMusica letras[], int *total);
void listarLetras(LetraMusica letras[], int total);
void comprarLetra(LetraMusica letras[], int total);

#endif