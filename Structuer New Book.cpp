#include<stdio.h>
struct book{
	char name[20];
	int  page;
	float price;
};
main()
{
	struct book book1[5];
	int i,num;
	
	printf("\t\t\tLibary Information");
	printf("\n\nEnter How Many Book Information to store : ");
	scanf("%d",&num);
	
	for (i=0; i<num; i++){
	printf("\n\nDetail of  Book # %d",i+1);
	printf("\nEnter Book name : ");
	scanf("%s",&book1[i].name);
	printf("Enter Book page : ");
	scanf("%d",&book1[i].page);
	printf("Enter Book price : ");
	scanf("%f",&book1[i].price);
   }
   printf("\n");
	
	for (i=0; i<num; i++){
	printf("\n\nDetails Book # %d",i+1);
	printf("\nBook Name = %s",book1[i].name);
	printf("\nBook Page = %d",book1[i].page);
	printf("\nBook Price = %f",book1[i].price);
    }
}

