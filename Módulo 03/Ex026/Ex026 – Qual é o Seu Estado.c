/************************************************************************************************************************
* Data: 16/06/2024                                                                                                      *
* Desafio: Ex026 � Qual � o Seu Estado                                                                                  *
* Institui��o de Ensino: Estudonauta                                                                                    *
* Disciplina: Linguagem C                                                                                               *
* Professor: Gustavo Guanabara                                                                                          *
* Aluno: D. K. Mariano                                                                                                  *
* Descri��o: Crie um programa em linguagem C que recebe do usu�rio a sigla de um estado brasileiro e imprima na tela o  *
*            adjetivo gent�lico (ou p�trio) correspondente, ou seja, o termo que descreve os habitantes daquele estado. *                                                                                                           *                                                                                                            *
************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclui a biblioteca de manipula��o de strings, necess�ria para usar fun��es como strcasecmp e strcspn.

int main(){

    setlocale(LC_ALL, "Portuguese");

    char estado [3];

    printf("\nDigite a sigla do estado brasileiro onde voc� nasceu: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0'; // Remove o caractere de nova linha \n que fgets armazena junto com a entrada do usu�rio.

    if(strcasecmp(estado, "AC") == 0) { //Compara strings ignorando a diferen�a entre mai�sculas e min�sculas.
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Acre � acreano.\n\n");

    }else if(strcasecmp(estado, "AL")  == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Alagoas � alagoano.\n\n");

    }else if(strcasecmp(estado,  "AP") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Amap� � amapaense.\n\n");

    }else if(strcasecmp (estado, "AM") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Amazonas � amazonense.\n\n");

    }else if(strcasecmp (estado, "BA") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu na Bahia � baiano.\n\n");

    }else if(strcasecmp (estado, "CE") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Cear� � cearense.\n\n");

    }else if(strcasecmp (estado, "DF")== 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Distrito Federal � brasiliense.\n\n");

    }else if(strcasecmp (estado, "ES") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Esp�rito Santo � capixaba ou esp�rito-santense.\n\n");

    }else if(strcasecmp (estado, "GO") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Goi�s � goiano.\n\n");

    }else if(strcasecmp (estado, "MA")== 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Maranh�o � maranhense.\n\n");

    }else if(strcasecmp (estado, "MT") == 0){
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Mato Grosso � mato-grossense.\n\n");

    }else if(strcasecmp (estado, "MS") == 0){
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Mato Grosso do Sul � sul-mato-grossense.\n\n");

    }else if(strcasecmp (estado, "MG") == 0){
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Minas Gerais � mineiro.\n\n");

    }else if(strcasecmp (estado, "PA") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Par� � paraense.\n\n");

    }else if(strcasecmp (estado, "PB") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu na Para�ba � paraibano.\n\n");

    }else if(strcasecmp (estado, "PR") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Paran� � paranaense.\n\n");

    }else if(strcasecmp (estado, "PE") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Pernambuco � pernambucano.\n\n");

    }else if(strcasecmp (estado, "PI") == 0 ) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Piau� � piauiense.\n\n");

    }else if(strcasecmp (estado, "RJ") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Rio de Janeiro � fluminense.\n\n");

    }else if(strcasecmp (estado, "RN") == 0 ) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Rio Grande do Norte � potiguar ou norte-rio-grandense. \n\n");

    }else if(strcasecmp (estado, "RS") ==0 ) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Rio Grande do Sul � ga�cho ou sul-rio-grandense. \n\n");

    }else if(strcasecmp (estado, "RO") == 0 ){
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Rond�nia � rondoniano ou rondoniense. \n\n");

    }else if(strcasecmp (estado, "RR") == 0 ){
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Roraima � roraimense. \n\n");

    }else if(strcasecmp (estado, "SC") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Santa Catarina � catarinense ou barriga-verde. \n\n");

    }else if(strcasecmp (estado, "SP") == 0 ){
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em S�o Paulo � paulista. \n\n");

    }else if(strcasecmp (estado, "SE") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu em Sergipe � sergipano. \n\n");

    }else if(strcasecmp (estado, "TO") == 0) {
        printf("\nO adjetivo gent�lico (ou p�trio) de quem nasceu no Tocantins � tocantinense. \n\n");
    }else {
        printf("\nEssa digla de estado n�o existe.\n\n");
    }
    return 0;
}
