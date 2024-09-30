#include<stdio.h>
int main(){
    int a=10,b=20,x;
   
     x=a;
     a=b;
     b=x; 
     
     printf("After swapping: a = %d, b = %d\n", a, b);
    
}