#include<stdio.h>
void main()
{
	int a,b ,c,d,e,f,g,n;
	printf("enter rs");
	scanf("%d",&n);
	a=n/2000;
	b=n%2000;
	printf("2000 rs nots %d\n",a);
	
	c=b/500;
	d=b%500;
	printf("500 rs nots %d\n",c);
	
	e=d/200;
	f=d%200;
	printf("200 rs nots %d\n",e);
	
	g=f/100;
    printf("100 rs nots %d",g);
	
}