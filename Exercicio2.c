//Faça um programa que some dois números e multiplique o resultado pelo primeiro número !
#include <stdio.h> // Bibliotecas da linguagem C para utilizar no programa
// std = Standard (Padrão)
// io = input/output (Entrada/Saída)

int main(){
    //Declaração de variável
    int nume1, nume2, soma, mulplicacao;
    
    //Entradas
    printf("Informe o primeiro número ");
    scanf("%d", &nume1);

    printf("Informe o segundo número ");
    scanf("%d", &nume2);
    
    //Processamento
    soma = nume1 + nume2;
    mulplicacao = soma * nume1;
    
    //saídas
    printf("O resultado da multiplicação é %d", mulplicacao);


}