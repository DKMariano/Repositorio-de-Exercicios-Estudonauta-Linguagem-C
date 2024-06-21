/*************************************************************************************************************************
* Data: 31/05/2024                                                                                                       *
* Desafio: Ex018 – Serviço Militar  versão 1.0                                                                           *
* Instituição de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descrição: Crie um programa que verifique se o usuário já tem idade para se alistar ao serviço militar.                *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    time_t t; // Declara uma variável do tipo time_t para armazenar o tempo atual
    time(&t);// Obtém o tempo atual e armazena em 't'
    struct tm *data; // Declara um ponteiro para uma estrutura tm
    data = localtime(&t); // Converte o tempo armazenado em 't' para a estrutura tm
    int ano_atual = data -> tm_year + 1900; // Calcula o ano atual a partir do campo tm_year

    int ano_nascimento = 0, idade = 0;

    printf("Atualmente estamos no ano de %i.", ano_atual);

    printf("\nEm que ano você nasceu? ");
    scanf("%i", &ano_nascimento);
    while (getchar() != '\n'); // Limpa o buffer do teclado


    idade = ano_atual - ano_nascimento;

    printf("\n------------------------------------------------------\n");
    printf("Sua idade atual é de %i. \n", idade);

    if(idade>=18){
        printf("Espero que você já tenha se alistado aos 18 anos. \n");
    }else{
        printf("Você ainda não tem 18 anos, por isso não pode se alistar. \n");
    }

}
