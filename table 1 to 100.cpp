// write a program print table of 1 to 100

#include<stdio.h>
main(){
	
	int i,j,Number=1;
	
	for (i=1; i<=100; i++)
	{
	printf("\n \n Table Of %d",i);
		for (j=1; j<=10; j++)
	{
			printf("\n %d * %d = %d ",i,j,i*j);
	}
	
   }
	
}

