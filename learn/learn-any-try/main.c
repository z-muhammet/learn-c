#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h, t, o, s, min = 99, max = 999;
    printf("pls u select decompose number(max 999): ");
    scanf("%d", &s);
    if (s <= max)
    {
        h = s / 100;
        o = s - ((s / 10) * 10);
        t = (s - (h * 100 + o)) / 10;
        printf("hundreds digit: %d\ntens digit: %d 	\nunits digit: %d\n", h, t, o);
    }
    else
    {
        printf("pls try again");
    }

    system("pause");
    return 0;
}
