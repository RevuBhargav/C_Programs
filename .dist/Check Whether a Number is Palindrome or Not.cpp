#include<stdio.h>
int main(){
    int n,p,remainder,reverse=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    p=n;
    while(n!=0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n/10;
    }
    if(p== remainder){
        printf("%d is palindrome",p);
    }else{
        printf("%d is not palindrome",p);
    }
}