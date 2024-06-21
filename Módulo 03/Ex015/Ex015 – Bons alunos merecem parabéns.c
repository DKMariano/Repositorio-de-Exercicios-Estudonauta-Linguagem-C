/**********************************************************************************************************************
* Data: 22/05/2024                                                                                                    *
* Desafio: Ex015 – Bons alunos merecem parabéns                                                                       *
* Instituição de Ensino: Estudonauta                                                                                  *
* Disciplina: Linguagem C                                                                                             *
* Professor: Gustavo Guanabara                                                                                        *
* Aluno: D. K. Mariano                                                                                                *
* Descrição: Programa para calcular a média de um aluno e parabenizar se a média for maior que 7.                     *
**********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclusão da biblioteca utilizada para funções de manipulação de strings como strcspn

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    float nota1 = 0, nota2 = 0, media = 0;

    printf("\n-------<<< CADASTRO DE ESTUDANTE >>>------- \n");

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha \n que fgets pode adicionar ao final da string.

    printf("Digite a nota da Primeira Avaliação: ");
    scanf("%f", &nota1);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("Digite a nota da Segunda Avaliação: ");
    scanf("%f", &nota2);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("\n--------- SITUAÇÃO DO ALUNO ---------\n");

    media = (nota1 + nota2) / 2;
    if (media > 7) {
        printf("A média de %s foi de %.1f. ", nome, media);
        printf("\nParabéns, %s! Você foi APROVADO!\n", nome);
    } else {
        printf("A média de %s foi de %.1f. ", nome, media);
        printf("\n%s foi REPROVADO!\n", nome);
    }

    return 0;
}
