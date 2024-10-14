#include<stdio.h>
int main(){
    int a, b,p=1;
    printf("enter a two integer values : ");
    scanf("%d%d",&a,&b);
    for(int i=1;i<b;i++){
        p*=a;
    }
    printf("power of %d\n",p);
}