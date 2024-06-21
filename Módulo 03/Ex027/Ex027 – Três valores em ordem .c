/**************************************************************************************************
* Data: 16/06/2024                                                                                *
* Desafio: Ex027 � Tr�s valores em ordem                                                          *
* Institui��o de Ensino: Estudonauta                                                              *
* Disciplina: Linguagem C                                                                         *
* Professor: Gustavo Guanabara                                                                    *
* Aluno: D. K. Mariano                                                                            *
* Descri��o: Escreva um programa que receba do usu�rio tr�s n�meros inteiros e os imprima na tela *
*            de forma ordenada                                                                    *
**************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1 = 0, num2 = 0, num3 = 0;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%i", &num1);
    getchar();

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%i", &num2);
    getchar();

    printf("Digite o terceiro n�mero inteiro: ");
    scanf("%i", &num3);
    getchar();

    printf("\n----------------------------------------------\n");

    if(num1 > num2 && num1 > num3 && num2 > num3){
        printf("MAIOR: %i \n", num1);
        printf("INTERMEDI�RIO: %i \n", num2);
        printf("MENOR: %i \n\n", num3);

    }else if (num1 > num2 && num1 > num3 && num3 > num2){
        printf("MAIOR: %i \n", num1);
        printf("INTERMEDI�RIO: %i \n", num3);
        printf("MENOR: %i \n\n", num2);

    }else if (num2 > num1 && num2 > num3 && num1 > num3){
        printf("MAIOR: %i \n", num2);
        printf("INTERMEDI�RIO: %i \n", num1);
        printf("MENOR: %i \n\n", num3);

    }else if (num2 > num1 && num2 > num3 && num3 > num1){
        printf("MAIOR: %i \n", num2);
        printf("INTERMEDI�RIO: %i \n", num3);
        printf("MENOR: %i \n\n", num1);

    }else if (num3 > num1 && num3 > num2 && num1 > num2){
        printf("MAIOR: %i \n", num3);
        printf("INTERMEDI�RIO: %i \n", num1);
        printf("MENOR: %i \n\n", num2);

    }else if (num3 > num1 && num3 > num2 && num2 > num1){
        printf("MAIOR: %i \n", num3);
        printf("INTERMEDI�RIO: %i \n", num2);
        printf("MENOR: %i \n\n", num1);

    }else {
        printf("Todos os n�meros s�o iguas: %i, %i e %i", num1, num2, num3);
    }
}
