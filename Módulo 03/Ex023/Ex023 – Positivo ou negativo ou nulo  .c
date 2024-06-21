/************************************************************************************************
* Data: 08/06/2024                                                                              *
* Desafio: Ex023 – Positivo ou negativo ou nulo                                                 *
* Instituição de Ensino: Estudonauta                                                            *
* Disciplina: Linguagem C                                                                       *
* Professor: Gustavo Guanabara                                                                  *
* Aluno: D. K. Mariano                                                                          *
* Descrição: Crie um programa que  receba do usuário um número inteiro e informe se esse número *
*            é positivo, negativo ou nulo.                                                      *
************************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    int num = 0;
    printf("\n======== ANALISADOR DE NÚMEROS ========\n");
    printf("\nDigite um número: ");
    scanf("%i", &num);
    if (num ==0){
        printf("\nO numero digitado é NULO.\n");
    }else if(num >0){
            printf("\nO numero digitado é POSITIVO.\n");
    }else{
        printf("\nO numero digitado é NEGATIVO.\n");
    }
}
