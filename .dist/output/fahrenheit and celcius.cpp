#include<stdio.h>
int main(){
	float celsious,fahrenheit;
	printf("enter the temp in celsious :");
	scanf("%f",&celsious);
    fahrenheit = (celsious * 9/5) + 32; 
	printf("%f celsious is eqal to %f fahrenheit \n",celsious,fahrenheit);
	
}