//  ******
//   *****
//    ****
//     ***
//      **
//       *

#include<stdio.h>
void main()
{
	int i, j,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=0; i<=n ; i++)
{
	for ( j=0; j<=i ; j++) 
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