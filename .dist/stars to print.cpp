#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter a value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}