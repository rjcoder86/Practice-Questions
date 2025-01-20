
#include<stdio.h>
void main()
{
	int i, j, m, n;
	printf("enter the two sides of recatngle\n");
	scanf("%d%d",&n,&m);
	for(i=1; i<=n; i++)
 {

	for (j=1; j<=m; j++)
	{
     	if (j==1 || j==m || i==n||i==1 )
		printf(" *");
		else 
		printf("  ");
	}
	printf("\n");
}
}
