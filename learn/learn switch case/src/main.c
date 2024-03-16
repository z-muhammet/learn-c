#include <stdio.h>
#include <stdlib.h>
int main()
{
	char math;
	int s1, s2;
	float ss;
	printf("********calculator********\n");
	printf("pls u select [addition = 'a' ,subtraction = 's' ,multiplication = 'm' ,division = 'd']: ");
	scanf("%s", &math);
	printf("pls u enter a number: ");
	scanf("%d", &s1);
	printf("pls u enter a number: ");
	scanf("%d", &s2);
	switch (math)
	{
	case 'a':
		printf("%d + %d = %d\n", s1, s2, s1 + s2);
		break;
	case 's':
		printf("%d - %d = %d\n", s1, s2, s1 - s2);
		break;
	case 'm':
		printf("%d X %d = %d\n", s1, s2, s1 * s2);
		break;
	case 'd':
		printf("%d / %d = %d remainder = '%d'(or %f) \n", s1, s2, s1 / s2, s1 % s2, (double)s1 / (double)s2);
		break;

	default:
		printf("pls try again");
		break;
	}

	system("pause");
	return (0);
}