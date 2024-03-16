#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char name[25];
	printf("pls u enter a name: ");
	gets(name);
	int leng = strlen(name),sp;

	for (int i = 0; i < leng; i++)
	{
		for (int j = 0; i >= j; j++)
		{
			printf("%c",name[j]);
		}
		for (int k = 0; k < 2*(leng-i); k++)
		{
			printf(" ");
		}
		for (int j = 0; i >= j; j++)
		{
			printf("%c",name[j]);
		}
		
		printf("\n");
	}
	
	for (int m = leng; m>0; m--)
	{
		for (int o = 0; m >= o; o++)
		{
			printf("%c",name[o]);
		}
		for (int l = 0;l < 2*(leng-m); l++)
		{
			printf(" ");
		}
		for (int n = 0; m >= n; n++)
		{
			printf("%c",name[n]);
		}
		
		printf("\n");
	}
	

	system("pause");
	return (0);
}