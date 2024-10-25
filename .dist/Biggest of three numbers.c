#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the 3 values : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("A is big");

        }else{
            printf("c is big");
        }
    }
    else{
        if(b>c){
            printf("B is big");
        }
        else{
            printf("C is big");
        }
    }
}