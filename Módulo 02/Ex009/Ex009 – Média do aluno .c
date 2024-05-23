/***************************************************************************************************************
* Data: 17/05/2024                                                                                             *
* Desafio: Ex009 � M�dia do aluno                                                                              *
* Institui��o de Ensino: Estudonauta                                                                           *
* Disciplina: Linguagem C                                                                                      *
* Professor: Gustavo Guanabara                                                                                 *
* Aluno: D. K. Mariano                                                                                         *
* Descri��o: Crie um programa que solicite ao usu�rio o nome e as duas notas do aluno. Depois, o programa deve *
* calcular a m�dia das notas e mostrar na tela a situa��o do aluno                                             *
***************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclus�o da biblioteca utilizada para fun��es de manipula��o de strings como strcspn


int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    float nota1=0, nota2=0, media=0;

    printf("\n");
    printf("\n-------------------------------------<<< CADASTRO DE ALUNO >>>-----------------------------------\n");


    printf("\nNome do aluno: ");
    fgets(nome,sizeof(nome), stdin); // L� uma linha de texto do usu�rio (incluindo espa�os) e armazena em nome1.
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha (`\n`) do final do nome (digitado pressionando Enter).

    printf("\nNota da Primeira Avalia��o: ");
    scanf("%f", &nota1);

    printf("\n");
    printf("Nota da Segunda Avalia��o: ");
    scanf("%f", &nota2);

    media = (nota1+nota2) / 2;

    printf("\n");
    printf("\nAn�lise do desempenho estudantil do aluno %s\n", nome);
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("O aluno %s tirou nota %.1f na Primeira Avalia��o e nota %.1f na Segunda Avalia��o. ",nome,  nota1, nota2);
    printf("\nLogo, a m�dia do aluno %s � %.1f.\n", nome, media);

    return 0;
}
