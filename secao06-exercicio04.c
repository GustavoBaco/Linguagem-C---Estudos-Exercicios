#include <stdio.h>
#include <ctype.h>

int main (){
    //Variáveis
    float altura, peso_ideal; 
    char sexo;

    //Dados
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    gets(stdin); //corrigir bug de puxar sexo não reconhecido
    printf("Se for Homem, tecle M: \n");
    printf("Se for mulher, tecle F: \n");
    scanf("%c", &sexo);

    if (sexo == 'm' || sexo == 'M'){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
        if (sexo == 'f' || sexo == 'F'){
            peso_ideal = (62.1 * altura) - 44.7;
            printf("Seu peso ideial é %.2f", peso_ideal);
        }
            if (sexo != 'm' && sexo !='f' || sexo != 'M' && sexo != 'F'){
                printf("Sexo não reconhecido. \n");
            }
}