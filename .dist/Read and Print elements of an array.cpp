#include<stdio.h>
int main(){
    int n,i,num[n];
    printf("Enter size of the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter value %d ",i);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",num[i]);
    }
    printf("\n");
}