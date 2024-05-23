/***********************************************************************************************************************
* Data atual: 14/05/2024                                                                                               *
* Desafio: Ex005 � N�meros Aleat�rios                                                                                  *
* Institui��o de Ensino: Estudonauta                                                                                   *
* Disciplina: Linguagem C                                                                                              *
* Professor: Gustavo Guanabara                                                                                         *
* Aluno: D. K. Mariano                                                                                                 *
* Descri��o: Escreva um programa que fa�a o computador "pensar" em um n�mero inteiro entre 0 e 5 e pe�a para o usu�rio *
* tentar descobrir qual foi o n�mero escolhido pelo computador. O programa dever� escrever na tela se o usu�rio venceu *
* ou perdeu.                                                                                                           *
**********************************************************************************************************************/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Inclus�o da biblioteca para fun��es  utilit�rias
#include <time.h> // Inclus�o da biblioteca que permite manipula�ao de tempo

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); // Inicializa��o do gerador de n�meros aleat�rios com o tempo atual como semente

    int user = 0;
    char nome[30];
    int comput = rand() % 6; // Gera��o de um n�mero aleat�rio entre 0 e 5 e armazenamento na vari�vel "comput"

    printf("Qual � o seu nome?\n");
    scanf("%s", nome);
    getchar(); // Limpeza do buffer de entrada para evitar problemas com a pr�xima leitura

    printf("\n%s, eu estou entediado!", nome);
    printf("\nVamos jogar um jogo?");
    printf("\nEu pensei em um n�mero entre 0 e 5. Tente advinhar!\n");
    printf("\nQual foi o n�mero que eu pensei, %s \?\n", nome);
    scanf("%d", &user);

    if (comput == user) { // Verifica��o se o palpite do usu�rio � igual ao n�mero pensado pelo computador
        printf("\nPARAB�NS, %s!\nVoc� advinhou que eu pensei no n�mero %d! ;)", nome, comput); /*  Se o n�mero digitado
        pelo usu�rio for ighual ao pensado pelo computador, o programa exibir� uma mensagem de parab�ns*/
    } else {
        printf("\nEu GANHEI, %s!\nEu pensei no n�mero %d e n�o no %d! ;)", nome, comput, user); /* Se o n�mero digitado
        pelo usu�rio for igual ao pensado pelo computador, o programa exibir� uma mensagem informando o n�mero correto */
    }
    return 0; // Retorno indicando que o programa foi executado com sucesso
}
