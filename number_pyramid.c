//      1 
//     1 2
//    2 3 4
//   4 5 6 7
//  7 8 9 10 11

#include<stdio.h>
void main()
{
	int i,j,n,m=1;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1 ; i<=n ;i++)
	{
		for(j=1; j<=n-i; j++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ",m++);
		}
		m--;
		printf("\n");
	}
}