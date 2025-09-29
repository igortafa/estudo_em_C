
#include <stdio.h>
#include <stdlib.h>

int main(){

    int amigo1, amigo2;
    float premioAmigo1, premioAmigo2;
    int premio, total;

    printf("Digite a quantia apostada por amigo: ");
    printf("Amigo 1: ");
    scanf("%d", &amigo1);
    printf("Amigo 2: ");
    scanf("%d", &amigo2);
    printf("Prêmio: ");
    scanf("%d", &premio);


        //fórmula com base em regra de 3 (proporção)

        total = amigo1+amigo2;
    premioAmigo1 = (amigo1*premio)/(total);
    premioAmigo2 = premio-premioAmigo1;

    printf("O montante do amigo 1 é de %.2f reais e do amigo 2 é de %.2f reais.", premioAmigo1, premioAmigo2);

    return 0;
}