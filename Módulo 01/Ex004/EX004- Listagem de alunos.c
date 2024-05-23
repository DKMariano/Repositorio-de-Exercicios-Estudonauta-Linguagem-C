/***********************************************************************************************************
* Data atual: 14/05/2024                                                                                   *
* Desafio: Ex004 � Listagem Completa e Organizada                                                          *                             *
* Institui��o de Ensino: Estudonauta                                                                       *
* Disciplina: Linguagem C                                                                                  *
* Professor: Gustavo Guanabara                                                                             *
* Aluno: D. K. Mariano                                                                                     *
* Descri��o: Crie um programa que cadastre informa��es sobre tr�s pessoas (nome, sexo e nota)e,em seguida, *
* exibir uma lista completa dessas informa��es.                                                            *
***********************************************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclus�o da biblioteca utilizada para fun��es de manipula��o de strings como strcspn

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome1[30], nome2[30], nome3[30]; //Declara tr�s array de caracteres nome1, nome2, nome3 com tamanho m�ximo de 30 para armazenar o nome do aluno 1.
    char sexo1, sexo2, sexo3;
    float nota1=0, nota2=0, nota3=0;

    printf("\n");
    printf("Cadastrando a primeira pessoa: \n");
    printf("---------------------------------\n");

    printf("NOME: ");
    fgets(nome1,sizeof(nome1), stdin); // L� uma linha de texto do usu�rio (incluindo espa�os) e armazena em nome1.
    nome1[strcspn(nome1, "\n")] = 0; // Remove o caractere de nova linha (`\n`) do final do nome (digitado pressionando Enter).

    printf("SEXO[M/F]: ");
    scanf(" %c", &sexo1);
    while (getchar() != '\n');  // Limpa os caracteres restantes no buffer de entrada (importante para evitar problemas no pr�ximo `scanf`).

    printf("NOTA: ");
    scanf("%f", &nota1);
    while (getchar() != '\n');  // Limpa os caracteres restantes no buffer de entrada (importante para evitar problemas no pr�ximo `scanf`).

    printf("\n");
    printf("Cadastrando a segunda pessoa: \n");
    printf("--------------------------------- \n");

    printf("NOME: ");
    fgets(nome2, sizeof(nome2), stdin);// L� uma linha de texto do usu�rio (incluindo espa�os) e armazena em nome2.
    nome2[strcspn(nome2, "\n")] = 0; // Remove o caractere de nova linha (`\n`) do final do nome (digitado pressionando Enter).

    printf("SEXO[M/F]: ");
    scanf(" %c", &sexo2);
    while (getchar() != '\n'); // Limpa os caracteres restantes no buffer de entrada (importante para evitar problemas no pr�ximo `scanf`).

    printf("NOTA: ");
    scanf(" %f", &nota2);
    while (getchar() != '\n'); // Limpa os caracteres restantes no buffer de entrada (importante para evitar problemas no pr�ximo `scanf`).

    printf("\n");
    printf("Cadastrando a terceira pessoa: \n");
    printf("--------------------------------- \n");

    printf("NOME: ");
    fgets(nome3,sizeof(nome3), stdin); // L� uma linha de texto do usu�rio (incluindo espa�os) e armazena em nome3.
    nome3[strcspn(nome3, "\n")] = 0; // Remove o caractere de nova linha (`\n`) do final do nome (digitado pressionando Enter).

    printf("SEXO[M/F]: ");
    scanf(" %c", &sexo3);
    while (getchar() != '\n'); // Limpa os caracteres restantes no buffer de entrada (importante para evitar problemas no pr�ximo `scanf`).

    printf("NOTA: ");
    scanf(" %f", &nota3);
    while (getchar() != '\n');  // Limpa os caracteres restantes no buffer de entrada (importante para evitar problemas no pr�ximo `scanf`).

    printf("\n");
    printf("Listagem completa: \n");
    printf("---------------------------------\n");
    printf("NOME\t\t\t\tSEXO\t\t\t  NOTA\n");
    printf("%-30s \t %c\t\t\t%6.1f\n", nome1, sexo1, nota1);
    printf("%-30s \t %c\t\t\t%6.1f\n", nome2, sexo2, nota2);
    printf("%-30s \t %c\t\t\t%6.1f\n", nome3, sexo3, nota3);
}
