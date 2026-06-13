#include <stdio.h>
#include <string.h>
// int main() {
//     int x, y;
//     x = 20;
//     y = 10;

//     printf("%d\n", x);
//     printf("%d\n", y);

//     return 0;
// }


// int main() {
//     double x;

//     x = 2.34567;

//     printf("%.2lf\n", x);

//     return 0;
// }


int main() {
    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Junior Menezes");
    sexo = 'M';

    printf("O funcionario %s, sexo %c, ganha %.2lf e tem %d anos", nome, sexo, salario, idade);

    return 0;
}