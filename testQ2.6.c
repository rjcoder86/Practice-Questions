#include<stdio.h>
void main()
{
	int n,i=1,a=0,count=0;
	printf("enter no.");
	scanf("%d",&n);
	label:
		printf("\n%d",a);
		a=a+i;
		
		count++;
		if (count<=n)
		goto label;
		else
		printf("\nend");
	
	
}