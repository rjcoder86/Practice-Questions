#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter no.");
	scanf("%d",&n);
	for(i=1; i<=n ; i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=1; j<=2*i-1 ;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1; i<=n ; i++)
	{   
	   for(j=1; j<=2*n;j++)
	   {
	   	printf(" ");
	   }
		for(j=n;j>=n-i;j--)
		{
			printf(" ");
		}
		for(j=1; j<=2*(n-i)+1 ;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}