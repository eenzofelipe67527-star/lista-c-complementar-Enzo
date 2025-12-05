#include <stdio.h>
#include <stdlib.h>

int main(){

float produto, acrecimo;

printf("Digite o valor do produto");
scanf("%f", &produto);

acrecimo = (produto * 0.15) + produto;

printf("O valor do produto com acrécimo é: %.2f", acrecimo);

    system("pause");
    return 0;
}