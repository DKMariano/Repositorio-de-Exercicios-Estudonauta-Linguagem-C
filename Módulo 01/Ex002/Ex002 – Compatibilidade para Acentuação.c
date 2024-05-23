/********************************************************************************************************
* Data atual: 12/05/2024                                                                                *
* Desafio: Ex002 – Compatibilidade para Acentuação                                                      *                                                                                      *
* Instituição de Ensino: Estudonauta                                                                    *
* Disciplina: Linguagem C                                                                               *
* Professor: Gustavo Guanabara                                                                          *
* Aluno: D. K. Mariano                                                                                  *
* Descrição: Crie um programa que gere uma lista de atalhos e seus significados, organizados de forma   *
* tabular. Cada atalho é representado por uma linha na lista, na qual o atalho está alinhado à esquerda *
* e seu significado está alinhado à direita.                                                            *
********************************************************************************************************/


#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
    printf("Lista de Atalhos de Escape em C\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");

    /*Os códigos abaixo exibem cada linha da tabela com o atalho de escape, seu significado e uma breve
    descrição, utilizando tabulações para alinhamento.*/
    printf("\\a \t = \t Beep \n");
    printf("\\n \t = \t Nova linha \n");
    printf("\\t \t = \t Tabulação \n");
    printf("\\\\ \t = \t Barra \n");
    printf("%% \t = \t Porcentagem \n");
    printf("\\? \t = \t Interrogação \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n");
}
