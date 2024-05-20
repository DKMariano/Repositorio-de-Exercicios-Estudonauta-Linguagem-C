/*****************************************************************************************************
* Data atual: 14/05/2024                                                                             *
* Desafio: Ex003 � Ler Dados dos Usu�rios                                                            *                                                                                      *
* Institui��o de Ensino: Estudonauta                                                                 *
* Disciplina: Linguagem C                                                                            *
* Professor: Gustavo Guanabara                                                                       *
* Aluno: Dimitrius Khouri                                                                            *
* Descri��o: Crie um programa que solicite informa��es b�sicas do usu�rio (nome, idade e peso) e as  *
* exiba de volta na tela.                                                                            *
**************************************************************************************************** */


#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade = 0;
    double peso = 0;

    printf("Qual � o seu nome? ");
    fgets(nome, sizeof(nome), stdin);


    printf("Quantos anos voc� tem? ");
    scanf(" %d", &idade);


    printf("Qual � o seu peso? ");
    scanf(" %lf", &peso);

    printf("-------<<< PROCESSANDO >>>------- \n");
    printf("Muito prazer, %s!\n", nome);
    printf("Voc� tem %d anos e pesa %.1f kgs, correto? \n", idade, peso);
    printf("Fim! \n");

    return 0;
}
