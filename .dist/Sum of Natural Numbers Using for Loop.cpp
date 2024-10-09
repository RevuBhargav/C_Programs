#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter a natural num : ");
    scanf("%d",&n);
    for(int i = 1; i<=n ; i++){
        sum += i;
    }
    printf("sum = %d\n",sum);
}