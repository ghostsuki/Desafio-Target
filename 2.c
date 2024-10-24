#include <stdio.h>
#include <stdlib.h>
#define NUM_DIAS 30

typedef struct {
    int dia;
    float valor;
} FaturamentoDiario;

float calcularMenorFaturamento(FaturamentoDiario faturamento[], int tamanho) {
    float menor = -1;
    for (int i = 0; i < tamanho; i++) {
        if (faturamento[i].valor > 0 && (menor == -1 || faturamento[i].valor < menor)) {
            menor = faturamento[i].valor;
        }
    }
    return menor;
}

float calcularMaiorFaturamento(FaturamentoDiario faturamento[], int tamanho) {
    float maior = 0;
    for (int i = 0; i < tamanho; i++) {
        if (faturamento[i].valor > 0 && faturamento[i].valor > maior) {
            maior = faturamento[i].valor;
        }
    }
    return maior;
}

float calcularMediaMensal(FaturamentoDiario faturamento[], int tamanho) {
    float soma = 0;
    int diasComFaturamento = 0;
    
    for (int i = 0; i < tamanho; i++) {
        if (faturamento[i].valor > 0) {
            soma += faturamento[i].valor;
            diasComFaturamento++;
        }
    }
    return (diasComFaturamento > 0) ? (soma / diasComFaturamento) : 0;
}

int contarDiasAcimaMedia(FaturamentoDiario faturamento[], int tamanho, float media) {
    int diasAcimaMedia = 0;
    for (int i = 0; i < tamanho; i++) {
        if (faturamento[i].valor > media) {
            diasAcimaMedia++;
        }
    }
    return diasAcimaMedia;
}

int main() {
    FaturamentoDiario faturamento[NUM_DIAS] = {
        {1, 22174.1664}, {2, 24537.6698}, {3, 26139.6134}, {4, 0.0},
        {5, 0.0}, {6, 26742.6612}, {7, 0.0}, {8, 42889.2258},
        {9, 46251.174}, {10, 11191.4722}, {11, 0.0}, {12, 0.0},
        {13, 3847.4823}, {14, 373.7838}, {15, 2659.7563}, {16, 48924.2448},
        {17, 18419.2614}, {18, 0.0}, {19, 0.0}, {20, 35240.1826},
        {21, 43829.1667}, {22, 18235.6852}, {23, 4355.0662}, {24, 13327.1025},
        {25, 0.0}, {26, 0.0}, {27, 25681.8318}, {28, 1718.1221},
        {29, 13220.495}, {30, 8414.61}
    };

    float menorFaturamento = calcularMenorFaturamento(faturamento, NUM_DIAS);
    float maiorFaturamento = calcularMaiorFaturamento(faturamento, NUM_DIAS);
    float mediaMensal = calcularMediaMensal(faturamento, NUM_DIAS);
    int diasAcimaMedia = contarDiasAcimaMedia(faturamento, NUM_DIAS, mediaMensal);

    printf("Menor valor de faturamento: %.4f\n", menorFaturamento);
    printf("Maior valor de faturamento: %.4f\n", maiorFaturamento);
    printf("Media mensal de faturamento: %.4f\n", mediaMensal);
    printf("Numero de dias com faturamento acima da media: %d\n", diasAcimaMedia);

    return 0;
}