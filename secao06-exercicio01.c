#include <stdio.h>

int main (){
    //Declarando variáveis
    int num1;

    //Dado
    printf("Informe um número: ");
    scanf("%d", &num1);

    //Processamento
    if (num1 > 100){
        printf("%d", num1);

    }else{
        num1 = 0;
        printf("%d", num1);

    }
        

}