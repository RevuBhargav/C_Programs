#include<stdio.h>
int main(){
    int n,i;
    int number[n];
    printf("Input the NUm of arrays  : ");
    scanf("%d",&n);
    printf("enter the elements of %d",n);
    for(i=0;i<n;i++){
        printf("enter num %d : ",i);
        scanf("%d",&number[i]);

    }
    for(i=0;i<n;i++){
        printf("%d",number[i]);
    }
    printf("Numbers in reverse order %d \n");
    for(i=n-1;i>=0;i--){
        printf("%d",number[i]);
    }
    printf("\n");
}