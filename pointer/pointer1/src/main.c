#include <stdio.h>
#include <stdlib.h>
int main()
{
	static char *country[17];
	int i=0, sel;
	while (sel != 4)
	{
		printf("pls u select\n1:new country, 2:print value in char,3:print country value, 4:exit\n");
		fflush(stdin);
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			printf("pls u enter country: ");
			fflush(stdin);
			scanf(" %s",&country[i]);
			i++;
			break;
		case 2:
			for (int j = 0; country[j] != '\0'; j++)
			{
				printf("%d. veri: %s\n", j+1, &*(country+j));
			}
			break;
		case 3:
			for (int k = 0; country[k] != '\0'; k++)
			{
				printf("%d. veri: %x\n", k+1, &*(country + k));
			}

			break;
		case 4:
			break;
		default:
			break;
		}
	}

	system("pause");
	return (0);
}