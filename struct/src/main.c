#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int id = 0, ids = 0, idp = 0;
struct scholl
{
	char name[30];
	char surname[20];
	char birthdate[11];
} teacher[50], student[50], personal[50];
void list(int s)
{
	switch (s)
	{
	case 1:
		for (int i = 0; i < id; i++)
		{
			printf("teacher; id: %d name: %s surname: %s birthdate: %s\n", i, teacher[i].name, teacher[i].surname, teacher[i].birthdate);
		}
		break;
	case 2:
		for (int i = 0; i < ids; i++)
		{
			printf("student; id: %d name: %s surname: %s birthdate: %s\n", i, student[i].name, student[i].surname, student[i].birthdate);
		}
		break;
	case 3:
		for (int i = 0; i < idp; i++)
		{
			printf("personal; id: %d name: %s surname: %s birthdate: %s\n", i, personal[i].name, personal[i].surname, personal[i].birthdate);
		}
		break;
	default:
		break;
	}
}
void func(int s, int s1)
{
	static char *cpy;
	int n;
	switch (s)
	{
	case 1:
		switch (s1)
		{
		case 1:
			printf("pls u enter %d. teacher data\n", id + 1);
			printf("name: ");
			scanf("%s", &cpy);
			strcpy(teacher[id].name, &cpy);
			printf("surname: ");
			scanf("%s", &cpy);
			strcpy(teacher[id].surname, &cpy);
			printf("birthdate(dd/mm/yyyy): ");
			scanf("%s", &cpy);
			strcpy(teacher[id].birthdate, &cpy);
			id++;
			break;
		case 2:
			list(1);
		jump1:
			printf("u enter edit id: ");
			scanf("%d", &n);
			if (n <= id)
			{
				printf("new name: ");
				scanf("%s", &cpy);
				strcpy(teacher[n].name, &cpy);
				printf("new surname: ");
				scanf("%s", &cpy);
				strcpy(teacher[n].surname, &cpy);
				printf("new birthdate(dd/mm/yyyy): ");
				scanf("%s", &cpy);
				strcpy(teacher[n].birthdate, &cpy);
			}
			else
				goto jump1;
			break;
		case 3:
			list(1);
		jump2:
			printf("u enter delete id: ");
			scanf("%d", &n);
			if (n <= id)
			{
				for (int j = n; j < id; j++)
				{
					strcpy(teacher[j].name, teacher[j + 1].name);
					strcpy(teacher[j].surname, teacher[j + 1].surname);
					strcpy(teacher[j].birthdate, teacher[j + 1].birthdate);
				}
				id--;
			}
			else
				goto jump2;
			break;
		case 4:
			list(1);
			break;
		default:
			break;
		}
		break;
	case 2:
		switch (s1)
		{
		case 1:
			printf("pls u enter %d. student data\n", ids + 1);
			printf("name: ");
			scanf("%s", &cpy);
			strcpy(student[ids].name, &cpy);
			printf("surname: ");
			scanf("%s", &cpy);
			strcpy(student[ids].surname, &cpy);
			printf("birthdate(dd/mm/yyyy): ");
			scanf("%s", &cpy);
			strcpy(student[ids].birthdate, &cpy);
			ids++;
			break;
		case 2:
			list(2);
		jumps:
			printf("u enter edit id: ");
			scanf("%d", &n);
			if (n <= ids)
			{
				printf("new name: ");
				scanf("%s", &cpy);
				strcpy(student[n].name, &cpy);
				printf("new surname: ");
				scanf("%s", &cpy);
				strcpy(student[n].surname, &cpy);
				printf("new birthdate(dd/mm/yyyy): ");
				scanf("%s", &cpy);
				strcpy(student[n].birthdate, &cpy);
			}
			else
				goto jumps;
			break;
		case 3:
			list(2);
		jumps2:
			printf("u enter delete id: ");
			scanf("%d", &n);
			if (n <= ids)
			{
				for (int j = n; j < ids; j++)
				{
					strcpy(student[j].name, student[j + 1].name);
					strcpy(student[j].surname, student[j + 1].surname);
					strcpy(student[j].birthdate, student[j + 1].birthdate);
				}
				ids--;
			}
			else
				goto jumps2;
			break;
		case 4:
			list(2);
			break;
		default:
			break;
		}
		break;
	case 3:
		switch (s1)
		{
		case 1:
			printf("pls u enter %d. personal data\n", idp + 1);
			printf("name: ");
			scanf("%s", &cpy);
			strcpy(personal[idp].name, &cpy);
			printf("surname: ");
			scanf("%s", &cpy);
			strcpy(personal[idp].surname, &cpy);
			printf("birthdate(dd/mm/yyyy): ");
			scanf("%s", &cpy);
			strcpy(personal[idp].birthdate, &cpy);
			idp++;
			break;
		case 2:
			list(3);
		jumpp:
			printf("u enter edit id: ");
			scanf("%d", &n);
			if (n <= idp)
			{
				printf("new name: ");
				scanf("%s", &cpy);
				strcpy(personal[n].name, &cpy);
				printf("new surname: ");
				scanf("%s", &cpy);
				strcpy(personal[n].surname, &cpy);
				printf("new birthdate(dd/mm/yyyy): ");
				scanf("%s", &cpy);
				strcpy(personal[n].birthdate, &cpy);
			}
			else
				goto jumpp;
			break;
		case 3:
			list(3);
		jumpp2:
			printf("u enter delete id: ");
			scanf("%d", &n);
			if (n <= idp)
			{
				for (int j = n; j < idp; j++)
				{
					strcpy(personal[j].name, personal[j + 1].name);
					strcpy(personal[j].surname, personal[j + 1].surname);
					strcpy(personal[j].birthdate, personal[j + 1].birthdate);
				}
				idp--;
			}
			else
				goto jumpp2;
			break;
		case 4:
			list(3);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
int main()
{
	int slc, slc1;
go:
	printf("pls u select(1:teacher 2:student 3:personal 4:all list): ");
	scanf("%d", &slc);
	switch (slc)
	{
	case 1:
		printf("pls u select (1:new 2:edit 3:delete 4:list): ");
		scanf("%d", &slc1);
		func(slc, slc1);
		break;
	case 2:
		printf("pls u select (1:new 2:edit 3:delete 4:list): ");
		scanf("%d", &slc1);
		func(slc, slc1);
		break;
	case 3:
		printf("pls u select (1:new 2:edit 3:delete 4:list): ");
		scanf("%d", &slc1);
		func(slc, slc1);
		break;
	case 4:
		printf("********************\\\TEACHERS//*********************\n");
		list(1);
		printf("********************\\\STUDENTS//*********************\n");
		list(2);
		printf("********************\\\PERSONALS//*********************\n");
		list(3);
	default:
		break;
	}
	goto go;
	system("pause");
	return (0);
}