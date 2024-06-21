/**************************************************************************************************************************
* Data: 25/05/2024                                                                                                        *
* Desafio: Ex016 – Consumidor ganha desconto                                                                              *
* Instituição de Ensino: Estudonauta                                                                                      *
* Disciplina: Linguagem C                                                                                                 *
* Professor: Gustavo Guanabara                                                                                            *
* Aluno: D. K. Mariano                                                                                                    *
* Descrição: Crie um programa em C que calcula o desconto para um cliente com base no valor total das compras realizadas. *
* Este programa deve verificar se um cliente tem direito a um desconto de 10%. Este desconto é alicado apenas se o valor  *
* total das compras for igual ou superior a R$ 500,00. Se o desconto for aplicável, o valor final a ser pago é calculado  *
* e exibido. Caso contrário, apenas o valor das compras é exibido.                                                        *                                                    *
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

    printf("\n--------------- ANÁLISE DE COMPRAS --------------- \n");

    if(compras>=500){
        valor_pago = compras*(1 - desconto);
        printf("ATENÇÃO!!!\n");
        printf("Você acaba de realizar uma compra de R$ %.2f.", compras);
        printf("\nCom isso, você ganhou R$ %.2f de desconto!", compras*desconto);
        printf("\nPague APENAS o valor de  R$ %.2f !!\n", valor_pago);

    }else{
        printf("Você comprou R$ %.2f na nossa loja.\n",compras);

    }
    printf("\nEsperamos que você volte sempre!\n\n");

}
