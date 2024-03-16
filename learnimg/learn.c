#include <stdlib.h>
#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 2 * (10 - i); k > 1; k--)
        {
            printf(" ");
        }
        for (int l = 0; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("*********************\n");
    for (int k0 = 10; k0 > 0; k0--)
    {
        for (int k1 = k0; k1 > 0; k1--)
        {
            printf("*");
        }
        for (int k2 = 2 * k0; k2 < 21; k2++)
        {
            printf(" ");
        }
        for (int k3 = k0; k3 > 0; k3--)
        {
            printf("*");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
