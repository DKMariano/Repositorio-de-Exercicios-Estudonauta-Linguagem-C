/**************************************************************************************************
* Data: 16/06/2024                                                                                *
* Desafio: Ex027 – Três valores em ordem                                                          *
* Instituição de Ensino: Estudonauta                                                              *
* Disciplina: Linguagem C                                                                         *
* Professor: Gustavo Guanabara                                                                    *
* Aluno: D. K. Mariano                                                                            *
* Descrição: Escreva um programa que receba do usuário três números inteiros e os imprima na tela *
*            de forma ordenada                                                                    *
**************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1 = 0, num2 = 0, num3 = 0;

    printf("Digite o primeiro número inteiro: ");
    scanf("%i", &num1);
    getchar();

    printf("Digite o segundo número inteiro: ");
    scanf("%i", &num2);
    getchar();

    printf("Digite o terceiro número inteiro: ");
    scanf("%i", &num3);
    getchar();

    printf("\n----------------------------------------------\n");

    if(num1 > num2 && num1 > num3 && num2 > num3){
        printf("MAIOR: %i \n", num1);
        printf("INTERMEDIÁRIO: %i \n", num2);
        printf("MENOR: %i \n\n", num3);

    }else if (num1 > num2 && num1 > num3 && num3 > num2){
        printf("MAIOR: %i \n", num1);
        printf("INTERMEDIÁRIO: %i \n", num3);
        printf("MENOR: %i \n\n", num2);

    }else if (num2 > num1 && num2 > num3 && num1 > num3){
        printf("MAIOR: %i \n", num2);
        printf("INTERMEDIÁRIO: %i \n", num1);
        printf("MENOR: %i \n\n", num3);

    }else if (num2 > num1 && num2 > num3 && num3 > num1){
        printf("MAIOR: %i \n", num2);
        printf("INTERMEDIÁRIO: %i \n", num3);
        printf("MENOR: %i \n\n", num1);

    }else if (num3 > num1 && num3 > num2 && num1 > num2){
        printf("MAIOR: %i \n", num3);
        printf("INTERMEDIÁRIO: %i \n", num1);
        printf("MENOR: %i \n\n", num2);

    }else if (num3 > num1 && num3 > num2 && num2 > num1){
        printf("MAIOR: %i \n", num3);
        printf("INTERMEDIÁRIO: %i \n", num2);
        printf("MENOR: %i \n\n", num1);

    }else {
        printf("Todos os números são iguas: %i, %i e %i", num1, num2, num3);
    }
}
