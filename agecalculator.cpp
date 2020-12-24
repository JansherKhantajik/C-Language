#include<stdio.h>
main()
{
	//write Program That show your age , months, weeks, days, hours,minuit and secound
	float y,m,c,agey,day,week,hour,min,sec,agem,d,days,month,dd,mi;
	
	//write date of birth yy-mm-dd 
	printf("Enter Your Birth Year : ",y);
	scanf("%f",&y);
	
	printf("Enter Your Birth Monthy : ",mi);
	scanf("%f",&mi);
	
	printf("Enter Your Birth Day : ",d);
	scanf("%f",&d);
	
    printf("Enter Current Year : ",c);
	scanf("%f",&c);
    
    //formula for converting the current mm dd into days
    
   
   month=12-mi;
    days=30-d;
    dd=month*30+days;
    
	// formula of converting
		
	agey=c-y;
	day=agey*365 + dd;
	week=day/7;
	hour=day*24;
	min=hour*60;
	sec=min*60;
	agem=day/30;
	
	//output
	
	printf("\nYour are %.1f Year Old",agey);
	printf("\nDays %f ",day);	
	printf("\nWeek %f ",week);
	printf("\nMonth %f ",agem);
	printf("\nHour %f ",hour);
	printf("\nMinuit %f ",min);
	printf("\nSecound %f ",sec);
	
}
