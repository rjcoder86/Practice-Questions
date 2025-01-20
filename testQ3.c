#include<stdio.h>
void main()
{
	int a,b,n=1;
	printf(" enter first a number:");
	scanf("%d",&a);
	label:
		b=a*n;
		printf("%d\n",b);
		n++;
		if (n<=10)
		goto label;
		else
		printf("end of the code");	
}