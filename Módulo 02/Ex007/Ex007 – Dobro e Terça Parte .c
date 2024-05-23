/*************************************************************************************************************************
* Data: 17/05/2024                                                                                                       *
* Desafio: Ex007 � Dobro e Ter�a Parte                                                                                   *
* Institui��o de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K.  Mariano                                                                                                  *
* Descri��o: Crie um programa que solicite ao usu�rio um n�mero e depois print na dela o dobro e a ter�a parte do n�nero *
* digitado pelo usu�rio.                                                                                                 *
*************************************************************************************************************************/


#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int numero = 0, dobro = 0;
    float terca_parte = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    dobro = numero * 2;
    terca_parte = (float)numero / 3; // realizando casting / coer��o (convers�o de um tipo de dado em outro) dos dois inteiros

    printf("\n-------<<< An�lise do n�mero %d >>>------- \n", numero);
    printf("Dobro do n�mero: %d\n", dobro);
    printf("Ter�a parte do n�mero: %.2f\n", terca_parte);

    return 0;
}
