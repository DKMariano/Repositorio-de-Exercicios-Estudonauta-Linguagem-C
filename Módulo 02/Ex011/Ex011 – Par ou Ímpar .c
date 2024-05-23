/****************************************************************************************************************
* Data: 17/05/2024                                                                                              *
* Desafio: Ex011 – Par ou Ímpar                                                                                 *
* Instituição de Ensino: Estudonauta                                                                            *
* Disciplina: Linguagem C                                                                                       *
* Professor: Gustavo Guanabara                                                                                  *
* Aluno: D. K. Mariano                                                                                          *
* Descrição:Crie um programa que verifique se um número dado pelo usuário é par ou ímpar.                       *
****************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero=0;

    printf("Digite um número qualquer: ");
    scanf("%d", &numero);

    printf((numero%2==0)?"O número %d é PAR!":"O número %d é ÍMPAR!", numero, numero);

}
