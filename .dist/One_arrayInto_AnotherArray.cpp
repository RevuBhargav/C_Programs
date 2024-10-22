#include<stdio.h>
int main(){
    int n,i;
    int arr1[n],arr2[n];
    printf("Enter a number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter value %d ",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("the elemnt store in first \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr1[i]);
    }
    printf("the elements store in anthor array \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr2[i]);
    }
    printf("\n");
}