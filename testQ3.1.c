//accept 3 numbers and print in asc order

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("numbers in ascending order\n");
	if(a>b && a>c)
	{
		printf("%d\n",a);
		if(b>c)
	    printf("%d\n%d",b,c);
	    else
	    printf("%d\n%d",c,b);
    }
	if (b>a && b>c)
	{
	printf("%d\n",b);
		if(a>c)
	    printf("%d\n%d",a,c);
	    else
	    printf("%d\n%d",c,a);    
	}
	if (c>a && c>b)
	{
	printf("%d\n",c);
		if(b>a)
	    printf("%d\n%d",b,a);
	    else
	    printf("%d\n%d",a,b);   
    }
}