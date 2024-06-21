/*************************************************************************************************************************
* Data: 31/05/2024                                                                                                       *
* Desafio: Ex021 – Inverso ou oposto                                                                                     *
* Instituição de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descrição: Crie um programa que recebe um número do usuário e verfica se é positivo ou negativo. Caso seja positivo, o *
* programa calcula o iverso desse número e exibe na tela. Se for negativo, o programa calcula e mostra seu o oposto do   *
* número                                                                                                                 *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float numero1 = 0, oposto = 0, inverso = 0;

    printf("Digite um número: ");
    scanf("%f", &numero1);
    while (getchar() != '\n'); // Limpa o buffer do teclado

    if(numero1 > 0){
        inverso = 1 / numero1 ;
        printf("O inverso é igual a %.4f.\n", inverso);
    }else{
        oposto = numero1 * (-1);
        printf("O oposto é igual a %.of.\n", oposto);
    }

}
