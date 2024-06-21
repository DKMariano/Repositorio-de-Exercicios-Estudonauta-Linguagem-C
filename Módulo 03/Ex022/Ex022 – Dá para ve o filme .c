/*************************************************************************************************************************
* Data: 31/05/2024                                                                                                       *
* Desafio: Ex022 – Dá para ve o filme                                                                                    *
* Instituição de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descrição: Crie um programa que determine se uma pessoa pode ou não comprar um ingresso para o filme no cinema.        *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int hora = data -> tm_hour;

    double dinheiro = 0;


    printf("\n======== CINEMA ESTUDONAUTA ========\n", hora);
    printf("HORÁRIO DO FILME: 19h\n");
    printf("PREÇO DO INGRESSO: R$ 20,00\n");
    printf("------------------------------------\n");

    printf("Quanto dinheiro você tem? R$ ");
    scanf("%lf", &dinheiro);
    while (getchar() != '\n');// Limpa o buffer do teclado

    printf("\nAgora são %i horas.\n", hora);

    if((hora < 19 || hora >= 21) && (dinheiro >= 20)){
        printf("Você pode comprar o ingresso e assistir ao filme!\n");
    }else{
        printf("Infezlimente, NÃO É POSSÍVEL comprar o ingresso do filme !\n");
    }
}
