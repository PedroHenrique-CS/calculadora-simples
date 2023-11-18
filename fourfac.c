#include <stdio.h>
#include <locale.h>

int main()
{
    char op;
    double n1, n2, result;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um operador (+, -, *, /) ");
    scanf("%s",&op);

    printf("Digite o primeiro número: \n");
    scanf("%lf",&n1);

    printf("Digite o segundo número: \n");
    scanf("%lf",&n2);

    switch (op) {
        case '+':
            result = n1 + n2;
        break;

        case '-':
            result = n1 - n2;
        break;

        case '*':
            result = n1 * n2;
        break;

        case '/':

        if(n2 != 0) {
            result = n1 / n2;
        }else{
            printf("Error: divisão por 0\n");
            return 1;
        }
        break;
        default:
        printf("Operador invalído\n");
        return 1;
    }

    printf("Resultado: %.2f\n", result);

    return 0;
}