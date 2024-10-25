#include<stdio.h>
int main(){
    int n,f1,f2,f3;
    printf("enter a num ");
    scanf("%d",&n);
    f1=0;f2=1;
    printf("%d\n %d\n",f1,f2);
    f3=f1+f2;
    while(f3<=n){
        printf("%d\n",f3);
        f1=f2;
        f2= f3;
        f3=f1+f2;
    }
}