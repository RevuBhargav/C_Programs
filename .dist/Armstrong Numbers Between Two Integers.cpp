#include<stdio.h>
int main(){
    int n,n1,i,r,temp,sum=0;
    printf("enter two Number : ");
    scanf("%d %d",&n,&n1);
    for( i=n;i>=n1;i++){
        temp=i;
        sum=0;
        while(temp>0){
            r = n %10;
            sum += r*r*r;
            temp/=10;
        }
          i=temp;
        if(n = sum)
            printf("%d \n",n1);
        
           
        
    }
     printf("\n");
}