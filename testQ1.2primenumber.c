#include<stdio.h>
void main()
{
	int i ,n,count=0;
	printf("enter a number to check");
	scanf("%d",&n);
	for(i=2 ; i<n ; i++)   //check no. divisible by no.s 1 to n
	{
	   if(n%i==0)
	   {
	   count++;
	   break;      //jump out of for loop
     	}
    }
	if (count==0)
	printf("%d is a prime number",n);
	else 
    printf(" %d is not a prime number\n",n);

}