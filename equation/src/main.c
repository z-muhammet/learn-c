#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sel1 = 0, i;

	float s1, s2, s3, s4, s5;
	while (sel1 != 3)
	{
		printf("f(x):ax^2+bx+c (1)\ng(x):ax^3+bx^2+cx+d (2)\nexit (3)\npls u select: ");
		scanf("%d", &sel1);
		switch (sel1)
		{
		case 1:
			printf("pls u enter 'a' :");
			scanf("%f", &s1);
			printf("pls u enter 'b' :");
			scanf("%f", &s2);
			printf("pls u enter 'c' :");
			scanf("%f", &s4);
			printf("pls u enter 'x' :");
			scanf("%f", &s3);
			printf("u need this: %.3f\n", s1 * s3 * s3 + s2 * s3 + s4);
			break;
		case 2:
			printf("pls u enter 'a' :");
			scanf("%f", &s1);
			printf("pls u enter 'b' :");
			scanf("%f", &s2);
			printf("pls u enter 'c' :");
			scanf("%f", &s4);
			printf("pls u enter 'd' :");
			scanf("%f", &s5);
			printf("pls u enter 'x' :");
			scanf("%f", &s3);
			printf("u need this: %.3f\n", (float)s1 * s3 * s3 * s3 + s2 * s3 * s3 + s4 * s3 + s5);
			break;
		case 3:
		break;
		default:
			printf("pls try again");
			break;
		}
	}

	system("pause");
	return (0);
}