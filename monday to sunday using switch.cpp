//monday to sunday using swith case 

#include<stdio.h>
int main( ){
	int day;
	printf("1.Monday...\n");
	printf("2.Tuesday...\n");
	printf("3.Wednessday...\n");
	printf("4.Thursday...\n");
	printf("5.Friaday...\n");
	printf("6.Saturday...\n");
	printf("7.Sunday...\n");
	printf("Enter a day:...\n");
	scanf("%d",&day);
	
	switch(day)
	{
		case1:
			printf("Monday");
		break;
		
		case2:
			printf("Tuesday");
		break;
		
		case3:
			printf("Wednessday");
		break;
		
		case4:
			printf("Thursday");
		break;
		
		case5:
			printf("Friaday");
		break;
		
		case6:
			printf("Saturday");
		break;
		
		case7:
			printf("Sunday");
		break;
		
		defult:
			printf("Invalid input");
			break;
	}
}