#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y,z,s;
	printf("****Are numbers between x and y divisible by z without a remainder?*****\n");
	printf("pls u select x: ");
	scanf("%d",&x);
	printf("pls u select y: ");
	scanf("%d",&y);
	printf("pls u select z: ");
	scanf("%d",&z);
	for (int i = 1; i<=y; i++)
	{
		s=i%z;
		if (s==0)
		{
			printf("%d/%d = %d 	remainder: 0\n",i,z,i/z);
		}
		
	}
	system("pause");
	return (0);
}