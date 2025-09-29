
#include <stdio.h>
#include <stdlib.h>

int main(){

    int participante1, participante2, participante3, totalPontos;
    float premio1, premio2, premio3;

    const int premio = 780000;


    printf("Digite a pontuação de cada participante: ");
    printf("\nParticipante 1: ");
    scanf("%d", &participante1);
    printf("\nParticipante 2: ");
    scanf("%d", &participante2);
    printf("\nParticipante 3:");
    scanf("%d", &participante3);
    
    totalPontos=participante1 + participante2 + participante3;
    


    //Fórmulas com base em regra de 3
    //totalPontos está para premio assim como participante 1 está para x

    premio1 = (premio*participante1)/totalPontos;
    premio2 = (premio*participante2)/totalPontos;
    premio3 = premio - (premio1+premio2);



    printf("\nParticipante 1: %.2f reais\nParticipante 2: %.2f reais\nParticipante 3: %.2f reais", premio1, premio2, premio3);

    return 0;
}