/************************************************************************************************
* Data: 08/06/2024                                                                              *
* Desafio: Ex023 � Positivo ou negativo ou nulo                                                 *
* Institui��o de Ensino: Estudonauta                                                            *
* Disciplina: Linguagem C                                                                       *
* Professor: Gustavo Guanabara                                                                  *
* Aluno: D. K. Mariano                                                                          *
* Descri��o: Crie um programa que  receba do usu�rio um n�mero inteiro e informe se esse n�mero *
*            � positivo, negativo ou nulo.                                                      *
************************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    int num = 0;
    printf("\n======== ANALISADOR DE N�MEROS ========\n");
    printf("\nDigite um n�mero: ");
    scanf("%i", &num);
    if (num ==0){
        printf("\nO numero digitado � NULO.\n");
    }else if(num >0){
            printf("\nO numero digitado � POSITIVO.\n");
    }else{
        printf("\nO numero digitado � NEGATIVO.\n");
    }
}
