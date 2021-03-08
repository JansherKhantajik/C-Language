#include<stdio.h>
main(){
	// Write an program that print All Odd number from Initial to final value
 int i,n,m,count,sum;
 
 printf("Enter First Value ");
 scanf("%d",&n);
printf("Enter Final Value ");
 scanf("%d",&m);

 count =0;
 sum=0;
 for(i=n; i<=m; i++){
 
 	if (i%2!=0){
 		
 		printf("%d ",i);
 		count=count+1;
 		sum=sum+i;
	 }
   } 
   printf("\n\nTotal ODD numbers = %d ",count);
   printf("\nSum of all ODD numbers = %d ",sum);
   
   
}

