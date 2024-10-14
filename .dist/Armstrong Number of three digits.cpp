#include<stdio.h>
int main(){
    int n,r,temp,sum=0;
    printf("enter a value :");
    scanf("%d",&n);
    temp = n;
    while(temp > 0){
        r = temp %  10;
        sum += r*r*r;
        temp /= 10;
    }
    if(sum == n)
        printf("%d is a armstrong number",n);
    else
        printf("%d is not armstong number",n);
    
}