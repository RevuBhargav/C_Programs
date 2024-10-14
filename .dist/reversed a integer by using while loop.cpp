#include<stdio.h>
int main(){
    int n,reversed=0,remainder;
    printf("enter a numbers : ");
    scanf("%d",&n);
    while(n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n/10;
    }
    printf("reversed value : %d\n",reversed);
}