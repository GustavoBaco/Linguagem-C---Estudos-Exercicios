#include <stdio.h>

int main (){
//Declaração de variáveis
int num,a,b;

//Dados
printf("Informe um número: ");
scanf("%d", &num);

//Processamento
if (num > 0){
    a = num;
    printf("Valor é positivo !\n");
    printf("%d",a);
}else{
    a = num;
    printf("Valor é negativo !\n");
    printf("%d",a);
}


}