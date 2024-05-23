/***********************************************************************************************************************
* Data atual: 14/05/2024                                                                                               *
* Desafio: Ex005 – Números Aleatórios                                                                                  *
* Instituição de Ensino: Estudonauta                                                                                   *
* Disciplina: Linguagem C                                                                                              *
* Professor: Gustavo Guanabara                                                                                         *
* Aluno: D. K. Mariano                                                                                                 *
* Descrição: Escreva um programa que faça o computador "pensar" em um número inteiro entre 0 e 5 e peça para o usuário *
* tentar descobrir qual foi o número escolhido pelo computador. O programa deverá escrever na tela se o usuário venceu *
* ou perdeu.                                                                                                           *
**********************************************************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Inclusão da biblioteca para funções  utilitárias
#include <time.h> // Inclusão da biblioteca que permite manipulaçao de tempo

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); // Inicialização do gerador de números aleatórios com o tempo atual como semente

    int user = 0;
    char nome[30];
    int comput = rand() % 6; // Geração de um número aleatório entre 0 e 5 e armazenamento na variável "comput"

    printf("Qual é o seu nome?\n");
    scanf("%s", nome);
    getchar(); // Limpeza do buffer de entrada para evitar problemas com a próxima leitura

    printf("\n%s, eu estou entediado!", nome);
    printf("\nVamos jogar um jogo?");
    printf("\nEu pensei em um número entre 0 e 5. Tente advinhar!\n");
    printf("\nQual foi o número que eu pensei, %s \?\n", nome);
    scanf("%d", &user);

    if (comput == user) { // Verificação se o palpite do usuário é igual ao número pensado pelo computador
        printf("\nPARABÉNS, %s!\nVocê advinhou que eu pensei no número %d! ;)", nome, comput); /*  Se o número digitado
        pelo usuário for ighual ao pensado pelo computador, o programa exibirá uma mensagem de parabéns*/
    } else {
        printf("\nEu GANHEI, %s!\nEu pensei no número %d e não no %d! ;)", nome, comput, user); /* Se o número digitado
        pelo usuário for igual ao pensado pelo computador, o programa exibirá uma mensagem informando o número correto */
    }
    return 0; // Retorno indicando que o programa foi executado com sucesso
}
