#include <stdio.h>

int main (){
    //Declarando variáveis:
    float ganho_hora, salario;
    int hora_trabalhada;
    
    //Entrada
    printf("Qual valor você ganha por hora? ");
    scanf("%f",&ganho_hora);
    printf("Quantas horas você trabalhou estre mês? ");
    scanf("%d", &hora_trabalhada);

    //Processamento
    salario = (ganho_hora * hora_trabalhada);

    //Saída
    printf("Neste mês você vai receber R$: %.2f", salario);
}