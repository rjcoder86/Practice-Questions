#include<stdio.h>
void main()
{
	int i,j=1,n,sum=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	for (i=1 ; i<=n ; i++)
	{
	//	printf("%d\n",sum);
		sum=sum+j;
		j++;
	}
	printf("%d\n",sum);
	if(sum%2==0)
	    printf("sum is even");
	else
    	printf("sum is odd");
	printf("\nend of the code");
}