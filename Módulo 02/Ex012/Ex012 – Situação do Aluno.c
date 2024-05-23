/********************************************************************************************************************
* Data: 19/05/2024                                                                                                  *
* Desafio: Ex012 � Situa��o do Aluno                                                                                *
* Institui��o de Ensino: Estudonauta                                                                                *
* Disciplina: Linguagem C                                                                                           *
* Professor: Gustavo Guanabara                                                                                      *
* Aluno: D. K. Mariano                                                                                              *
* Descri��o:Crie um programa que pergunte duas notas do usu�rio, calcule a m�dia e imprima na tela a m�dia do aluno *
* e foi se ele aprovado ou reprovado. A m�dia da escola � 5.                                                        *
********************************************************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclus�o da biblioteca utilizada para fun��es de manipula��o de strings como strcspn

int main(){

    setlocale(LC_ALL,"Portuguese");

    char nome[20];
    float nota1=0, nota2=0, media=0;

    printf("\n-------<<< Situa��o do Aluno >>>------- \n");

    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin); // L� uma linha de texto do usu�rio (incluindo espa�os) e armazena em nome.
    nome[strcspn(nome, "\n")] = 0; //remove o caractere de nova linha \n que fgets pode adicionar ao final da string.

    printf("Nota da Primeira Avalia��o: ");
    scanf("%f", &nota1);

    printf("Nota da Segunda Avalia��o: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\n-------------------------------");
    printf("\nM�dia do aluno: %.1f", media);
    printf("\nSitua��o do aluno: ");
    printf((media<7)?"REPROVADO!":"APROVADO!");

    return 0;

}
