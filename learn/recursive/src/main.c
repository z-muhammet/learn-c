#include <stdio.h>
#include <stdlib.h>

int rec(int fac)
{
	if (fac >= 1)
	{
		return fac * (rec(fac - 1));
	}
	else
	{
		return 1;
	}
}
int main()
{
	int fac;
	printf("x! (x factorial pls u enter 'X'): ");
	scanf("%d", &fac);
	printf("%d! = %d", fac, rec(fac));

	system("pause");
	return (0);
}