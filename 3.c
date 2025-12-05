#include <stdio.h>
#include <stdlib.h>

int main(){

float km, ms, res;

printf("Digite a velocidade em km: ");
scanf("%f", &km);

ms = km / 3,6;

printf("A conversão de km para ms foi: %.2f", ms);

    system("pause");
    return 0;
}