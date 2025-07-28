#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"
#include "letra.h"

int main() {
    int opcao;
    Usuario usuarios[MAX_USUARIOS];
    LetraMusica letras[MAX_MUSICAS];
    int totalUsuarios = 0, totalLetras = 0;

    while (1) {
        printf("\n--- Loja de Letras Musicais ---\n");
        printf("1. Cadastrar Usuário\n");
        printf("2. Fazer Login\n");
        printf("3. Cadastrar Letra\n");
        printf("4. Listar Letras\n");
        printf("5. Comprar Letra\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                cadastrarUsuario(usuarios, &totalUsuarios);
                break;
            case 2:
                loginUsuario(usuarios, totalUsuarios);
                break;
            case 3:
                cadastrarLetra(letras, &totalLetras);
                break;
            case 4:
                listarLetras(letras, totalLetras);
                break;
            case 5:
                comprarLetra(letras, totalLetras);
                break;
            case 6:
                exit(0);
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}