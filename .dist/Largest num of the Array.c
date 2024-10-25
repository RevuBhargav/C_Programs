#include<stdio.h>
int main(){
    int n,i;
    int a[n];
     printf("Enter the number of elements : ");
     scanf("%d",&n);
      for(i=0;i<n;i++){
        printf("value of %d ",i);
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++){
        if(a[0]<a[i]){
            a[0] = a[i];
        }
    }
    printf("largest num of elment= %d",a[0]);

}