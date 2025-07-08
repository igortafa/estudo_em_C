/* 1. Um dos alunos preparou o seguinte programa e apresentou-o para ser avaliado. Ajude-o.

int Main{}
(
    printf(Existem %d semanas no ano., 52);
    cout<<end1;
    system("PAUSE");
    return 0;
)
*/

//Solução:

#include <stdio.h>

int main() //Os par�nteses e as chaves foram invertidos e a palavra reservada main estava com a inicial mai�scula.
{
	printf("Existem %d semanas no ano.\n", 52); //Foram adicionadas aspas duplas para indicar sequencia de caractere.
    //cout<<end1; <�-- Linha removida. Cout n�o � um comando de C.
    return 0;
}