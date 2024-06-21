/*************************************************************************************************************************
* Data: 31/05/2024                                                                                                       *
* Desafio: Ex020 � Pre�o de Passagem                                                                                     *
* Institui��o de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descri��o: Crie um programa que calcule o pre�o de passagem com base na dist�ncia da viagem.                           *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("\n============== TABELA DE PRE�OS ==============\n");
    printf("Viagens at� 200 km \t\t R$ 0.50/km\n");
    printf("Viagens maiores que 200 km \t R$ 0.35/km\n");
    printf("----------------------------------------------\n");

    double distancia = 0, preco = 0;

    printf("Dist�ncia total da viagem (em km): ");
    scanf("%lf", &distancia);
    while (getchar() != '\n'); // Limpa o buffer do teclado

    if(distancia<=200){
        preco = distancia * 0.5;
        printf("\nUma viagem de %1.f ter� a taxa de km de R$ 0.50/km.\n", distancia);

    }else{
        preco = distancia * 0.35;
        printf("\nUma viagem de %1.f ter� a taxa de km de R$ 0.35/km.\n", distancia);
    }

    printf("Portanto, o valor da passagem � de R$ %1.f.\n", preco);

}
