#include<stdio.h>
void main()
{
	int i,j,n,m=1,k=1;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1 ; i<=n ;i++)
	{
		for(j=1; j<=n-i; j++)
		{
			printf(" ");
		}
		k=1;
		for(j=1; j<=i; j++)
		{
			printf("%d",m);
			m=m*(i-j)/j;
		}
			
		}
		
		printf("\n");
	}
