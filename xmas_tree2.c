#include<stdio.h>
void main()
{
	int i, j, n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1; i<=n ; i++)
     {
     	for (j=i; j<n ; j++)
     	{
     		printf(" ");
		 }
		 for (j=1 ; j<=2*i-1; j++)
		 {
		 	printf("*");
		   }  
        printf("\n");	
	 }
	 for(i=3; i<=n ; i++)
     {
     	for (j=1; j<=n-i ; j++)
     	{
     		printf(" ");
		}
		 for (j=1; j<=2*i-1; j++)
		 {
		 	printf("*");
		   }  
        printf("\n");	
	 }
	 for (i=1; i<=n; i++)
	{
		for(j=1; j<=n-1; j++)
		{
			printf(" ");
		}
		for ( j=1; j<=2;j++)
		{
			printf("#");
		}
		printf("\n");
	}
}