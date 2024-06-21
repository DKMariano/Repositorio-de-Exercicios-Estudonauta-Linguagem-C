/*************************************************************************************************************************
* Data: 31/05/2024                                                                                                       *
* Desafio: Ex018 � Servi�o Militar  vers�o 1.0                                                                           *
* Institui��o de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descri��o: Crie um programa que verifique se o usu�rio j� tem idade para se alistar ao servi�o militar.                *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    time_t t; // Declara uma vari�vel do tipo time_t para armazenar o tempo atual
    time(&t);// Obt�m o tempo atual e armazena em 't'
    struct tm *data; // Declara um ponteiro para uma estrutura tm
    data = localtime(&t); // Converte o tempo armazenado em 't' para a estrutura tm
    int ano_atual = data -> tm_year + 1900; // Calcula o ano atual a partir do campo tm_year

    int ano_nascimento = 0, idade = 0;

    printf("Atualmente estamos no ano de %i.", ano_atual);

    printf("\nEm que ano voc� nasceu? ");
    scanf("%i", &ano_nascimento);
    while (getchar() != '\n'); // Limpa o buffer do teclado


    idade = ano_atual - ano_nascimento;

    printf("\n------------------------------------------------------\n");
    printf("Sua idade atual � de %i. \n", idade);

    if(idade>=18){
        printf("Espero que voc� j� tenha se alistado aos 18 anos. \n");
    }else{
        printf("Voc� ainda n�o tem 18 anos, por isso n�o pode se alistar. \n");
    }

}
