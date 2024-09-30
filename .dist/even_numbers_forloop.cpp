#include<stdio.h>
int main(){
int num,i;
printf("Enter a number :");
scanf("%d",&num);
 //printf("Even numbers from 1 to %d are:\n", num);
for(i=1;i<=num;i++){
    if( i % 2 == 0){
        printf("even numbers : %d\n",i);
    }
}


    return 0;
}