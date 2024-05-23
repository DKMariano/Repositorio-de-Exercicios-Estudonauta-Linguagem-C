/****************************************************************************************************************
* Data: 17/05/2024                                                                                              *
* Desafio: Ex010 � Pre�o do Produto                                                                             *
* Institui��o de Ensino: Estudonauta                                                                            *
* Disciplina: Linguagem C                                                                                       *
* Professor: Gustavo Guanabara                                                                                  *
* Aluno: D. K. Mariano                                                                                          *
* Descri��o:Crie um programa que calcule o desconto de um produto. Para isso, ele solicita ao usu�rio o nome do *
* produto, o seu pre�o original e a porcentagem de desconto a ser aplicada. Depois, o programa calcula e exibe  *
* o pre�o final do produto aplicado desconto.                                                                   *
****************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclus�o da biblioteca utilizada para fun��es de manipula��o de strings como strcspn


int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome_produto[20];
    double preco_produto=0, desconto=0, preco_desconto=0;

    printf("\n-------<<< Calculadora de Desconto >>>------- \n");

    printf("Nome do produto: ");
    fgets(nome_produto, 20, stdin); // L� uma linha de texto do usu�rio (incluindo espa�os) e armazena em nome.
    nome_produto[strcspn(nome_produto, "\n")] = 0; // Remove o caractere de nova linha (`\n`) do final do nome (digitado pressionando Enter).

    printf("Pre�o do %s: R$ ", nome_produto);
    scanf("%lf", &preco_produto);

    printf("Porcentagem de desconto: %% ");
    scanf("%lf", &desconto);

    preco_desconto = preco_produto*( 1 - desconto/100);

    printf("\n");
    printf("\nCalculando o valor do desconto do %s\n", nome_produto);
    printf("-------------------------------------------------\n");
    printf("O produto %s custava R$ %.2f.\n", nome_produto, preco_produto);
    printf("Por�m, foi subtra�do %.2f %% de desconto.\n", desconto);
    printf("Assim, o pre�o final ficou R$ %.2f.\n", preco_desconto);

    return 0;
}
