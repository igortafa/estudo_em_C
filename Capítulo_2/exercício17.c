#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano = 0; //Variável para armazenar o ano
    int bissexto = 0; //Variável para armazenar o resultado (1 indica que é bissexto, 0 indica que não é)


    //Recebe um ano do usuário
    printf("Insira um ano para verificar se é bissexto?");
    scanf("%d", &ano);


    //Verifica se o ano é bissexto
    if (ano%4 == 0 && ano%100 != 0)
        bissexto = 1;

    //Imprime o resultado
    printf("\nO ano é %s", bissexto == 1?"Bissexto":"Não-bissexto\n");

    return 0;
}