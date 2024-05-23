/*************************************************************************************************************************
* Data: 17/05/2024                                                                                                       *
* Desafio: Ex007 – Dobro e Terça Parte                                                                                   *
* Instituição de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K.  Mariano                                                                                                  *
* Descrição: Crie um programa que solicite ao usuário um número e depois print na dela o dobro e a terça parte do núnero *
* digitado pelo usuário.                                                                                                 *
*************************************************************************************************************************/


#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int numero = 0, dobro = 0;
    float terca_parte = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    dobro = numero * 2;
    terca_parte = (float)numero / 3; // realizando casting / coerção (conversão de um tipo de dado em outro) dos dois inteiros

    printf("\n-------<<< Análise do número %d >>>------- \n", numero);
    printf("Dobro do número: %d\n", dobro);
    printf("Terça parte do número: %.2f\n", terca_parte);

    return 0;
}
