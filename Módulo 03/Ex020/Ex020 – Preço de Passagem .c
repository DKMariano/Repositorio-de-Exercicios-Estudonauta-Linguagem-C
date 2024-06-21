/*************************************************************************************************************************
* Data: 31/05/2024                                                                                                       *
* Desafio: Ex020 – Preço de Passagem                                                                                     *
* Instituição de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descrição: Crie um programa que calcule o preço de passagem com base na distância da viagem.                           *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    printf("\n============== TABELA DE PREÇOS ==============\n");
    printf("Viagens até 200 km \t\t R$ 0.50/km\n");
    printf("Viagens maiores que 200 km \t R$ 0.35/km\n");
    printf("----------------------------------------------\n");

    double distancia = 0, preco = 0;

    printf("Distância total da viagem (em km): ");
    scanf("%lf", &distancia);
    while (getchar() != '\n'); // Limpa o buffer do teclado

    if(distancia<=200){
        preco = distancia * 0.5;
        printf("\nUma viagem de %1.f terá a taxa de km de R$ 0.50/km.\n", distancia);

    }else{
        preco = distancia * 0.35;
        printf("\nUma viagem de %1.f terá a taxa de km de R$ 0.35/km.\n", distancia);
    }

    printf("Portanto, o valor da passagem é de R$ %1.f.\n", preco);

}
