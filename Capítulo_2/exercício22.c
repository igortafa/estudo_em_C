
#include <stdio.h>
#include <stdlib.h>

int main(){

    float quilosCobre, quilosZinco;
    int quilosLatao;

    printf("\nQuantos quilos de latao deseja produzir?");
    scanf("%d", &quilosLatao);

    //Para cada quilo de latão, é necessário 3 quilos de zinco e 7 quilos de cobre.
    quilosZinco = (quilosLatao/10)*3;
    quilosCobre = quilosLatao-quilosZinco;

    printf("\nSão necessarios %.1f quilos de zinco e %.1f quilos de cobre.\n", quilosZinco, quilosCobre);


    return 0;
}