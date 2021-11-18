#include <stdio.h>
#include <math.h>

int main (){
//Variáveis
int n1, opcao;
do
{
    /* code */
    printf("Informe um número inteiro: ");
    scanf("%d", &n1);
        if(n1 % 2 ==0){
            printf("O número %d é par\n",n1);
        }else{
                printf("O número %d é ímpar\n",n1);
        }
    if (n1 > 0 ){
        printf("O número %d é positivo\n");
    }else{
            printf("O número %d é negativo\n");
    }
printf("1-Continuar\n");
printf("2-Sair\n");
scanf("%d", &opcao);


} while (opcao != 2);
    system("pause");

}