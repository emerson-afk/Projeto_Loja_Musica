#include <stdio.h>
#include <string.h>
#include "usuario.h"

void cadastrarUsuario(Usuario usuarios[], int *total) {
    printf("Email: ");
    fgets(usuarios[*total].email, 100, stdin);
    usuarios[*total].email[strcspn(usuarios[*total].email, "\n")] = 0;

    printf("Senha: ");
    fgets(usuarios[*total].senha, 50, stdin);
    usuarios[*total].senha[strcspn(usuarios[*total].senha, "\n")] = 0;

    (*total)++;
    printf("Usuário cadastrado com sucesso!\n");
}

void loginUsuario(Usuario usuarios[], int total) {
    char email[100], senha[50];
    printf("Email: ");
    fgets(email, 100, stdin);
    email[strcspn(email, "\n")] = 0;

    printf("Senha: ");
    fgets(senha, 50, stdin);
    senha[strcspn(senha, "\n")] = 0;

    for (int i = 0; i < total; i++) {
        if (strcmp(email, usuarios[i].email) == 0 && strcmp(senha, usuarios[i].senha) == 0) {
            printf("Login bem-sucedido!\n");
            return;
        }
    }
    printf("Usuário ou senha inválidos.\n");
}