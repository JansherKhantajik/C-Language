#include<stdio.h>
main()
{
  char name[20];
  int  a,d;
  float b,c;
  d=200; 
  printf("Marksheet \n");
  
  printf("Name               :  ",name);
  scanf("%s",name);
  
  printf("Enter Roll No      :  ",a);
  scanf("%d",&a);
  
 
  printf("\nEnter sub 1 mark   : ",b);
  scanf("%f",&b);

  printf("\nEnter sub 2 mark   : ",c);
  scanf("%f",&c);
  printf("Total Mark is      : %d",d);
  printf("\nObtain mark Is      : %f",b+c);
}
