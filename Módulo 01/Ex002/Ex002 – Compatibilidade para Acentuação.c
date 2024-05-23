/********************************************************************************************************
* Data atual: 12/05/2024                                                                                *
* Desafio: Ex002 � Compatibilidade para Acentua��o                                                      *                                                                                      *
* Institui��o de Ensino: Estudonauta                                                                    *
* Disciplina: Linguagem C                                                                               *
* Professor: Gustavo Guanabara                                                                          *
* Aluno: D. K. Mariano                                                                                  *
* Descri��o: Crie um programa que gere uma lista de atalhos e seus significados, organizados de forma   *
* tabular. Cada atalho � representado por uma linha na lista, na qual o atalho est� alinhado � esquerda *
* e seu significado est� alinhado � direita.                                                            *
********************************************************************************************************/


#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
    printf("Lista de Atalhos de Escape em C\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");

    /*Os c�digos abaixo exibem cada linha da tabela com o atalho de escape, seu significado e uma breve
    descri��o, utilizando tabula��es para alinhamento.*/
    printf("\\a \t = \t Beep \n");
    printf("\\n \t = \t Nova linha \n");
    printf("\\t \t = \t Tabula��o \n");
    printf("\\\\ \t = \t Barra \n");
    printf("%% \t = \t Porcentagem \n");
    printf("\\? \t = \t Interroga��o \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
}
