#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 0, y = 1, z = 1, a, s;
	printf("u select firs x elements in tribonacci(38): ");
	scanf("%d", &s);
	if (s == 1)
	{
		printf("1- %d\n",x);
	}
	else if (s== 2)
	{
		printf("1- %d\n2- %d\n",x,y);
	}
	else if (s >= 3 && s <= 38)
	{
			printf("1- %d\n2- %d\n3- %d\n",x,y,z);
		for (int i = 0; i <= s - 4; i++)
		{
			a = x + y + z;
			printf("%d- %d\n",i+4,a);
			x = y;
			y = z;
			z = a;
		}
	}
	else
	{
		printf("pls try later");
	}

	system("pause");
	return (0);
}