#include<stdio.h>
int main()
{
	int num, i, j;
	printf("enter number : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num; j++)
			if ((i + j) % 2 == 0) printf("*"); else printf(" ");
		printf("\n");
	}
	printf("\n");
	return 0;
}