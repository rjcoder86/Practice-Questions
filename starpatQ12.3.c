
#include<stdio.h>
void main()
{
	int i, j, s, n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
 {

	for (j=1; j<=n; j++)
	{
     	if (j==1 || j==n || i==n||i==1 )
		printf(" *");
		else 
		printf(" ");
	}
	printf("\n");
}
}
