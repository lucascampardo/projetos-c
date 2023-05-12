#include <stdio.h>

int main() {
    int n1, n2, op;

    printf("Entre com o primeiro numero:");
    scanf("%i", &n1);
    printf("Entre com o segundo numero:");
    scanf("%i", &n2);

    printf("Qual operacao voce deseja fazer? \n");
    printf("|==============================|\n");
    printf("|         1  - Soma            |\n");
    printf("|         2  - Subtracao       |\n");
    printf("|         3  - Multiplicao     |\n");
    printf("|         4  - Divisao         |\n");
    printf("|==============================|\n");
    scanf("%i", &op);

    switch(op)
    {
        case 1:
            op == n1 + n2;
            printf("O resultado e: ", op);
            break;
        case 2:
            op == n1 - n2;
            printf("O resultado e: ", op);
            break;
        case 3:
            op == n1 * n2;
            printf("O resultado e: ", op);
            break;
        case 4:
            op == n1 / n2;
            printf("O resultado e: ", op);
            break;
        default:
            printf("Opcao nao encontrada!");
    }
}