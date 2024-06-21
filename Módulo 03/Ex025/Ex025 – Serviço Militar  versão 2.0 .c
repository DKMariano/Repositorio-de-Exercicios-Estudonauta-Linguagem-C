/*************************************************************************************************************************
* Data: 08/06/2024                                                                                                       *
* Desafio: Ex025 � Servi�o Militar  vers�o 2.0                                                                           *
* Institui��o de Ensino: Estudonauta                                                                                     *
* Disciplina: Linguagem C                                                                                                *
* Professor: Gustavo Guanabara                                                                                           *
* Aluno: D. K. Mariano                                                                                                   *
* Descri��o: Crie um programa para verificar o ano de alistamento militar com base no ano de nascimento.                 *                                                                                                            *
*************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    time_t t;// Declara uma vari�vel chamada "t" do tipo "time_t" para armazenar o tempo  t para armazenar o tempo atual
    time(&t);// Obt�m o tempo atual e armazena esse tempo  em 't'

    struct tm *data; // Declara um ponteiro para uma estrutura tm
    data = localtime(&t);// Converte o tempo armazenado em 't' para a estrutura tm

    int ano_atual = data -> tm_year +1900; // Calcula o ano atual a parti do campo tm_year
    int ano_nascimento = 0, idade = 0, alistamento =0, anos_passados = 0, anos_faltantes = 0;

    printf ("\n============ ANALISADOR DE SERVI�O MILITAR ============\n");

    printf ("\n Em que ano voc� nasceu? (YYYY) ");
    scanf("%i", &ano_nascimento);

    printf ("\n-------------------------------------------------------\n");

    idade = ano_atual - ano_nascimento;
    alistamento = ano_nascimento + 18;
    anos_passados = ano_atual - alistamento;
    anos_faltantes = alistamento - ano_atual;

    if(idade> 18){
        printf ("\nO ano atual � %i e, ATUALMENTE, voc� tem %i anos. \n", ano_atual, idade);
        printf ("Seu alistamento ocorreu no ano de %i.\n",alistamento );
        printf("Desde ent�o, j� se passaram %i anos. \n", anos_passados);
    }else if(idade < 18){
            printf ("\nO ano atual � %i e, ATUALMENTE, voc� tem %i anos. \n", ano_atual, idade);
            printf ("Seu alistamento ser� no ano de %i.\n",alistamento );
            printf("Ainda faltam %i anos. \n", anos_faltantes);
    }else{
        printf ("\nO ano atual � %i e, HOJE, voc� tem %i anos. \n", ano_atual, idade);
        printf ("Seu alistamento � NESSE ANO.\n");
        printf("V� SE ALISTAR!!!");
    }
    printf ("\n-------------------------------------------------------\n\n");
}


