#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *door[10] = {"closed","closed","closed","closed","closed","closed","closed","closed","closed","closed"};
	printf("1.\t2.\t3.\t4.\t5.\t6.\t7.\t8.\t9.\t10.\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%s\t", door[i]);
		if (i == 9)
		{
			printf("\n");
		}
	}
	for (int j = 1; j <= 10; j++)
	{
		for (int k = 0; k < 10; k++)
		{
			if ((k+1) % j == 0)
			{
				if (door[k] == "closed")
				{
					door[k] = "open";
				}
				else
				{
					door[k] = "closed";
				}
			}
			printf("%s\t", door[k]);
			if (k == 9)
			{
				printf("\n");
			}
		}
	}

	system("pause");
	return (0);
}