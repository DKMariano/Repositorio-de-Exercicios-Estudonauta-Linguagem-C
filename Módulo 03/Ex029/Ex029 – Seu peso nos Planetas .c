/****************************************************************************************************************************
* Data: 20/06/2024                                                                                                          *
* Desafio: Ex029 – Seu peso nos Planetas                                                                                    *
* Instituição de Ensino: Estudonauta                                                                                        *
* Disciplina: Linguagem C                                                                                                   *
* Professor: Gustavo Guanabara                                                                                              *
* Aluno: D. K. Mariano                                                                                                      *
* Descrição: Crie um um programa em C que calcula o peso de uma pessoa em diferentes planetas do Sistema Solar com base em  *
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
    printf("(1) MERCÚRIO: Se quiser saber seu peso no planeja Mercúrio, digite 1. \n");
    printf("(2) VÊNUS: Se quiser saber seu peso no planeja Vênus, digite 2. \n");
    printf("(3) MARTE: Se quiser saber seu peso no planeja Marte, digite 3. \n");
    printf("(4) JÚPITER: Se quiser saber seu peso no planeja Júpiter, digite 4. \n");
    printf("(5) SATURNO: Se quiser saber seu peso no planeja Saturno, digite 5. \n");
    printf("(6) URANO: Se quiser saber seu peso no planeja Urano, digite 6. \n");
    printf("\n================================================ \n");

    printf("\n Digite a opção desejada: ");
    scanf("%i", &opcao);
    while(getchar() != '\n');

    printf("\n-------------------------------------------------------------------- \n");

    switch(opcao){
        case 1:
            peso_extraterrestre = peso_terra * 0.37;
            printf("\n Seu peso em MERCÚRIO é igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 2:
            peso_extraterrestre = peso_terra * 0.88;
            printf("\n Seu peso em VÊNUS é igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 3:
            peso_extraterrestre = peso_terra * 0.38;
            printf("\n Seu peso em MARTE é igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 4:
            peso_extraterrestre = peso_terra * 2.64;
            printf("\n Seu peso em JÚPITER é igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 5:
            peso_extraterrestre = peso_terra * 1.15;
            printf("\n Seu peso em SATURNO é igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        case 6:
            peso_extraterrestre = peso_terra * 1.17;
            printf("\n Seu peso em URANO é igual a %.2f kgs.\n", peso_extraterrestre);
            break;
        default:
            printf("\n OPÇÃO INVÁLIDA!");
            printf("\n Tente novamente\n\n");

    }

    printf("\n-------------------------------------------------------------------- \n");
    printf("\nObrigado por usar a nossa calculadora!\n");
    printf("Por favor, volte sempre.\n\n");
}
