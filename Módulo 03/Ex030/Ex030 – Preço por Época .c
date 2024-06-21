/***********************************************************************************************
* Data: 20/06/2024                                                                             *
* Desafio: Ex030 – Preço por Época                                                             *
* Instituição de Ensino: Estudonauta                                                           *
* Disciplina: Linguagem C                                                                      *
* Professor: Gustavo Guanabara                                                                 *
* Aluno: D. K. Mariano                                                                         *
* Descrição: Calculadora que ajusta o preço de um produto com base em diferentes épocas do ano *
***********************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double preco = 0, novo_preco = 0;
    char opcao;

    printf("\n---------------<<< CALCULADORA DE PREÇO >>>--------------- \n");

    printf("\nDigite o preço do produto: R$");
    scanf("%lf", &preco);
    while(getchar() != '\n');

    printf("\n=================== ESCOLHA UM PERÍODO =================== \n");
    printf("(1) CARNAVAL \n");
    printf("(2) FÉRIAS ESCOLARES \n");
    printf("(3) DIAS DAS CRIANÇAS \n");
    printf("(4) BLACK FRIDAY \n");
    printf("(5) NATAL ");
    printf("\n========================================================== \n");


    printf("\nQual a opção desejada? ");
    scanf(" %c", &opcao);
    while(getchar() != '\n');

   printf("\n---------------------------------------------------------- \n");;

    switch(opcao){
        case '1':
            novo_preco = preco * 1.1;
            printf("\nNa época de CARNAVAL, o produto custará R$ %.2f. \n", novo_preco);
            break;
        case '2':
            novo_preco = preco * 1.2;
               printf("\nNa época de FÉRIAS ESCOLARES, o produto custará R$ %.2f. \n", novo_preco);
            break;
        case '3':
            novo_preco = preco * 1.05;
            printf("\nNa época de DIAS DAS CRIANÇAS, o produto custará R$ %.2f. \n", novo_preco);
            break;
        case '4':
            novo_preco = preco * 0.7;
            printf("\nNa época de BLACK FRIDAY, o produto custará R$ %.2f. \n", novo_preco);
            break;
        case '5':
            novo_preco = preco * 0.95;
            printf("\nNa época de NATAL, o produto custará R$ %.2f. \n", novo_preco);
            break;
        default:

            printf("Em épocas assim, mantenha o preço do produto em R$ %.2f. \n", preco);
            break;
    }

    printf("\n---------------------------------------------------------- \n");;
    printf("\nObrigado por usar nossa calculadora. \n");
    printf("Por favor, volte sempre \n\n");
}
