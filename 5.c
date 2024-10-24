//5) Escreva um programa que inverta os caracteres de um string.

//IMPORTANTE:
//a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
//b) Evite usar funções prontas, como, por exemplo, reverse;

#include <stdio.h>
#include <stdlib.h>

int comprimento_string(char str[]) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

void inverte_string(char str[]) {
    int tamanho = comprimento_string(str);
    int inicio = 0;
    int fim = tamanho - 1;
    char temp;

    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin);

    int tamanho = comprimento_string(str);
    if (str[tamanho - 1] == '\n') {
        str[tamanho - 1] = '\0';
    }

    inverte_string(str);

    printf("String invertida: %s\n", str);

    return 0;
}