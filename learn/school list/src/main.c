#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sel, ns = 1, ss, sc, ed;
	char *name[36];
	char *surname[36];
	char *cls[36];
	char sp;

	while (sel != 5)
	{
		printf("add student(1)\nstudent list(2)\ndelete student(3)\nedited student(4)\nexit(5)\npls u select: ");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:

			for (int i = ns; i <= 40; i++)
			{
				printf("ur need %d. new student add ? (yes(y) no(n)): ", i);
				scanf("%s", &sp);
				if (sp == 'n')
				{
					ns = i;
					break;
				}
				printf("%d. student\npls u enter Name: ", i);
				scanf("%s", &name[i]);
				printf("pls u enter Surname: ");
				scanf("%s", &surname[i]);
				printf("pls u enter class: ");
				scanf("%s", &cls[i]);
			}

			break;
		case 2:
			for (int j = 1; j < ns; j++)
			{
				printf("number: %d.\tname: %s \tsurname: %s \tclass: %s \n", j, &name[j], &surname[j], &cls[j]);
			}
			break;
		case 3:
			for (int k = 1; k < ns; k++)
			{
				printf("number: %d.\tname: %s \tsurname: %s \tclass: %s \n", k, &name[k], &surname[k], &cls[k]);
			}
			printf("pls u select delete student (u write student number): ");
			scanf("%d", &ss);
			name[ss] = 0;
			surname[ss] = 0;
			cls[ss] = 0;
			break;
		case 4:
			for (int m = 1; m < ns; m++)
			{
				printf("number: %d.\tname: %s \tsurname: %s \tclass: %s \n", m, &name[m], &surname[m], &cls[m]);
			}
			printf("pls u enter edited student data (pls write number): ");
			scanf("%d", &ed);
			if (ed < ns)
			{
				printf("name: ");
				scanf("%s", &name[ed]);
				printf("surname: ");
				scanf("%s", &surname[ed]);
				printf("class: ");
				scanf("%s", &cls[ed]);
			}
			else
				printf("this not defined\n");

			break;
		case 5:
			printf("good luck\n");
			break;
		default:
			printf("pls try again...\n");
			break;
		}
	}
	system("pause");
	return (0);
}