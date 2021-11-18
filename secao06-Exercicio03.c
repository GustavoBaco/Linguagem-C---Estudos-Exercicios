#include <stdio.h>

int main (){
//Variáveis
int num, p, i;

//Dados
printf("Informe um número: ");
scanf("%d", &num);

//Processamento
if (num % 2 == 0){
    p=num;
    printf("O número %d é par", p);
}else{
    i=num;
    printf("O número %d é ímpar", i);
}

}