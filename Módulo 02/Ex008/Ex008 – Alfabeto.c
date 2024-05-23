/***************************************************************************************************************
* Data: 17/05/2024                                                                                             *
* Desafio: Ex008 – Alfabeto                                                                                    *
* Instituição de Ensino: Estudonauta                                                                           *
* Disciplina: Linguagem C                                                                                      *
* Professor: Gustavo Guanabara                                                                                 *
* Aluno: D. K. Mariano                                                                                         *
* Descrição: Crie um programa que solicite ao usuário uma letra e depois print qual letra anterior da digitada *
* e qual é a posterior.                                                                                        *
***************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    char antecessor = letra - 1;
    char sucessor = letra + 1;

    printf("\n-------<<< Análise da letra %c >>>------- \n", letra);
    printf("Letra anterior: %c", antecessor);
    printf("\nLetra posterior: %c\n", sucessor);

    return 0;
}
