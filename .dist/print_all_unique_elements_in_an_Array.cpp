#include<stdio.h>
int main(){
    int i,n,j,k,arr1[n],count=0;
    printf("Enter total elements of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the value %d \n",i);
        scanf("%d",&arr1[i]);
    }
    printf("unique elements in array: \n");
    for(i=0;i<n;i++){
      count=0;
      for(j=0;j<i-1;j++) {
        if(arr1[i]==arr1[j]){
        count++;
      } 
      } 
    
    for(k=i+1;k<n;k++){
      if(arr1[i]==arr1[k]){
        count++;
      }
    }
    if(count==0){
        printf("%d\n",arr1[i]);
    }
    }
    
    printf("\n");
}