#ifndef USUARIO_H
#define USUARIO_H

#define MAX_USUARIOS 100

typedef struct {
    char email[100];
    char senha[50];
} Usuario;

void cadastrarUsuario(Usuario usuarios[], int *total);
void loginUsuario(Usuario usuarios[], int total);

#endif