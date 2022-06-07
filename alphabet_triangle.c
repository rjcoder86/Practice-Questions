// a 
// b c 
// d e f 
// g h i j 
// k l m n o 
// p q r s t u 

#include<stdio.h>
void main()
{
	int i,j,n;
	char ch='a';
	printf("enter no");
	scanf("%d",&n);
	for(i=1; i<=n ; i++)
	{
		for(j=1 ; j<=i; j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}