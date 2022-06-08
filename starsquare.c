//  * * * * * *
//  * * * * * *
//  * * * * * *
//  * * * * * *
//  * * * * * *
//  * * * * * *

#include<stdio.h>
void main()
{
	int count1=0,count2=0,a;
	printf("enter no. of psttern you want:\n");
	scanf("%d",&a);
	label1:
		printf("\n");
		count2++;
	label2:
		printf(" *");
		count1++;
		if (count1!=a)
		goto label2;
		else
		count1=0; 
	     	if(count2!=a)
	    	goto label1;
		    else 
	     	printf("\nyour pattern is ready");
	  
	
}