#include <stdio.h>
#include <string.h>

int main(){
char nome[100], senha[100];
 

printf("Informe o nome: ");
gets(nome);

printf("Informe a senha: ");
gets(senha);

while (!strcmp(nome,senha))//Compara duas strings
{
    printf("Nome de usuário e senha deve ser diferente! \n");
    printf("Informe o nome: ");
    gets(nome);

    printf("Informe a senha: ");
    gets(senha);
}
printf("login efetuado com sucesso ! ");
}

