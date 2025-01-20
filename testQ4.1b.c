#include<stdio.h>
void main()
{
	int i=1, j=1, n,m;
	printf("enter a number");
	scanf("%d",&n);
     label :
     	if(i==1 && j<=n || j==1)
     	printf("*");
     	else 
     	printf(" ");
     	
     	j++;
        if (j<=n*n)
        goto label;
        else
		printf("\nend");
	 	
}