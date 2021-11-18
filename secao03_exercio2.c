#include<stdio.h>

//Calcular estoque médio

int main(){
    int qtd_maxima, qtd_minima;
    float result;

    printf("Informe a quantidade mínima do estoque: ");
    scanf("%d", &qtd_minima);

    printf("Informe a quantidade máxima do estoque: ");
    scanf("%d", &qtd_maxima);

    result = (qtd_minima + qtd_maxima) / 2;

    printf("O estoque médio é %.2f", result);
}