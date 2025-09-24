#include <stdio.h>
#include <stdlib.h>

int main(){

    //declaração de variáveis
    int patos


    //recebendo valores do usuário
    printf("\nInsira a altura: ");
    scanf("%f", &altura);
    printf("\nInsira o raio: ");
    scanf("%f", &raio);
 
    //cálculo de volume e impressão do resultado
    vol = 3.141592 * raio * raio * altura;
    printf("O volume é: %f", vol);

    return 0;
}