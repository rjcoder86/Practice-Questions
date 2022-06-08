// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * *

#include<stdio.h>
void main()
{
	int l,w,i,j;
	printf("enter length and width of rectangle :");
	scanf("%d%d",&l,&w);
		for (i=1; i<=l ; i++)
	{
		for (j=1;j<=w; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}