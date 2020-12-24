#include<stdio.h>
main()
{
	//Q20. Develop C program for calculating a student’s letter grade given the following using user defined function namely findGrade which will take marks as input and return a letter grade.
//below 60 = F
//60–69 = D
//70–79 = C
//80–89 = B
//90–100 = A

    int num;
    
    printf("Enter Mark : ");
    scanf("%d",&num);
    
    if(num>=90&&num<=100)
      printf("A");
    else if(num>=80&&num<=89)
      printf("B");
    else if(num>=70&&num<=79)
      printf("C");
    else if(num>=60&&num<=69)
      printf("D");
    else if(num<=59)
      printf("Fail");
    else 
      printf("Wronge Entrie");
}
