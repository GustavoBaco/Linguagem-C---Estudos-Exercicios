#include<stdio.h>

int main(){
    //variáveis
    float poluicao;
    int opcao;
do
{
    /* code */


    printf("Informe o índice de poluição: ");
    scanf("%f", &poluicao);

    if(poluicao >=0.3 && poluicao < 0.4){
        printf("Grupo 1 suspender atividades !\n");
    }else if (poluicao >= 0.4 && poluicao <0.5){
            printf("Grupo 1 e 2 suspendere atividades !\n");
    }else if (poluicao >=0.5){
                printf("Todos os grupos suspender atividades ! \n");
    }else{
        printf("Níveis estão aceitáveis ! \n");
    }
printf("1-Continuar\n");
printf("2-Sair\n");
scanf("%d", &opcao);

} while (opcao != 2 );
    system("pause");



}