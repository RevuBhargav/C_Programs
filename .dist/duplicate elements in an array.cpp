#include<stdio.h>
int main(){
    int i,j,n;
    int a[n],count=0;
    printf("Enter the elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("value of %d ",i);
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(a[i]==a[j]){
            count++;
            break;
           }
        }
    }
    printf("duplicate numbers in array %d\n ",count);
}