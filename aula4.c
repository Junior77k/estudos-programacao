#include <stdio.h>
#include <string.h>

int main() {

    int x;
    double y, resultado;
    x = 20;
    y = 2.5;

    char nome[50];
    int idade;
    strcpy(nome, "Junior Menezes");
    idade = 19;
    resultado = x * y;
    printf("O %s fez uma conta que deu %2.lf\n e descobriu que sua idade e %d", nome, resultado, idade);

    return 0;
}