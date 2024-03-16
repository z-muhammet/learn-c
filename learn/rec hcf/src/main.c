#include <stdio.h>
#include <stdlib.h>

int hcf(int hcf1, int hcf2)
{

	if (hcf2 != 0)
	{
		return (hcf(hcf2, hcf1 % hcf2));
	}
	else
	{
		return hcf1;
	}
}

int main()
{
	int h1, h2;
	printf("s1: ");
	scanf("%d", &h1);
	printf("s2: ");
	scanf("%d", &h2);
	printf("%d", hcf(h1, h2));

	system("pause");
	return (0);
}