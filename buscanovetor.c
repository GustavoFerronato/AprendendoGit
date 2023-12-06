#include <stdio.h>

int main()
{

    int n, vetor[10], i, busca, teste = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\nDifite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("\nQual valor deseja encontrar: ");
    scanf("%d", &busca);

    for (i = 0; i < 10; i++)
    {
        if (busca == vetor[i])
        {
            teste++;
        }
    }

    if (teste>0)
    {
        printf("\nO valor  esta presente");
    }else printf("\nO valor NAO esta presente");


    if (do
    {
        /* code */
    } while (/* condition */);
    )
    {
        /* code */
    }
    
    
}
