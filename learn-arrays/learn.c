#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num[102], i;
    char math;
    num[101] = 0;
    printf("pls u select [addition: 'a' , 	multiplication 'm']: ");
    scanf("%s", &math);
    switch (math)
    {
    case 'm':
        num[102] = 1;
        printf("pls u entered need multiplication(100): ");
        scanf("%d", &i);
        if (i < 101 && i >= 1)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("u entered %d. number: ", j);
                scanf("%d", &num[j - 1]);
                num[102] = num[102] * num[j - 1];
            }
            for (int k = 0; k < i; k++)
            {
                if (k < i - 1)
                {
                    printf("%dx", num[k]);
                }
                else if (k == i - 1)
                {
                    printf("%d = %d\n", num[k], num[102]);
                }
            }
        }
        else
        {
            printf("pls try again");
        }
        break;

    case 'a':
        printf("pls u entered need addition(100): ");
        scanf("%d", &i);
        if (i < 101 && i >= 1)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("u entered %d. number: ", j);
                scanf("%d", &num[j - 1]);
                num[101] = num[101] + num[j - 1];
            }
            for (int k = 0; k < i; k++)
            {
                if (k < i - 1)
                {
                    printf("%d+", num[k]);
                }
                else if (k == i - 1)
                {
                    printf("%d = %d\n", num[k], num[101]);
                }
            }
        }
        else
        {
            printf("pls try again");
        }
        break;

    default:
        break;
    }

    system("pause");
    return 0;
}
