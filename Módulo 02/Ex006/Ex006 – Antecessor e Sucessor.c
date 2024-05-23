/**********************************************************************************************************************
* Data: 17/05/2024                                                                                                    *
* Desafio: Ex006 � Antecessor e Sucessor                                                                              *
* Institui��o de Ensino: Estudonauta                                                                                  *
* Disciplina: Linguagem C                                                                                             *
* Professor: Gustavo Guanabara                                                                                        *
* Aluno: D. K. Mariano                                                                                                *
* Descri��o: Crie um programa que solicite ao usu�rio um n�mero e depois print na dela seu antecessor e sucessor      *
**********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero=0;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    int antecessor= numero -1;
    int sucessor= numero +1;

    printf("\n-------<<< Analisando o n�mero %d >>>------- \n", numero);
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
