#include<stdio.h>
int main(){
   int n,i;
   printf("enter a num : ");
   scanf("%d",&n);
   for(i=0;i<=n;i++){
    if(i==5)
    continue;
    printf("%d\n",i);
   } 
}