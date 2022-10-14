#include <stdio.h>
#include <stdlib.h>

int main()
{   float conta, porcentagem, calculo;

    printf("Digite o valor da conta: R$");
    scanf("%f",&conta);
    printf("Digite a porcentagem desejada:");
    scanf("%f",&porcentagem);

    porcentagem = porcentagem * 0.01;
    calculo = conta * porcentagem;
    printf("\nValor da gorjeta: R$%.2f \n",calculo);

    return 0;
}
