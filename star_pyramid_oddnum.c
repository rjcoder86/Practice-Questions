//      *
//     ***
//    *****
//   *******
//  *********

#include<stdio.h>
void main()
{
	int i, j, s, n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1; i<=n-1 ; i++)
{
	for ( s= i; s<n ; s++) 
 	{
	  printf(" ");
	}
	for(j=1 ; j<=2*i-1 ; j++) 
	{
		printf("*");
	}
	printf("\n");
}
}