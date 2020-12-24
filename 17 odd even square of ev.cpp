#include<stdio.h>
main()
{
	//Q17. A function that finds out whether the number passed as an argument is even or odd and if the number is even, display its square and if the number is odd display the number as  it is.
	
	int num;
	
	printf("Enter any number : ");
	scanf("%d",&num);
	
	if (num%2==0)
	   printf("Square is %d ",num*num);
	else
	   printf("%d ",num);
}
