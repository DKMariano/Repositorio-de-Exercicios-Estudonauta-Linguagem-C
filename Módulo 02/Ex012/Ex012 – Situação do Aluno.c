/********************************************************************************************************************
* Data: 19/05/2024                                                                                                  *
* Desafio: Ex012 – Situação do Aluno                                                                                *
* Instituição de Ensino: Estudonauta                                                                                *
* Disciplina: Linguagem C                                                                                           *
* Professor: Gustavo Guanabara                                                                                      *
* Aluno: D. K. Mariano                                                                                              *
* Descrição:Crie um programa que pergunte duas notas do usuário, calcule a média e imprima na tela a média do aluno *
* e foi se ele aprovado ou reprovado. A média da escola é 5.                                                        *
********************************************************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclusão da biblioteca utilizada para funções de manipulação de strings como strcspn

int main(){

    setlocale(LC_ALL,"Portuguese");

    char nome[20];
    float nota1=0, nota2=0, media=0;

    printf("\n-------<<< Situação do Aluno >>>------- \n");

    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin); // Lê uma linha de texto do usuário (incluindo espaços) e armazena em nome.
    nome[strcspn(nome, "\n")] = 0; //remove o caractere de nova linha \n que fgets pode adicionar ao final da string.

    printf("Nota da Primeira Avaliação: ");
    scanf("%f", &nota1);

    printf("Nota da Segunda Avaliação: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\n-------------------------------");
    printf("\nMédia do aluno: %.1f", media);
    printf("\nSituação do aluno: ");
    printf((media<7)?"REPROVADO!":"APROVADO!");

    return 0;

}
