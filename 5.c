#include <stdio.h>
#include <stdlib.h>

int main(){

float altura[3];
float media;

printf("Digite a altura da primeira pessoa: ");
scanf("%f", &altura[0]);

printf("Digite a altura da primeira pessoa: ");
scanf("%f", &altura[1]);

printf("Digite a altura da primeira pessoa: ");
scanf("%f", &altura[2]);

media = (altura[0] + altura[1] + altura[2]) / 3;

printf("A média de altura das 3 pessoas é: %.2f", media);
    system("pause");
    return 0;
}