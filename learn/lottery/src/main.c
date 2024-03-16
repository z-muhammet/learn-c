#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("this numbers changes ur life :) \n");
	srand(time(NULL));
	for (int i = 0; i<6; i++)
	{
		printf("#%d#\t",1+rand() % 59 );
	}
	printf("\nand ur lucky number: #%d#\n",rand()%60);
	system("pause");
	return (0);
}