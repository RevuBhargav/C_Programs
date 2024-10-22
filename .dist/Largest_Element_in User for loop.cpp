#include<stdio.h>
int main(){
    int n,i,max,largest;
    printf("Enter a elements :");
    scanf("%d",&n);
    max = largest;
    for(i=0;i<n;i++){
        printf("Enter numbers %d\n",i);
        scanf("%d",&largest);
        if(largest > max){
            max = largest;
        }
    }
    printf("largest num of %d\n",max);
}