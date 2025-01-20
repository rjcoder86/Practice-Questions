#include<stdio.h>
void main()
{
	int i ,n,count=0;
	printf("enter a number to check");
	scanf("%d",&n);
	for(i=2 ; i<=n ; i++)
	{
	   if(6*i-1==n || 6*i+1==n || n==2 || n==3)
	   {
	   count++;
     	}
    }
	if (count==0)
	printf("%d is not a prime number",n);
	else 
    printf(" %d is a prime number\n",n);

}