#include <stdio.h>

int main(){
    int valor, maior = 0;

    printf ("Inform um número ");
    scanf("%d", &valor);

    while (valor != 0)
    {
        if(valor > maior){
            maior = valor;
            
        }
        printf ("Inform um número ");
        scanf("%d", &valor);
    }
    printf("O maior número é %d", maior);
    
}