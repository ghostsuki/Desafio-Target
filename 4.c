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