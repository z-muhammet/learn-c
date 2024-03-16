#include <stdio.h>
#include <stdlib.h>
void edit(int id[], int no, char *name[], char *job[], char *area[], int status[])
{
	int selid = 0, select = 0;

	while (select != 5)
	{
		
			printf("pls u enter edited personal id: ");
			scanf("%d", &selid);
		if (selid < no)
		{
			printf("pls u enter edited data (name(1) work(2) area(3) status(4) exit(5)): ");
			scanf("%d", &select);
			switch (select)
			{
			case 1:
				list(id, name, job, area, no, status);
				printf("id: %d pls u enter new name: ", selid);
				scanf("%s", &name[selid]);
				break;
			case 2:
				list(id, name, job, area, no, status);
				printf("id: %d pls u enter new job: ", selid);
				scanf("%s", &job[selid]);
				break;
			case 3:
				list(id, name, job, area, no, status);
				printf("id: %d pls u enter new area: ", selid);
				scanf("%s", &area[selid]);
				break;
			case 4:
				list(id, name, job, area, no, status);
				printf("id: %d pls u enter new status (active (1) passive(2) leave the job(3)): ", selid);
				scanf("%d", &status[selid]);
				while (status[selid] > 3)
					{
						printf("pls try again (active (1) passive(2) leave the job(3)): ");
						scanf("%d", &status[selid]);
					}
				break;
			case 5:
				select = 5;
				break;
			default:
				printf("pls u try again");
				break;
			}
		}
		else
		{
			printf("try again\n");
		}
	}
}
void list(int id[], char *name[25], char *job[], char *area[], int sb, int status[])
{
	for (int i = 1; i < sb; i++)
	{
		printf("id: %d\t name: %s\t work: %s \t area: %s\t status: ", id[i], &name[i], &job[i], &area[i]);
		if (status[i] == 1)
		{
			printf("active\n");
		}
		else if (status[i] == 2)
		{
			printf("passive\n");
		}
		else if (status[i] == 3)
		{
			printf("leave the job\n");
		}
		else
		{
			printf("unknow\n");
		}
	}

	return (0);
}
int main()

{

	int id[256], ss, sa = 256, sb = 1, status[256], sls;
	char *name[25], *area[25], *job[25], yn, *deneme[25];

	while (ss != 4)
	{
		printf("add register(1)\nlisting(2)\nexit(3)\npls u select: ");
		scanf("%d", &ss);
		switch (ss)
		{
		case 1:
			for (int i = sb; i < sa; i++)
			{
				printf("u need new register ?(yes(y), no(n)): ");
				scanf("%s", &yn);
				if (yn == 'y')
				{
					id[i] = i;
					printf("pls u enter name: ");
					scanf("%s", &name[i]);
					printf("pls u enter job: ");
					scanf("%s", &job[i]);
					printf("pls u enter area: ");
					scanf("%s", &area[i]);
					printf("pls u select status (active (1) passive(2) leave the job(3)): ");
					scanf("%d", &status[i]);
					while (status[i] > 3)
					{
						printf("pls try again (active (1) passive(2) leave the job(3)): ");
						scanf("%d", &status[i]);
					}
				}
				else
				{
					sb = i;
					printf("good luck...\n");
					break;
				}
			}

			break;
		case 2:
			list(id, &name, &job, &area, sb, status);

			break;
		case 3:
			list(id, &name, &job, &area, sb, status);
			edit(id, sb, &name, &job, &area, status);

			break;
		default:
			printf("good luck...\n");
			break;
		}
	}

	system("pause");
	return (0);
}