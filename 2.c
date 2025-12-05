#include <stdio.h>
#include <stdlib.h>

int main(){

int base, altura, res;

printf("Digite a base do triângulo: ");
scanf("%d", &base);
printf("Digite a altura do triângulo: ");
scanf("%d", &altura);

res = (base * altura) / 2;

printf("A área do triângulo é: %d", res);
    system("pause");
    return 0;
}