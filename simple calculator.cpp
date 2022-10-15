//simple calculator

#include<stdio.h>
int main ( ){
	char Operator;
	float number1,number2,result=0;
	
	printf("enter the operator...like(+,-,/,*,%)...");
	scanf("%c",&operator);
	
	printf("enter the digit...twis...\n");
	scanf("%f%f",&number1,&number2);
	switch(operator)
	
		{case'+':
			result=number1+number2;
		break;
		
		case'-':
			result=number1-number2;
		break;
		
		case'/':
			result=number1/number2;
		break;
		
		case'*':
			result=number1*number2;
		break;
		
		case'%':
			result=number1 % number2;
		break;
		
		defult:
			printf("\nInvalid operator");
		}
		printf("the value=%f",result);
	
	
}