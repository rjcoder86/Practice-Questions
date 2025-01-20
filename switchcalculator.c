#include<stdio.h>
void main()
{
	int a , b,c, choice;
	printf("enter operation code \n 1:addition \n 2:substraction \n 3:multiplication \n 4:division \n 5:mod");
	scanf("%d",&choice);
	printf("two numbers: ");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case 1:
			printf("addtion is:%d",c=a+b);
			break;
		case 2:
			printf("substraction is :%d",c=a-b);
			break;
		case 3:
			printf("multiplication is :%d",c=a*b);
			break;
		case 4:
			printf("divsion is: %d",c=a/b);
			break;
		case 5:
			printf("mod is:%d",c=a%b);
			break;
		default:
			printf("enter correct choice");
	}
}