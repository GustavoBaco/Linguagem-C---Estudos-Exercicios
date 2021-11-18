#include <stdio.h>

int main (){
// Declaração de variáveis:
    int numero1, numero2, result;

//Entradas de dados:
    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);
    printf("Informe o segundo número: ");
    scanf("%d", &numero2);

//Processamento
    result = numero1 + numero2;

//saída de dados processados

    printf("Resultado da soma é: %d",result);



}