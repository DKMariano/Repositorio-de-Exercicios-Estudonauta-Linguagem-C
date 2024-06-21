/****************************************************************************************************************************
* Data: 20/06/2024                                                                                                          *
* Desafio: Ex029 � Seu peso nos Planetas                                                                                    *
* Institui��o de Ensino: Estudonauta                                                                                        *
* Disciplina: Linguagem C                                                                                                   *
* Professor: Gustavo Guanabara                                                                                              *
* Aluno: D. K. Mariano                                                                                                      *
* Descri��o: Crie um um programa em C que calcula o peso de uma pessoa em diferentes planetas do Sistema Solar com base em  *
*            seu peso na Terra.                                                                                             *
****************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float peso_terra = 0, peso_extraterrestre = 0;
    int opcao = 0;

    printf("\n-------------<<< CALCULADORA DE PESO EXTRATERRESTRE >>>------------- \n");

    printf("Digite seu peso no planeta Terra: ");
    scanf("%f", &peso_terra);
    while(getchar() != '\n');

    printf("\n============== ESCOLHA UM PLANETA ============== \n");
    printf("(1) MERC�RIO: Se quiser saber seu peso no planeja Merc�rio, digite 1. \n");
    printf("(2) V�NUS: Se quiser saber seu peso no planeja V�nus, digite 2. \n");
    printf("(3) MARTE: Se quiser saber seu peso no planeja Marte, digite 3. \n");
    printf("(4) J�PITER: Se quiser saber seu peso no planeja J�piter, digite 4. \n");
    printf("(5) SATURNO: Se quiser saber seu peso no planeja Saturno, digite 5. \n");
    printf("(6) URANO: Se quiser saber seu peso no planeja Urano, digite 6. \n");
    printf("\n================================================ \n");

    printf("\n Digite a op��o desejada: ");
    scanf("%i", &opcao);
    while(getchar() != '\n');

    printf("\n-------------------------------------------------------------------- \n");

    switch(opcao){
        case 1:
            peso_extraterrestre = peso_terra * 0.37;
            printf("\n Seu peso em MERC�RIO � igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 2:
            peso_extraterrestre = peso_terra * 0.88;
            printf("\n Seu peso em V�NUS � igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 3:
            peso_extraterrestre = peso_terra * 0.38;
            printf("\n Seu peso em MARTE � igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 4:
            peso_extraterrestre = peso_terra * 2.64;
            printf("\n Seu peso em J�PITER � igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 5:
            peso_extraterrestre = peso_terra * 1.15;
            printf("\n Seu peso em SATURNO � igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 6:
            peso_extraterrestre = peso_terra * 1.17;
            printf("\n Seu peso em URANO � igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        default:
            printf("\n OP��O INV�LIDA!");
            printf("\n Tente novamente\n\n");

    }

    printf("\n-------------------------------------------------------------------- \n");
    printf("\nObrigado por usar a nossa calculadora!\n");
    printf("Por favor, volte sempre.\n\n");
}
