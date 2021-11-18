#include <stdio.h>
#include<math.h>

int main (){
//Variável
float n1,n2,n3,n4;
float q1,q2,q3,q4;

printf("Informe o valor do número 1: ");
scanf("%f", &n1);

printf("Informe o valor do número 2: ");
scanf("%f", &n2);

printf("Informe o valor do número 3: ");
scanf("%f", &n3);

printf("Informe o valor do número 4: ");
scanf("%f", &n4);

q1 = pow(n1,2);
q2 = pow(n2,2);
q3 = pow(n3,2);
q4 = pow(n4,2);

if (q3>=1000){
    printf("%.2f",q3);

}else{
        printf("%.2f\n",q1);
        printf("%.2f\n",q2);
        printf("%.2f\n",q3);
        printf("%.2f\n",q4);


}






}