#include<stdio.h>
void main()
{
	int choice;
	printf("press 1 or 2");
	printf("enter your choice");
	scanf("%d",&choice);
	switch (choice)
		{
		case 1:
			printf("hello\n");
			break;
		case 2:
		printf("good morning\n");
		break;
		default:
		printf("bye bye\n");
		break;
	}
	printf("end of the code");
}