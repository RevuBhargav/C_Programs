#include<stdio.h>
int main(){
   double num;
    printf("Enter a number");
    scanf("%f",&num);
    if(num>0){
        printf("given num is nagitive");
    }else if(num<0){
        printf("given num is positive");
    }else{
        printf("you entered zero");
    }

}