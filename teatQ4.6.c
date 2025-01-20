#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf(" triangle is equilateral");
	else if (a==b && a!=c || a==c && a!=b)
	printf("triangle is isocales");
	else
	printf("triangle is scolence");
}