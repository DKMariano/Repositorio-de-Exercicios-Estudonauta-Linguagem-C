/****************************************************************************************************************
* Data: 17/05/2024                                                                                              *
* Desafio: Ex010 – Preço do Produto                                                                             *
* Instituição de Ensino: Estudonauta                                                                            *
* Disciplina: Linguagem C                                                                                       *
* Professor: Gustavo Guanabara                                                                                  *
* Aluno: D. K. Mariano                                                                                          *
* Descrição:Crie um programa que calcule o desconto de um produto. Para isso, ele solicita ao usuário o nome do *
* produto, o seu preço original e a porcentagem de desconto a ser aplicada. Depois, o programa calcula e exibe  *
* o preço final do produto aplicado desconto.                                                                   *
****************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclusão da biblioteca utilizada para funções de manipulação de strings como strcspn


int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome_produto[20];
    double preco_produto=0, desconto=0, preco_desconto=0;

    printf("\n-------<<< Calculadora de Desconto >>>------- \n");

    printf("Nome do produto: ");
    fgets(nome_produto, 20, stdin); // Lê uma linha de texto do usuário (incluindo espaços) e armazena em nome.
    nome_produto[strcspn(nome_produto, "\n")] = 0; // Remove o caractere de nova linha (`\n`) do final do nome (digitado pressionando Enter).

    printf("Preço do %s: R$ ", nome_produto);
    scanf("%lf", &preco_produto);

    printf("Porcentagem de desconto: %% ");
    scanf("%lf", &desconto);

    preco_desconto = preco_produto*( 1 - desconto/100);

    printf("\n");
    printf("\nCalculando o valor do desconto do %s\n", nome_produto);
    printf("-------------------------------------------------\n");
    printf("O produto %s custava R$ %.2f.\n", nome_produto, preco_produto);
    printf("Porém, foi subtraído %.2f %% de desconto.\n", desconto);
    printf("Assim, o preço final ficou R$ %.2f.\n", preco_desconto);

    return 0;
}
