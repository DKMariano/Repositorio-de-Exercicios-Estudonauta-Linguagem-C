/*****************************************************************************************************
* Data atual: 14/05/2024                                                                             *
* Desafio: Ex003 – Ler Dados dos Usuários                                                            *                                                                                      *
* Instituição de Ensino: Estudonauta                                                                 *
* Disciplina: Linguagem C                                                                            *
* Professor: Gustavo Guanabara                                                                       *
* Aluno: Dimitrius Khouri                                                                            *
* Descrição: Crie um programa que solicite informações básicas do usuário (nome, idade e peso) e as  *
* exiba de volta na tela.                                                                            *
**************************************************************************************************** */


#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade = 0;
    double peso = 0;

    printf("Qual é o seu nome? ");
    fgets(nome, sizeof(nome), stdin);


    printf("Quantos anos você tem? ");
    scanf(" %d", &idade);


    printf("Qual é o seu peso? ");
    scanf(" %lf", &peso);

    printf("-------<<< PROCESSANDO >>>------- \n");
    printf("Muito prazer, %s!\n", nome);
    printf("Você tem %d anos e pesa %.1f kgs, correto? \n", idade, peso);
    printf("Fim! \n");

    return 0;
}
