#include <stdio.h>
#include <stdlib.h>

int main(){

int horas, minutos;

printf("Digite um valor de horas: ");
scanf("%d", &horas);

minutos = horas * 60;

printf("A conversão de horas para minutos foi: %d", minutos);

    system("pause");
    return 0;
}