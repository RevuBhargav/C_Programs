#include<stdio.h>
int main(){
    int a[10],i,n;
    printf("enter size of the arrays: ");
    scanf("%d",&n);
    printf("enter elements in array \n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("elements of array \n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}