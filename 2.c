//2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
//escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
//IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

#include <stdio.h>
#include <stdlib.h>

int pertence_fibonacci(int num) {
    int a = 0, b = 1, c = 0;

    if (num == 0 || num == 1) {
        return 1;
    }

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }

    return (c == num);
}

int main() {
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (pertence_fibonacci(num)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", num);
    }

    return 0;
}