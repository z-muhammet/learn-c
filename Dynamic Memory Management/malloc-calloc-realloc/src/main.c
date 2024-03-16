#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("welcome to library system\n");
	char **book;
	char **author;
	static char yn, min, i, id, book1[20], author1[20];
	int max = 0;
	book = (char **)calloc(40, sizeof(char *));
	author = (char **)calloc(40, sizeof(char *));
	for (int i = 0; i < 40; i++)
	{
		book[i] = (char *)calloc(20, sizeof(char));
		author[i] = (char *)calloc(20, sizeof(char));
	}

	while (yn != 5)
	{
		printf("pls u select (new book:1 , delete book:2 , edit book:3 , list books:4 , exit:5): ");
		scanf("%d", &yn);
		switch (yn)
		{
		case 1:
			printf("pls u enter number of book: ");
			scanf("%d", &min);
			for (i = max; i < min; i++)
			{
				printf("pls u enter %d. book name: ", i + 1);
				scanf("%s", book1);
				book[i] = strdup(book1);
				printf("pls u enter %d. author name: ", i + 1);
				scanf("%s", author1);
				author[i] = strdup(author1);
				max++;
			}
			break;
		case 2:
			for (i = 0; i < max; i++)
				printf("id: %d book name: %s author name: %s\n", i, book[i], author[i]);
			printf("pls u enter delete book id: ");
			scanf("%d", &id);
			for (int i = id; i <= max; i++)
			{
				book[i] = book[i + 1];
				author[i] = author[i + 1];
			}
			max--;
			break;

		case 3:
			for (i = 0; i < max; i++)
				printf("id: %d book name: %s author name: %s\n", i, book[i], author[i]);

			printf("pls u enter edited book id: ");
			scanf("%d", &id);
			printf("new book name: ");
			scanf("%s", book1);
			book[id] = strdup(book1);
			printf("new author name: ");
			scanf("%s", author1);
			author[id] = strdup(author1);
			printf("id: %d book name: %s author: %s\n", id, book[id], author[id]);
			break;
		case 4:
			for (i = 0; i < max; i++)
				printf("id: %d book name: %s author name: %s\n", i, book[i], author[i]);
			break;
		case 5:
			break;
		default:
			printf("pls u try again\n");
			break;
		}
	}
	for (i = 0; i < max; i++)
	{
		free(book[i]);
		free(author[i]);
	}
	free(book);
	free(author);
	system("pause");
	return (0);
}