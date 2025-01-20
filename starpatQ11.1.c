#include<stdio.h>
void main()
{
	int i,j,n,k;
	printf("enter no");
	scanf("%d",&n);
	k=n;              //my logic 
		for (i=1; i<=n ; i++)
	{
		for (j=1;j<=k; j++)
		{
			printf("* ");
		}
		printf("\n");
		k--;
	}
}