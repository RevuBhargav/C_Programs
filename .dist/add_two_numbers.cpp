#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("Enter a first number :");
    scanf("%d",&num1);
    printf("Enter a second number");
    scanf("%d",&num2); 

     sum = num1 + num2;
     printf("%d + %d = %d \n",num1,num2,sum);
     
    return 0;
}