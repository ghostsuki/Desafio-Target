#include <stdio.h>
#include <stdlib.h>

int main() {
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    float total = sp + rj + mg + es + outros;

    float perc_sp = (sp / total) * 100;
    float perc_rj = (rj / total) * 100;
    float perc_mg = (mg / total) * 100;
    float perc_es = (es / total) * 100;
    float perc_outros = (outros / total) * 100;

    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", perc_sp);
    printf("RJ: %.2f%%\n", perc_rj);
    printf("MG: %.2f%%\n", perc_mg);
    printf("ES: %.2f%%\n", perc_es);
    printf("Outros: %.2f%%\n", perc_outros);

    return 0;
}