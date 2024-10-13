#include<stdio.h>
int main (){
	int num1,num2,num3;
	printf("enter the first intiger :");
	scanf("%d",&num1);
	printf("enter the second integer :");
	scanf("%d",&num2);
	printf("enter the third integer :");
	scanf("%d",&num3);
	
	
	if(num1>=num2 && num1>=num3){
		printf("The greatest number is: %d\n",num1);
		
	}
	else if(num2>=num1 && num2>=num3){
		
	    printf("The greatest number is: %d\n ",num2);
	}
	else{
	
		printf("both num eqal  %d\n",num3);
}
}
