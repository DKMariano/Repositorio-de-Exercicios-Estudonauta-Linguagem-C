/*************************************************************************************************************************
* Data: 31/05/2024                                                                                                       *
* Desafio: Ex021 � Inverso ou oposto                                                                                     *
* Institui��o de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descri��o: Crie um programa que recebe um n�mero do usu�rio e verfica se � positivo ou negativo. Caso seja positivo, o *
* programa calcula o iverso desse n�mero e exibe na tela. Se for negativo, o programa calcula e mostra seu o oposto do   *
* n�mero                                                                                                                 *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero1 = 0, oposto = 0, inverso = 0;

    printf("Digite um n�mero: ");
    scanf("%f", &numero1);
    while (getchar() != '\n'); // Limpa o buffer do teclado

    if(numero1 > 0){
        inverso = 1 / numero1 ;
        printf("O inverso � igual a %.4f.\n", inverso);
    }else{
        oposto = numero1 * (-1);
        printf("O oposto � igual a %.of.\n", oposto);
    }

}
