#include<stdio.h>
main()
{
	
	/*Q24. An admission charge for The Little Rep Theater varies according to the age of the person. Develop a solution to print the ticket charge given the age of the person. The charges are as follows:
a. Over 55: $10.00
b. 21–54: $15.00
c. 13–20: $10.00
d. 3–12: $5.00
e. Under 3: Free*/

  int age;
  
  printf("ADMISSION CHARGE FOR THE LITTLE REP THEATER______________________\n");
  printf("Enter Age = ");
  scanf("%d",&age);
  
  if(age>=55)
    printf("PLEASE PAY $10.00 ");
  else if(age>=21&&age<=54)
    printf("PLEASE PAY $15.00 ");
  else if(age>=13&&age<=20)
    printf("PLEASE PAY $10.00 ");
  else if(age>=3&&age<=12)
    printf("PLEASE PAY $5.00 ");
  else 
    printf("FREE ");
}
