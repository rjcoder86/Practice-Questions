#include<stdio.h>
void main()
{
	int a=9,i,n;
	long sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=10*a+9;
		printf("\n%d",a);
		sum=sum+a;
	}
	printf("\n\n%d",sum);
}