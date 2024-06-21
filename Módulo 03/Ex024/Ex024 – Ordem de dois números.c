/**************************************************************************************************
* Data: 08/06/2024                                                                                *
* Desafio: Ex024 � Ordem de dois n�meros                                                          *
* Institui��o de Ensino: Estudonauta                                                              *
* Disciplina: Linguagem C                                                                         *
* Professor: Gustavo Guanabara                                                                    *
* Aluno: D. K. Mariano                                                                            *
* Descri��o: Crie um programa que  receba do usu�rio dois n�meros e os coloque em ordem crescente *
**************************************************************************************************/

#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    double num1 = 0, num2 = 0;

    printf("\n======== ORGANIZADOR DE N�MEROS ========\n");

    printf("\nDigite o primeiro n�mero: ");
    scanf("%lf", &num1);

    printf("\nDigite o segundo n�mero: ");
    scanf("%lf", &num2);

    if (num1 == num2){
        printf("\nA ordem crescente dos n�meros digitados � %.2f e %.2f. \n", num1, num2);
    }else{
        if(num1 > num2){
            printf("\nA ordem crescente dos n�meros digitados � %.2f e %.2f. \n", num2, num1);
        }else{
            printf("\nA ordem crescente dos n�meros digitados � %.2f e %.2f. \n", num1, num2);
        }
    }
}
