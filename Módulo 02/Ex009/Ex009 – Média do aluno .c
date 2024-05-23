/***************************************************************************************************************
* Data: 17/05/2024                                                                                             *
* Desafio: Ex009 – Média do aluno                                                                              *
* Instituição de Ensino: Estudonauta                                                                           *
* Disciplina: Linguagem C                                                                                      *
* Professor: Gustavo Guanabara                                                                                 *
* Aluno: D. K. Mariano                                                                                         *
* Descrição: Crie um programa que solicite ao usuário o nome e as duas notas do aluno. Depois, o programa deve *
* calcular a média das notas e mostrar na tela a situação do aluno                                             *
***************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclusão da biblioteca utilizada para funções de manipulação de strings como strcspn


int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    float nota1=0, nota2=0, media=0;

    printf("\n");
    printf("\n-------------------------------------<<< CADASTRO DE ALUNO >>>-----------------------------------\n");


    printf("\nNome do aluno: ");
    fgets(nome,sizeof(nome), stdin); // Lê uma linha de texto do usuário (incluindo espaços) e armazena em nome1.
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha (`\n`) do final do nome (digitado pressionando Enter).

    printf("\nNota da Primeira Avaliação: ");
    scanf("%f", &nota1);

    printf("\n");
    printf("Nota da Segunda Avaliação: ");
    scanf("%f", &nota2);

    media = (nota1+nota2) / 2;

    printf("\n");
    printf("\nAnálise do desempenho estudantil do aluno %s\n", nome);
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("O aluno %s tirou nota %.1f na Primeira Avaliação e nota %.1f na Segunda Avaliação. ",nome,  nota1, nota2);
    printf("\nLogo, a média do aluno %s é %.1f.\n", nome, media);

    return 0;
}
