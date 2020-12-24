#include<stdio.h>
main()
{
	
	//Q12. Write a function that takes temperature in Centigrade as an input argument and returns the Kelvin temperature. [K = C + 273]
	
	float c,k;
	
	printf("Enter Centigrade value : ");
	scanf("%f",&c);
	
	k=c+273;
	
	printf("\nCentigrade into Kelvin  is : %.2f",k);

}
