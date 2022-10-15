#include<stdio.h>
int main( ){
	int x,sum;
	
	printf("Enter an number.:");
	scanf("%d",&sum);
	
	for(x=1;x<=10;x++){
		printf("%d*%d=%d\n",sum,x,sum*x);
	}
}