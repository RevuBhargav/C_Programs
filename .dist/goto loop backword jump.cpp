#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter a value of n : ");
    scanf("%d",&n);
    loop : printf("%d\n",i);
    i++;
    if(i<=5){
        goto loop;
        
    }
}