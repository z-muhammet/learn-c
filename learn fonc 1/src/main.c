#include <stdio.h>
#include <stdlib.h>

int trynumb(int *number, int sze)
{
	int ss;
	for (int i = 0; i < sze; i++)
	{
		if (number[i] > ss)
		{
			ss = number[i];
		}
	}
	return ss;
}
int main()
{
	int sze, *dizi, bn;
	printf("pls u write need number: ");
	scanf("%d", &sze);
	for (int i = 0; i < sze; i++)
	{
		printf("pls u write %d. numbers: ",i+1);
		scanf("%d", &dizi[i]);
	}
	printf("largest number: %d \n", trynumb(dizi, sze));
	system("pause");
	return (0);
}