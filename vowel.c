#include<stdio.h>
void main()
{
	char a;
	printf("enter a charactor");
	scanf("%c",&a);
	if (a=='a' || a=='e' || a=='i'||a=='o'|| a=='u')  
	{
		printf("charactor is vowel");
	}
	else
	{
		printf("charactor is consonant");
	}
}