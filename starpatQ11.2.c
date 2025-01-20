#include<stdio.h>
void main()
{
	int i, j,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1; i<=n ; i++)
{
	for ( j=n; j>=n-i ; j--) 
 	{
	  printf(" ");
	}
	for(j=i; j<=n; j++) 
	{
		printf("*");
	}
	printf("\n");
}
}