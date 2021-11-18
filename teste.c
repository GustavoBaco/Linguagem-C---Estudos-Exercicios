#include <stdio.h>
#include <math.h>

int main (){
//Variaveis
int tabuada,resposta, contador = 0;
do
{
    /* code */


    printf("\ninforme a tabuada que deseja: ");
    scanf("%d", &tabuada);

    for (contador = 0; contador <= 10; contador++)
    {
        printf("%d x %d = %d \n", tabuada, contador, tabuada*contador);
    }
    printf("1- Novo Calculo \n");
    printf("2- Sair \n");
    printf("Digite o número desejado: ");
    scanf("%d",&resposta);

} while (resposta != 2);
    system("pause");

}