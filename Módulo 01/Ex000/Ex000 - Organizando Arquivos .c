/**********************************************************************************************************************
* Data atual: 11/05/2024                                                                                              *
* Desafio: Ex000 - Organizando Arquivos                                                                               *                                                                                                        *
* Institui��o de Ensino: Estudonauta                                                                                  *
* Disciplina: Linguagem C                                                                                             *
* Professor: Gustavo Guanabara                                                                                        *
* Aluno: Dimitrius Khouri                                                                                             *
* Descri��o: Crie um programa que escreva 'Ol�, Mundo!' e "Ufa! J� estou "LIVRE" da maldi��o." na tela.               *                                                                                          *
**********************************************************************************************************************/


#include <stdio.h> // Inclus�o da biblioteca padr�o de entrada e sa�da que fornece fun��es b�sicas de entrada e sa�da, como `printf()` utilizada para exibir texto na tela.
#include <locale.h>  // Inclus�o da biblioteca que define e manipula as configura��es de locale do programa, permitindo a formata��o de texto de acordo com a regi�o do usu�rio.


void main(){ //  � o ponto de entrada do programa e cont�m o c�digo principal que ser� executado.

    setlocale(LC_ALL, "Portuguese"); //Esta linha define a locale para portugu�s em todas as categorias (entrada, sa�da, formata��o de data e hora, etc.) para que o texto exibido na tela esteja de acordo com as conven��es portuguesas.

    printf("Ol�, mundo!\n"); // Exibi��o da mensagem "Ol�, mundo!". O caractere `\n` no final da string indica uma quebra de linha
    printf("Ufa! J� estou \"LIVRE\" da maldi��o.\n"); // Exibi��o da mensagem "Ufa! J� estou "LIVRE" da maldi��o." com aspas escapadas e seguida de uma quebra de linha

   }


