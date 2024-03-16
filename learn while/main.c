#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i=1,s,f=1;
    printf("pls u select x! number: ");
    scanf("%d",&s);
    while (s>1)
    {
        f=s*f;
        
        s--;
    }
    printf("%d!: %d\n",s,f);
    
    system ("pause");
    return 0;
}
