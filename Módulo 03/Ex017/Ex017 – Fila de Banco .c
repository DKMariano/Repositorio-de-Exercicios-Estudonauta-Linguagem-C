/*************************************************************************************************************************
* Data: 25/05/2024                                                                                                       *
* Desafio: Ex017 – Fila de Banco                                                                                         *
* Instituição de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descrição: Crie um programa que simula uma fila de banco, direcionando clientes com idade acima de 65 anos para a fila *
* preferencial.                                                                                                          *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <time.h> // Inclui a biblioteca para manipulação de data e hora

int main(){

    setlocale(LC_ALL, "Portuguese");

    time_t t; // Declara variável 't' do tipo 'time_t' para armazenar tempo em segundos
    time(&t); // Armazena tempo atual em segundos na variável 't'

    struct tm*data; // Declara um ponteiro para uma estrutura tm para armazenar informações de data e hora
    data = localtime(&t); // Converte tempo em segundos em informações de data e hora e armazena em 'data'


    int ano_atual = data -> tm_year + 1900; // Calcula o ano atual a partir do campo tm_year
    int ano_nascimento = 0, idade =0;
    printf("Em que ano você nasceu? ");
    scanf("%i", &ano_nascimento);
    while (getchar() != '\n');// Limpa o buffer do teclado

    printf("\n----------------------------------------------------------\n");

    idade = ano_atual - ano_nascimento;

    printf("\tVocê tem %i anos, certo? \n", idade);

    printf("\tSeja bem vindo (a) ao Banco Estudonauta!\n");
    printf("----------------------------------------------------------\n");

    if (idade>=65){
        printf("=== Por favor, dirija-se para a FILA PREFERENCIAL! ===\n");

    }else{
         printf("=== Por favor, dirija-se para a FILA COMUM! ===\n");
    }
}
