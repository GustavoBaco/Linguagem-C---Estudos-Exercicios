#include <stdio.h>

int main (){
    //Declaração de variáveis
    int metros, centimetros;

    //Processamento
    

    printf("Informe o valor em metros: ");
    scanf("%d", &metros);
    
    centimetros = (metros * 100);

    //Saída de dados
    printf("%d metros em centímetros é %d", metros,centimetros);
}