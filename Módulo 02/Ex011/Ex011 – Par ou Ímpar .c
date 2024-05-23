/****************************************************************************************************************
* Data: 17/05/2024                                                                                              *
* Desafio: Ex011 � Par ou �mpar                                                                                 *
* Institui��o de Ensino: Estudonauta                                                                            *
* Disciplina: Linguagem C                                                                                       *
* Professor: Gustavo Guanabara                                                                                  *
* Aluno: D. K. Mariano                                                                                          *
* Descri��o:Crie um programa que verifique se um n�mero dado pelo usu�rio � par ou �mpar.                       *
****************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numero=0;

    printf("Digite um n�mero qualquer: ");
    scanf("%d", &numero);

    printf((numero%2==0)?"O n�mero %d � PAR!":"O n�mero %d � �MPAR!", numero, numero);

}
