/*2. O programa a seguir � correto?

main()
{
	printf("Linguagem C");
    system("pause"); 
}

Solu��o:

O c�digo n�o � correto. A fun��o main n�o tem um tipo definido e n�o tem um valor de retorno (n�o sendo uma fun��o do tipo void)
*/

#include <stdio.h> // Biblioteca para a chamada de printf e getchar
int main() // função principal, por padrão deve ser do tipo int
{
	printf("Linguagem C\n"); // imprime sequencia de caracteres na tela (saida padrão)
    getchar(); // system("pause");  opção linux para system-pause
    return 0; // valor de retorno da função principal, informa o SO que o programa executou com sucesso
}