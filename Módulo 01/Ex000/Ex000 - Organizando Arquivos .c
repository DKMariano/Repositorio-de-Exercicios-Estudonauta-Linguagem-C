/**********************************************************************************************************************
* Data atual: 11/05/2024                                                                                              *
* Desafio: Ex000 - Organizando Arquivos                                                                               *                                                                                                        *
* Instituição de Ensino: Estudonauta                                                                                  *
* Disciplina: Linguagem C                                                                                             *
* Professor: Gustavo Guanabara                                                                                        *
* Aluno: Dimitrius Khouri                                                                                             *
* Descrição: Crie um programa que escreva 'Olá, Mundo!' e "Ufa! Já estou "LIVRE" da maldição." na tela.               *                                                                                          *
**********************************************************************************************************************/


#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída que fornece funções básicas de entrada e saída, como `printf()` utilizada para exibir texto na tela.
#include <locale.h>  // Inclusão da biblioteca que define e manipula as configurações de locale do programa, permitindo a formatação de texto de acordo com a região do usuário.


void main(){ //  é o ponto de entrada do programa e contém o código principal que será executado.

    setlocale(LC_ALL, "Portuguese"); //Esta linha define a locale para português em todas as categorias (entrada, saída, formatação de data e hora, etc.) para que o texto exibido na tela esteja de acordo com as convenções portuguesas.

    printf("Olá, mundo!\n"); // Exibição da mensagem "Olá, mundo!". O caractere `\n` no final da string indica uma quebra de linha
    printf("Ufa! Já estou \"LIVRE\" da maldição.\n"); // Exibição da mensagem "Ufa! Já estou "LIVRE" da maldição." com aspas escapadas e seguida de uma quebra de linha

   }


