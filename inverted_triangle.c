//   ***********
//    *********
//     *******
//      *****
//       ***
//        *

#include<stdio.h>
void main()
{
	int i, j, n;
	printf("Enter a no.");
	scanf("%d",&n);
	for (i=1 ; i<=n; i++)
	{
		for (j=n; j>=n-i; j--)
		{
		printf(" ");
	    }
	   /* for (j=i;j<=n;j++)
	    {
	    	printf("*");
		}
		for(j=i; j<n; j++)
		{
			printf("*");
		}   */
		 
		 for (j=1 ; j<=2*(n-i)+1 ; j++)
		 {
		 	printf("*");
		 }
		
	  printf("\n");
	}
}