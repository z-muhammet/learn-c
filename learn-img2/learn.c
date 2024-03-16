#include <stdlib.h>
#include <stdio.h>

int main()
{
    char math;
    int sq,kk,uk,mk,mu;
    printf("pls u select needed(square:'s', oblong:'o'): ");
    scanf("%s",&math);
    switch (math)
    {
    case 's':
    printf("psl u entered any edge: ");
    scanf("%d",&sq);
    for (int i = 1; i <= sq; i++)
    {
        for (int k = 1; k <= sq; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    printf("Perimeter: %d, area: %d\n",sq*4,sq*sq);
    break;
    case 'o': 
    printf("pls u enter short edge: ");
    scanf("%d",&mk);
    printf("pls u enter long edge: ");
    scanf("%d",&mu);
    if (mu<mk)
    {
        kk=mu;
        uk=mk;
    }
    else
    {
        kk=mk;
        uk=mu;
    }
    printf("short: %d long: %d\narea: %d, perimeter: %d\n",kk,uk,kk*uk,kk*2+uk*2);
    for (int j = 0; j < kk; j++)
    {
        for (int l = 0; l < uk; l++)
        {
           printf("*");
        }
        printf("\n");
    }
    
    break;
    
    default:printf("pls try later..."); break;
    }

    system("pause");
    return 0;
}
