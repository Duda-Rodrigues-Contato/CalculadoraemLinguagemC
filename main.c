/* As função necessárias:
1 - Soma
2 - Subtração
3 - Multiplicação
4 - Divisão */

#include <stdio.h>

int soma(int valor1, int valor2) {

    printf("%d", valor1 + valor2);

}

int subtracao(int valor1, int valor2) {

    printf("%d", valor1 - valor2);

}

int multiplicacao(int valor1, int valor2) {

    printf("%d", valor1 * valor2);

}

int divisao(int valor1, int valor2) {

    printf("%d", valor1 / valor2);

}

int main() {

    int operacao = 0, valor1 = 0, valor2 = 0;

    scanf("%d", &valor1);
    scanf("%d", &valor2);

    printf("Digite 1 p soma, 2 pra subtracao, 3 pra multiplicacao e 4 pra divisao: ");
    scanf("%d\n", &operacao);

    if (operacao == 1) {

        soma (valor1, valor2);

    } else if (operacao == 2) {

        subtracao (valor1, valor2);

    } else if (operacao == 3) {

        multiplicacao (valor1, valor2);

    } else if (operacao == 4) {

        divisao (valor1, valor2);

    }

    return 0;
}