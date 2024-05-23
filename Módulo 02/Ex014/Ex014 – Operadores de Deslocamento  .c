/**********************************************************************************************************************
* Data atual: 22/05/2024                                                                                              *
* Desafio: Ex014 – Operadores de Deslocamento                                                                         *
* Instituição de Ensino: Estudonauta                                                                                  *
* Disciplina: Linguagem C                                                                                             *
* Professor: Gustavo Guanabara                                                                                        *
* Aluno: D. K. Mariano                                                                                                *
* Descrição:                                                                                                          *                                                                                                   *
**********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero = 0, deslocamento = 0, deslocamento_direita = 0, deslocamento_esquerda = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Digite o deslocamento: ");
    scanf("%d", &deslocamento);

    deslocamento_direita = numero >> deslocamento;
    deslocamento_esquerda = numero << deslocamento;

    printf("\n--------- OPERAÇÕES SHIFT ---------\n");
    printf("Calculando %d >> %d é igual a %d.\n", numero, deslocamento, deslocamento_direita);
    printf("Calculando %d << %d é igual a %d.\n", numero, deslocamento, deslocamento_esquerda);

 }
