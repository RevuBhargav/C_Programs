#include<stdio.h>
int main(){
    int n,i;
    double sum=0,average;
    float number[n];
    printf("Enter a num of Elements :");
    scanf("%d",&n);
     for(i=1;i<n;i++){
        printf("Enter the value %d\n",i+1);
        scanf("%f",&number[i]);
        sum+=number[i];
     }
     average = sum /n;
     printf("The average Number of %.2f\n",average);
}