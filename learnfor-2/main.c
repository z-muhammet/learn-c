#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
  unsigned long x=0,y=1,z,e;
    printf("select u first x elements(max 48): ");
    scanf("%d",&e);
    printf("%d  %d  ",x,y);
    for (int i = 0; i < e-2 ; i++)
    {
        z = x+y;
        printf("%d  ",z);

        x=y;
        y=z;
    }
    
    printf("\n");
    
    system("pause");

    return 0;
}
