#include <stdio.h>

int main()
{
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++)
    {
        printf("Passo %d: Diagonal Superior Direita -> ", i);
        printf("Cima e Direita\n");
    }
    printf("-----------------------------\n");

    printf("Movimento da Torre:\n");
    int passoTorre = 1;
    while (passoTorre <= TORRE_MOV)
    {
        printf("Passo %d: Direita\n", passoTorre);
        passoTorre++;
    }
    printf("-----------------------------\n");

    int passoRainha = 1;
    printf("Movimento da Rainha:\n");
    do
    {
        printf("Passo %d: Esquerda\n", passoRainha);
        passoRainha++;
    } while (passoRainha <= RAINHA_MOV);
    printf("-----------------------------\n");

    return 0;
}
