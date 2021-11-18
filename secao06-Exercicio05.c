// #include <stdio.h>

// int main (){
// //Variáveis
// float peso_peixe, excesso = 0, multa = 0;


// printf("Informe o peso dos peixes: ");
// scanf("%f", &peso_peixe);

// if (peso_peixe > 50){
//     excesso = peso_peixe - 50;
//     multa = excesso * 4;

// }
// printf("Peso total: %.2f Kg\n", peso_peixe);
// printf("Excesso: %.2f\n Kg", excesso);
// printf("Multa: R$ %.2f\n", multa);
//}

#include <stdio.h>

int main (){
//variáveis
float p, m;
char e[8] = "excesso"; // '\0'

//Entradas
printf("Informe o peso dos peixes: ");
scanf("%f", &p);

//Processamento
if (p > 50){
    m = (p - 50) * 4.00;
    printf("Você deverá pagar R$ %.2f em multas.", m);
}else{
    m = 0;
    e [0] = 0;
    printf("Multas: %.2f\n", m);
    printf("Excesso %d", e[0]);
}




}










