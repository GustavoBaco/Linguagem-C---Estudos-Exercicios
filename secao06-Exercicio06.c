#include <stdio.h>

int main (){
    int c, n;
    float salario, extra = 0;
printf("Informe o código do funcionário: ");
scanf("%d", &c);
printf("Informe o número de horas trabalhadas: ");
scanf("%d", &n);
if (n > 50){
    extra = (n - 50) * 20;
    salario = (50 * 10) + extra;
    printf("Salário a receber R$: %.2f \n", salario);
    printf("Extra a receber R$: %.2f", extra);
    

}else{
    salario = (n * 10.00) ;
    printf("Salário a receber R$: %.2f \n", salario);
    printf("Extra a receber R$: %.2f", extra);

}


}