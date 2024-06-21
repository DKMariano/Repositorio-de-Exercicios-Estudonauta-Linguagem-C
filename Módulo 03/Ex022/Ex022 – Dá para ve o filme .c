/*************************************************************************************************************************
* Data: 31/05/2024                                                                                                       *
* Desafio: Ex022 � D� para ve o filme                                                                                    *
* Institui��o de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descri��o: Crie um programa que determine se uma pessoa pode ou n�o comprar um ingresso para o filme no cinema.        *
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
    printf("HOR�RIO DO FILME: 19h\n");
    printf("PRE�O DO INGRESSO: R$ 20,00\n");
    printf("------------------------------------\n");

    printf("Quanto dinheiro voc� tem? R$ ");
    scanf("%lf", &dinheiro);
    while (getchar() != '\n');// Limpa o buffer do teclado

    printf("\nAgora s�o %i horas.\n", hora);

    if((hora < 19 || hora >= 21) && (dinheiro >= 20)){
        printf("Voc� pode comprar o ingresso e assistir ao filme!\n");
    }else{
        printf("Infezlimente, N�O � POSS�VEL comprar o ingresso do filme !\n");
    }
}
