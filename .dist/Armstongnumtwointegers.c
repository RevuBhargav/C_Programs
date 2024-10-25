#include<stdio.h>
int main(){
    int lower,upper,num,r,temp,sum=0;
    printf("enter a lower and upper case values : ");
    scanf("%d %d",&lower,&upper);
     printf("Armstrong numbers between %d and %d are:\n", lower, upper);
    for(num = lower;num<=upper;num++){
        temp = num;
        sum=0;
        while(temp != 0){
            r = temp %10;
            sum += r*r*r;
            temp/=10;

        }
        if(sum == num)
        printf("%d\n",num);
    }
    
}