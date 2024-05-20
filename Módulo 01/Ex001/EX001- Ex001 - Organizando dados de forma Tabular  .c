/*****************************************************************************************************
* Data atual: 12/05/2024                                                                             *
* Desafio: Ex001 - Organizando dados de forma Tabular                                                                                       *
* Instituição de Ensino: Estudonauta                                                                 *
* Disciplina: Linguagem C                                                                            *
* Professor: Gustavo Guanabara                                                                       *
* Aluno: Dimitrius Khouri                                                                            *
* Descrição: Crie um programa que gere uma lista de alunos com seus respectivos nomes e notas,       *
* organizados de forma tabular. Cada aluno deve ser representado por uma linha na tabela, na qual    *
* o nome do aluno deve estar alinhado à esquerda e a nota alinhada à direita.                        *
**************************************************************************************************** */


#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Listagem de Alunos \n");
    printf("Nome \t \t Nota\n"); // Esta linha utiliza a função printf() para exibir cada linha de dados da tabela, separando o nome do aluno e sua nota com tabulações (\t).
    printf("--------------------- \n");
    printf("Anna Beatriz \t 8.5 \n");
    printf("Bianca Martins \t 9.0 \n");
    printf("Claúdio de Sá \t 5.5 \n");
    printf("Giovanna Silva \t 7.5 \n");
    }
