#include <stdio.h>

void moverBispo(int passoExterno, int maxExterno, int passoInterno, int maxInterno)
{
    if (passoExterno > maxExterno)
        return;
    for (int j = passoInterno; j <= maxInterno; j++)
    {
        printf("Passo %d-%d: Diagonal Superior Direita -> Cima e Direita\n", passoExterno, j);
    }
    moverBispo(passoExterno + 1, maxExterno, passoInterno, maxInterno);
}

void moverTorre(int passo, int max)
{
    if (passo > max)
        return;
    printf("Passo %d: Direita\n", passo);
    moverTorre(passo + 1, max);
}

void moverRainha(int passo, int max)
{
    if (passo > max)
        return;
    printf("Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1, max);
}

int main()
{

    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    printf("Movimento do Bispo:\n");
    moverBispo(1, BISPO_MOV, 1, 1);
    printf("\n");

    printf("Movimento da Torre:\n");
    moverTorre(1, TORRE_MOV);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(1, RAINHA_MOV);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    int casasVertical = 2;
    int casasHorizontal = 1;
    for (int i = 1; i <= casasVertical + 1; i++)
    {
        for (int j = 1; j <= casasHorizontal + 1; j++)
        {
            if (i == 2 && j == 2)
            {

                continue;
            }
            if (i > casasVertical || j > casasHorizontal)
            {
                break;
            }
            printf("Passo Cavalo: %d para cima, %d para direita\n", i, j);
        }
    }
    printf(\n");

    return 0;
}