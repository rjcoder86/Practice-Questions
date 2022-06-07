//     *        
//    * *
//   *   *
//  *     *
// *********

#include<stdio.h>
void main()
{
	int i, j, s, n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
 {
	for ( j= i; j<n ; j++) // same as (j=i ; j<=n-1 ; j++)
 	{
	  printf(" ");
	}
	for (j=1; j<=2*n-1; j++)
	{
     	if (j==1 || j==2*i-1 || i==n )
		printf("*");
		else 
		printf(" ");
	}
	printf("\n");
}
}
