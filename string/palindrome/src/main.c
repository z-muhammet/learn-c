#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char word[15],check[15],check2;
	printf("welcome to polidrome check\npls u enter check word ");
	gets(word); 
	strcpy(check,word);
	printf("%s %s \n",strrev(check),word);
	if (strcmp(word,check) == 0)
	{
		printf("this is a polidrome word...\n");
	}
	else
	{
		printf("this is not a polidrome word...\n");
	}
	
	system("pause");
	return (0);
}