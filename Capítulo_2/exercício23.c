
#include <stdio.h>
#include <stdlib.h>

int main(){

    int diasTrabalhados, porcentagemDesconto = 8, diaria = 20, salarioLiquido, salarioBruto;

    printf("Quantos dias o encanador trabalhou?");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diaria * diasTrabalhados;

    //o salário liquido é igual ao salário bruto - 8% do salário bruto
    salarioLiquido = salarioBruto - ((salarioBruto/100)*8);

    printf("\nO encanador recebeu %d reais.\n", salarioLiquido);

    return 0;
}