#include<stdio.h>
int main(){
	float celcius,fahranheit;
	printf("Input a temperature (in Centigrade): ");
	scanf("%f",&fahranheit);
	
	celcius = (5/9)*(fahranheit-32);
	printf("%f degrees Fahrenheit.\n",fahranheit);
}