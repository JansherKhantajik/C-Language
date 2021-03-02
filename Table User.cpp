// write a program thats take a number to print the table 1 to the user number.

#include<stdio.h>
main(){
	
	int i,Number,Range;
	
	printf("Enter The Number to prints it Table : ");
	scanf("%d",&Number);
	printf("Enter The Range : ");
	scanf("%d",&Range);
	
	for (i=1; i<=Range; i++){
	
	printf("\n %d * %d = %d ",Number,i,i*Number);
	}
	
}
