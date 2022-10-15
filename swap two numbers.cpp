//WAP to swap two numbers without using third variable

#include<stdio.h>
int main ( ){
	
	int sum=0,size,x,temp;
	
	printf("enter the size of array...");
	scanf("%d",&size);
	
	int number [size];
	
	for(x=0;x<size;x++){
		printf("enter the number:\n");
		scanf("%d,&number[x]");
	}
	for (x=0;x<size;x+=2){
		temp=number[x];
		number[x]=number[x+1];
		number[x+1]=temp;
	}
	printf("\nArray enlements after swapping adjucent elements:\n");
	for (x=0;x=size;x++){
		printf("%d\n",number[x]);
	}
	
}