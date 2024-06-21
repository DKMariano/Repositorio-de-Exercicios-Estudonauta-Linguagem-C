/************************************************************************************************************************
* Data: 16/06/2024                                                                                                      *
* Desafio: Ex026 – Qual é o Seu Estado                                                                                  *
* Instituição de Ensino: Estudonauta                                                                                    *
* Disciplina: Linguagem C                                                                                               *
* Professor: Gustavo Guanabara                                                                                          *
* Aluno: D. K. Mariano                                                                                                  *
* Descrição: Crie um programa em linguagem C que recebe do usuário a sigla de um estado brasileiro e imprima na tela o  *
*            adjetivo gentílico (ou pátrio) correspondente, ou seja, o termo que descreve os habitantes daquele estado. *                                                                                                           *                                                                                                            *
************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclui a biblioteca de manipulação de strings, necessária para usar funções como strcasecmp e strcspn.

int main(){

    setlocale(LC_ALL, "Portuguese");

    char estado [3];

    printf("\nDigite a sigla do estado brasileiro onde você nasceu: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0'; // Remove o caractere de nova linha \n que fgets armazena junto com a entrada do usuário.

    if(strcasecmp(estado, "AC") == 0) { //Compara strings ignorando a diferença entre maiúsculas e minúsculas.
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Acre é acreano.\n\n");

    }else if(strcasecmp(estado, "AL")  == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Alagoas é alagoano.\n\n");

    }else if(strcasecmp(estado,  "AP") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Amapá é amapaense.\n\n");

    }else if(strcasecmp (estado, "AM") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Amazonas é amazonense.\n\n");

    }else if(strcasecmp (estado, "BA") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu na Bahia é baiano.\n\n");

    }else if(strcasecmp (estado, "CE") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Ceará é cearense.\n\n");

    }else if(strcasecmp (estado, "DF")== 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Distrito Federal é brasiliense.\n\n");

    }else if(strcasecmp (estado, "ES") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Espírito Santo é capixaba ou espírito-santense.\n\n");

    }else if(strcasecmp (estado, "GO") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Goiás é goiano.\n\n");

    }else if(strcasecmp (estado, "MA")== 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Maranhão é maranhense.\n\n");

    }else if(strcasecmp (estado, "MT") == 0){
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Mato Grosso é mato-grossense.\n\n");

    }else if(strcasecmp (estado, "MS") == 0){
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Mato Grosso do Sul é sul-mato-grossense.\n\n");

    }else if(strcasecmp (estado, "MG") == 0){
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Minas Gerais é mineiro.\n\n");

    }else if(strcasecmp (estado, "PA") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Pará é paraense.\n\n");

    }else if(strcasecmp (estado, "PB") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu na Paraíba é paraibano.\n\n");

    }else if(strcasecmp (estado, "PR") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Paraná é paranaense.\n\n");

    }else if(strcasecmp (estado, "PE") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Pernambuco é pernambucano.\n\n");

    }else if(strcasecmp (estado, "PI") == 0 ) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Piauí é piauiense.\n\n");

    }else if(strcasecmp (estado, "RJ") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Rio de Janeiro é fluminense.\n\n");

    }else if(strcasecmp (estado, "RN") == 0 ) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Rio Grande do Norte é potiguar ou norte-rio-grandense. \n\n");

    }else if(strcasecmp (estado, "RS") ==0 ) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Rio Grande do Sul é gaúcho ou sul-rio-grandense. \n\n");

    }else if(strcasecmp (estado, "RO") == 0 ){
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Rondônia é rondoniano ou rondoniense. \n\n");

    }else if(strcasecmp (estado, "RR") == 0 ){
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Roraima é roraimense. \n\n");

    }else if(strcasecmp (estado, "SC") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Santa Catarina é catarinense ou barriga-verde. \n\n");

    }else if(strcasecmp (estado, "SP") == 0 ){
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em São Paulo é paulista. \n\n");

    }else if(strcasecmp (estado, "SE") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu em Sergipe é sergipano. \n\n");

    }else if(strcasecmp (estado, "TO") == 0) {
        printf("\nO adjetivo gentílico (ou pátrio) de quem nasceu no Tocantins é tocantinense. \n\n");
    }else {
        printf("\nEssa digla de estado não existe.\n\n");
    }
    return 0;
}
