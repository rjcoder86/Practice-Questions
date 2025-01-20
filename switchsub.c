#include<stdio.h>
void main()
{
	int phy,chem, math,bio,cs,p,t,choice;
	printf("enter phy,chem,math,bio and cs marks out of 50:");
	scanf("%d%d%d%d%d",&phy ,&chem ,&math  ,&bio ,&cs);
	printf("enter choice to see subjectwise percentage\n 1.phy\n 2.chem\n 3.math\n 4.bio\n 5.cs\n ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("phy perc. is:%d\n",p=100*phy/50);
			break;
		case 2:
			printf("chem perc. is :%d\n",p=100*chem/50);
			break;
		case 3:
			printf("math perc. is:%d\n",p=100*math/50);
			break;
		case 4:
			printf("bio perc. is: %d\n",p=100*bio/50);
			break;
		case 5:
			printf("cs perc. is:%d\n",p=100*cs/50);
			break;
		default:
			printf("enter correct choice");
	}
	printf("your total percentage is %d",t=100*(phy+chem+math+bio+cs)/250);
}