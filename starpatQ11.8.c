#include<stdio.h>
void main()
{
	int row, space, star, n;
	printf("enter a number");
	scanf("%d",&n);
	for(row=1; row<=n ; row++)//condition for rows repetation
{
	for ( space= row; space<n ; space++) //prints 3 spaces at first
 	{
	  printf(" ");
	}
	for(star=1; star<=row; star++) //prints one * at first
	{
		printf(" *"); //just space will change pattern
	}
	printf("\n");
}
}