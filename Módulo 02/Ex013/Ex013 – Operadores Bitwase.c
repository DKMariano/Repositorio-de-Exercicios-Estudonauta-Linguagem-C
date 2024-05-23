/**********************************************************************************************************************
* Data: 19/05/2024                                                                                                    *
* Desafio: Ex013 � Operadores Bitwase                                                                                 *
* Institui��o de Ensino: Estudonauta                                                                                  *
* Disciplina: Linguagem C                                                                                             *
* Professor: Gustavo Guanabara                                                                                        *
* Aluno: D. K. Mariano                                                                                                *
* Descri��o: Crie um programa que pergunte ao usu�rio insira dois n�meros inteiros. E, em seguida, o programa calcula *
* e exibe os resultados das opera��es bitwise AND, OR, e XOR entre esses dois n�meros.                                *                                                                                                   *
**********************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero1=0, numero2=0, conju=0, disju=0, disju_exclu=0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    conju = (numero1 & numero2);
    disju = (numero1 | numero2);
    disju_exclu = (numero1 ^ numero2);

    printf("\n------ OPERA��ES BITWISE ------\n");
    printf("Calculando %d & %d � igual a %d.\n", numero1, numero2, conju);
    printf("Calculando %d | %d � igual a %d.\n", numero1, numero2, disju);
    printf("Calculando %d ^ %d � igual a %d.\n", numero1, numero2, disju_exclu);

    return 0;
}
