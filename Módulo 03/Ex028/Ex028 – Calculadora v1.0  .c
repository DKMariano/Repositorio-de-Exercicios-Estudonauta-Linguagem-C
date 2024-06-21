/****************************************************************************************************************************
* Data: 16/06/2024                                                                                                          *
* Desafio: Ex028 – Calculadora v1.0                                                                                         *
* Instituição de Ensino: Estudonauta                                                                                        *
* Disciplina: Linguagem C                                                                                                   *
* Professor: Gustavo Guanabara                                                                                              *
* Aluno: D. K. Mariano                                                                                                      *
* Descrição: Crie um programa que simule uma calculadora simples em C. O programa deve realizar as quatro operações básicas *
*            (+, -, *, /) com dois números fornecidos pelo usuário                                                          *
****************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double valor1 = 0, valor2 = 0, valor3 = 0;
    char opcao;

    printf("\n-------------------------<<< CALCULADORA >>>------------------------- \n");

    printf("\nDigite o primeiro número: ");
    scanf("%lf", &valor1);
    while(getchar() != '\n');

    printf("Digite o segundo número: ");
    scanf("%lf", &valor2);
    while(getchar() != '\n');

    printf("\n============================= MENU ============================= \n");
    printf("(+) ADIÇÃO: Se quiser somar os números, digite \"+\". \n");
    printf("(-) SUBTRAÇÃO: Se quiser subtrair os números, digite \"-\". \n");
    printf("(*) MULTIPLICAÇÃO: Se quiser multiplicar os números, digite \"*\". \n");
    printf("(/) DIVISÃO: Se quiser dividir os números, digite \"/\".");
    printf("\n================================================================ \n");

    printf("\nDigite a sua opção: ");
    scanf(" %c", &opcao);
    while(getchar() != '\n');

    printf("\n---------------------------------------------------------- \n");

    switch(opcao){

        case '+':
            printf("\nVocê escolheu a opção ADIÇÃO:\n");
            valor3 = valor1 + valor2;
            printf("%lf + %lf = %lf \n", valor1, valor2, valor3);
            break;

        case '-':
            printf("\nVocê escolheu a opção SUBTRAÇÃO:\n");
            valor3 = valor1 - valor2;
            printf("%lf - %lf = %lf \n", valor1, valor2, valor3);
            break;
        case '*':
            printf("\nVocê escolheu a opção MULTIPLICAÇÃO:\n");
            valor3 = valor1 * valor2;
            printf("%lf * %lf = %lf \n", valor1, valor2, valor3);
            break;

        case '/':
            printf("\nVocê escolheu a opção DIVISÃO:\n");
            if(valor2 != 0){
                valor3 = valor1 / valor2;
                printf("%lf / %lf = %lf \n", valor1, valor2, valor3);
            }else{
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;

        default:
            printf("\nNão é possível realizar a OPERAÇÃO! \n");
            printf("A opção que você digitou é INVÁLIDA! \n");
    }

    printf("\n---------------------------------------------------------- \n");
    printf("\nObrigado por usar a nossa calculadora.");
    printf("\nPor favor, volte sempre.\n\n");
}
