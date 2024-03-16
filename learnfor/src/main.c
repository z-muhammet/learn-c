#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("******/numbers divisible by two and seven\******\n"); //u just change 2 and 7 
	int s;
	printf("please u select max width: ");
	scanf("%d",&s);
	for(int i=0;i<=s;i++)
	{
		if (i%2==0 && i%7==0) //u just change 2 and 7 
		{
			printf("%d divisible by two and seven\n",i);
		}
		else if(i%2==0 || i%7==0) //u just change 2 and 7 
		{
			printf("%d divisible by two or seven\n",i);
		}
		else
		{
			printf("%d dont divisible two and/or seven\n",i);
		}
		
	}
	system("pause");
	return (0);
}