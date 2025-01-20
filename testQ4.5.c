#include<stdio.h> //consonants in a to z
void main()
{
	int i;
	char ch='a';
	for(i=1 ; i<=26; i++)
	{
		if(ch!='a' || ch!='e' || ch!='i' || ch!='o' || ch!='u')
		{
		printf("%c  ",ch);
	    }
		
		ch++;
	}
    printf("\nend");
}