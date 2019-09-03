#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    float const CON = 0.05;
    float const LIM = 50000.0;
    float const LIM2 =80000.0;
    float const B2 = 0.03;
    float const B3 = 0.05;
    float const B4 = 0.07;


    float sF;
    float cF;

    int carV;

    float valT;

    printf("Escreva o valor do Salario->");
    scanf("%f", &sF);
    printf("Escreva o valor da Comissao->");
    scanf("%f", &cF);
    printf("Numero de carros-> ");
    scanf("%d", &carV);

    valT = sF + (cF * carV) * CON;

    if (valT<=LIM)
    {
        valT = valT + cF * B2;
    }else if(valT<= LIM2){
        valT = valT + cF * B3;
    }else{
        valT = valT + cF * B4;
    }
        printf("\nSeu salario foi de -> %.2f", valT);

}
