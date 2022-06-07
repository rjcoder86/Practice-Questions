//  *
//  * *
//  *   *
//  *     *
//  *       *
//  *         *
//  * * * * * * *

#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter no");
	scanf("%d",&n);
		for (i=1; i<=n ; i++)
	{
		for (j=1;j<=i; j++)
		{
			if(j==1 || i==n || i==j)
			printf(" *");
			else
			printf("  ");
		}
		printf("\n");
	}
}