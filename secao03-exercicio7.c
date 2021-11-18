#include <stdio.h>



int main (){
//Declarando variáveis
float altura, calculo_peso_ideal;

//Dados
printf("Informe sua altura: ");
scanf("%f", &altura);

//Processamento
calculo_peso_ideal = (72.7 * altura) - 58;

//Saída
printf("O seu peso ideal é: %.2f", calculo_peso_ideal);



}