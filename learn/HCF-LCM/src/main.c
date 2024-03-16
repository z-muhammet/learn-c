#include <stdio.h>
#include <stdlib.h>

int main()
{
	int s1, s2,e1=1 , sel;

	while (sel != 2)
	{
		printf("HCF (1)\nexit (2)\n");
		printf("pls u select: ");
		scanf("%d", &sel);
		if (sel ==1 )
		{
			printf("1. number: ");
			scanf("%d", &s1);
			printf("2. number: ");
			scanf("%d", &s2);
		}
		switch (sel)
		{
		case 1:
			if (s1 < s2)
			{
				for (int i = s2; i > 0; i--)
				{
					if (s1 % i == 0 && s2 % i == 0)
					{
						printf("HCF(%d, %d) = %d\n", s1, s2, i);
						break;
					}
				}
			}
			else
			{
				for (int i = s1; i > 0; i--)
				{
					if (s1 % i == 0 && s2 % i == 0)
					{
						printf("HCF(%d, %d) = %d\n", s1, s2, i);
						break;
					}
				}
			}

			break;

		case 2:
			printf("\n");
			break;

		default:
			printf("pls try again...\n");
			break;
		}
	}

	system("pause");
	return (0);
}