#include <stdio.h>

int main (){
//variáveis:
int idade, opcao;
do
{
printf("Informe a idade do nadador ");
scanf("%d", &idade);



if (idade >= 5 && idade<=7){
    printf("Categoria do nadador: Infantil-A\n");
}   else if (idade >= 8 && idade <=11){
        printf("Categoria do nadador: Infatil-B\n");
}       else if (idade >= 12 && idade <= 13){
            printf("Categoria do nadador: Juvenil-A\n");
}           else if (idade >= 14 && idade <= 17){
                printf("Categoria do nadador: Juvenil-B\n");
}               else{
                    printf("Categoria do nadador: Adultos\n");
}
printf("Deseja continuar?\n");
printf("1-Sim\n");
printf("2-Não\n");
scanf("%d", &opcao);
   
} while (opcao != 2);




}
