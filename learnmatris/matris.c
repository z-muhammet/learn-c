#include <stdio.h>
#include <stdlib.h>
int main()
{
    int line, col;
    printf("pls u enter number of lines: ");
    scanf("%d", &line);
    printf("pls u enter number of columns: ");
    scanf("%d", &col);
    int matris[line][col];
    for (int i = 0; i < col; i++)
    {

        for (int j = 0; j < line; j++)
        {
            printf("pls u enter data(just number pls)[columns(%d), line(%d)]: ", i + 1, j + 1);
            scanf("%d", &matris[j][i]);
        }
    }
    printf("   ");
    for (int s1 = 0; s1 < line; s1++)
    {
        printf(" [%d]", s1 + 1);
    }
    printf("\n");
    for (int k = 0; k < col; k++)
    {

        printf("[%d]+", k + 1);
        for (int l = 0; l < line; l++)
        {
            printf(" %d +", matris[l][k]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
