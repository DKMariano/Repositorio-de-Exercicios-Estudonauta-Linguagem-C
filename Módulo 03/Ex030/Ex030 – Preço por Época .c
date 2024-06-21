/***********************************************************************************************
* Data: 20/06/2024                                                                             *
* Desafio: Ex030 � Pre�o por �poca                                                             *
* Institui��o de Ensino: Estudonauta                                                           *
* Disciplina: Linguagem C                                                                      *
* Professor: Gustavo Guanabara                                                                 *
* Aluno: D. K. Mariano                                                                         *
* Descri��o: Calculadora que ajusta o pre�o de um produto com base em diferentes �pocas do ano *
***********************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double preco = 0, novo_preco = 0;
    char opcao;

    printf("\n---------------<<< CALCULADORA DE PRE�O >>>--------------- \n");

    printf("\nDigite o pre�o do produto: R$");
    scanf("%lf", &preco);
    while(getchar() != '\n');

    printf("\n=================== ESCOLHA UM PER�ODO =================== \n");
    printf("(1) CARNAVAL \n");
    printf("(2) F�RIAS ESCOLARES \n");
    printf("(3) DIAS DAS CRIAN�AS \n");
    printf("(4) BLACK FRIDAY \n");
    printf("(5) NATAL ");
    printf("\n========================================================== \n");


    printf("\nQual a op��o desejada? ");
    scanf(" %c", &opcao);
    while(getchar() != '\n');

   printf("\n---------------------------------------------------------- \n");;

    switch(opcao){
        case '1':
            novo_preco = preco * 1.1;
            printf("\nNa �poca de CARNAVAL, o produto custar� R$ %.2f. \n", novo_preco);
            break;
        case '2':
            novo_preco = preco * 1.2;
               printf("\nNa �poca de F�RIAS ESCOLARES, o produto custar� R$ %.2f. \n", novo_preco);
            break;
        case '3':
            novo_preco = preco * 1.05;
            printf("\nNa �poca de DIAS DAS CRIAN�AS, o produto custar� R$ %.2f. \n", novo_preco);
            break;
        case '4':
            novo_preco = preco * 0.7;
            printf("\nNa �poca de BLACK FRIDAY, o produto custar� R$ %.2f. \n", novo_preco);
            break;
        case '5':
            novo_preco = preco * 0.95;
            printf("\nNa �poca de NATAL, o produto custar� R$ %.2f. \n", novo_preco);
            break;
        default:

            printf("Em �pocas assim, mantenha o pre�o do produto em R$ %.2f. \n", preco);
            break;
    }

    printf("\n---------------------------------------------------------- \n");;
    printf("\nObrigado por usar nossa calculadora. \n");
    printf("Por favor, volte sempre \n\n");
}
