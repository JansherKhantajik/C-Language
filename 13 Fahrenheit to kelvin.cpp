#include<stdio.h>
main()
{
	//Q13. Write a program that takes temperature in Fahrenheit and covert into the Kelvin temperature.
	
	float f,k;
	
	printf("Enter Fahrenheit value : ");
	scanf("%f",&f);
	
	k=5*(f-32)/9 + 273;
	printf("\nFahrenheit into Kelvin  is : %.2f",k);

}
