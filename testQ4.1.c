#include<stdio.h>
void main()
{
	int i, j, n;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1 ; i<=n ; i++ )
	{
		for (j=1; j<=n;j++)
		{
			if (i==1 || i==n || j==1 || i==n/2+1)
			printf(" *");
			else
			printf("  ");
		}
		printf("\n");
	}
}