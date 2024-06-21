/****************************************************************************************************************************
* Data: 16/06/2024                                                                                                          *
* Desafio: Ex028 � Calculadora v1.0                                                                                         *
* Institui��o de Ensino: Estudonauta                                                                                        *
* Disciplina: Linguagem C                                                                                                   *
* Professor: Gustavo Guanabara                                                                                              *
* Aluno: D. K. Mariano                                                                                                      *
* Descri��o: Crie um programa que simule uma calculadora simples em C. O programa deve realizar as quatro opera��es b�sicas *
*            (+, -, *, /) com dois n�meros fornecidos pelo usu�rio                                                          *
****************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double valor1 = 0, valor2 = 0, valor3 = 0;
    char opcao;

    printf("\n-------------------------<<< CALCULADORA >>>------------------------- \n");

    printf("\nDigite o primeiro n�mero: ");
    scanf("%lf", &valor1);
    while(getchar() != '\n');

    printf("Digite o segundo n�mero: ");
    scanf("%lf", &valor2);
    while(getchar() != '\n');

    printf("\n============================= MENU ============================= \n");
    printf("(+) ADI��O: Se quiser somar os n�meros, digite \"+\". \n");
    printf("(-) SUBTRA��O: Se quiser subtrair os n�meros, digite \"-\". \n");
    printf("(*) MULTIPLICA��O: Se quiser multiplicar os n�meros, digite \"*\". \n");
    printf("(/) DIVIS�O: Se quiser dividir os n�meros, digite \"/\".");
    printf("\n================================================================ \n");

    printf("\nDigite a sua op��o: ");
    scanf(" %c", &opcao);
    while(getchar() != '\n');

    printf("\n---------------------------------------------------------- \n");

    switch(opcao){

        case '+':
            printf("\nVoc� escolheu a op��o ADI��O:\n");
            valor3 = valor1 + valor2;
            printf("%lf + %lf = %lf \n", valor1, valor2, valor3);
            break;

        case '-':
            printf("\nVoc� escolheu a op��o SUBTRA��O:\n");
            valor3 = valor1 - valor2;
            printf("%lf - %lf = %lf \n", valor1, valor2, valor3);
            break;
        case '*':
            printf("\nVoc� escolheu a op��o MULTIPLICA��O:\n");
            valor3 = valor1 * valor2;
            printf("%lf * %lf = %lf \n", valor1, valor2, valor3);
            break;

        case '/':
            printf("\nVoc� escolheu a op��o DIVIS�O:\n");
            if(valor2 != 0){
                valor3 = valor1 / valor2;
                printf("%lf / %lf = %lf \n", valor1, valor2, valor3);
            }else{
                printf("Erro: Divis�o por zero n�o � permitida.\n");
            }
            break;

        default:
            printf("\nN�o � poss�vel realizar a OPERA��O! \n");
            printf("A op��o que voc� digitou � INV�LIDA! \n");
    }

    printf("\n---------------------------------------------------------- \n");
    printf("\nObrigado por usar a nossa calculadora.");
    printf("\nPor favor, volte sempre.\n\n");
}
