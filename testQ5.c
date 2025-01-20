#include<stdio.h>
void main()
{
	int p, choice;
	printf("enter pecentage\n");
	scanf("%d",&p);
	if(p>=60 && p<=100)
	printf("Congratulations!!!! you got distinction");
	else if(p<60 && p>=35)
	      printf("you are pass");
	      else if(p<35)
	           printf("you are fail, better luck next time :)");
	           
	printf("\nend of the code");
}