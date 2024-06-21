/**********************************************************************************************************************
* Data: 22/05/2024                                                                                                    *
* Desafio: Ex015 � Bons alunos merecem parab�ns                                                                       *
* Institui��o de Ensino: Estudonauta                                                                                  *
* Disciplina: Linguagem C                                                                                             *
* Professor: Gustavo Guanabara                                                                                        *
* Aluno: D. K. Mariano                                                                                                *
* Descri��o: Programa para calcular a m�dia de um aluno e parabenizar se a m�dia for maior que 7.                     *
**********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclus�o da biblioteca utilizada para fun��es de manipula��o de strings como strcspn

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    float nota1 = 0, nota2 = 0, media = 0;

    printf("\n-------<<< CADASTRO DE ESTUDANTE >>>------- \n");

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha \n que fgets pode adicionar ao final da string.

    printf("Digite a nota da Primeira Avalia��o: ");
    scanf("%f", &nota1);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("Digite a nota da Segunda Avalia��o: ");
    scanf("%f", &nota2);
    while(getchar() != '\n'); // Limpa o buffer do teclado

    printf("\n--------- SITUA��O DO ALUNO ---------\n");

    media = (nota1 + nota2) / 2;
    if (media > 7) {
        printf("A m�dia de %s foi de %.1f. ", nome, media);
        printf("\nParab�ns, %s! Voc� foi APROVADO!\n", nome);
    } else {
        printf("A m�dia de %s foi de %.1f. ", nome, media);
        printf("\n%s foi REPROVADO!\n", nome);
    }

    return 0;
}
