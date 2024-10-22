#include<stdio.h>
int main(){
    int n,i,max;
    float number[n];
    printf("enter a Number of elements in array :");
    scanf("%d",&n);
    printf("enter %d value :\n",n);
    for(i=0;i<n;i++){
        scanf("%f",&number[i]);

    }
    max = number[0];
    for(i=1;i<n;i++){
        if(number[i] > max)
            max = number[i];
        
    }
    printf("the largest number of %d\n",max);
}