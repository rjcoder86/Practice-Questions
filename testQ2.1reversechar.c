#include<stdio.h>
void main()
{
	int i,ch;
	printf("enter a charactor");
	scanf("%c",&ch);
	for (i='z'; i>=ch ; i--)
	{
		printf("%c\n",i);
	}
}