#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter a side");
	scanf("%d",&n);
	for(i=1; i<=n ; i++)
	{
	   for(j=1; j<=n; j++)
	   {
	   	if(j==1 || i==1|| i==n || j==n)
	   	printf("* ");
	   	else
	   	printf("  ");
		}
		printf("\n");		
	}
	
}