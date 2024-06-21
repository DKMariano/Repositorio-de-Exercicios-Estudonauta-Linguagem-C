/**************************************************************************************************************************
* Data: 25/05/2024                                                                                                        *
* Desafio: Ex016 � Consumidor ganha desconto                                                                              *
* Institui��o de Ensino: Estudonauta                                                                                      *
* Disciplina: Linguagem C                                                                                                 *
* Professor: Gustavo Guanabara                                                                                            *
* Aluno: D. K. Mariano                                                                                                    *
* Descri��o: Crie um programa em C que calcula o desconto para um cliente com base no valor total das compras realizadas. *
* Este programa deve verificar se um cliente tem direito a um desconto de 10%. Este desconto � alicado apenas se o valor  *
* total das compras for igual ou superior a R$ 500,00. Se o desconto for aplic�vel, o valor final a ser pago � calculado  *
* e exibido. Caso contr�rio, apenas o valor das compras � exibido.                                                        *                                                    *
**************************************************************************************************************************/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double compras=0, desconto = 0.1, valor_pago=0;

    printf("\n----------------<<< LOJAS TITA >>>---------------- \n");
    printf("Seja bem vindo(a) as LOJAS TITAS!\n");

    printf("Qual foi o valor total das compras? R$ ");
    scanf("%lf", &compras);
    while (getchar() != '\n');// Limpa o buffer do teclado

    printf("\n--------------- AN�LISE DE COMPRAS --------------- \n");

    if(compras>=500){
        valor_pago = compras*(1 - desconto);
        printf("ATEN��O!!!\n");
        printf("Voc� acaba de realizar uma compra de R$ %.2f.", compras);
        printf("\nCom isso, voc� ganhou R$ %.2f de desconto!", compras*desconto);
        printf("\nPague APENAS o valor de  R$ %.2f !!\n", valor_pago);

    }else{
        printf("Voc� comprou R$ %.2f na nossa loja.\n",compras);

    }
    printf("\nEsperamos que voc� volte sempre!\n\n");

}
