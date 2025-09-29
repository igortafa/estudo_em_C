//NÃO CONCLUÍDO, EM ANDAMENTO


#include <stdio.h>
#include <stdlib.h>

int main(){

    //declaração de variáveis
    int cabecas, pes, coelhos, patos;
    

    //Solicitando os dados para o usuário
    printf("Insira o número de cabeças: ");
    scanf("%d", &cabecas);
    printf("Insira o número de pes: ");
    scanf("%d", &pes);


    //Verifica o máximo e mínimo possível de pés
    int maxPes = cabecas*4;
    int minPes = cabecas*2;

    if (maxPes < pes || minPes > pes){
        printf("Quantidade de pes desproporcional!");
    }else{
    //Solução com base em sistemas de duas variáveis
    coelhos = (pes-(cabecas*2))/2;
    patos = cabecas-coelhos;

    printf("\nO cercado tem %d coelhos e %d patos.\n", coelhos, patos);
    }
    

    return 0;
}