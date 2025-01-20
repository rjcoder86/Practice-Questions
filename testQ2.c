#include<stdio.h>
void main()
{
	int a,b,c,choice;
	printf("enter a choice for operation; 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Mod");
	scanf("%d",&choice);
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case 1:
			printf("Addition is %d",c=a+b);
			break;
		case 2:
			printf("Substraction  is %d",c=a-b);
			break;
		case 3:
			printf("Multiplication is %d",c=a*b);
			break;
		case 4:
			printf("Division  is %d",c=a/b);
			break;
		case 5:
			printf("Mod is %d",c=a%b);
			break;
		default:
			printf("enter corrrect choice");
			break;				
	}
	printf("\nend of the code");
	
}