#include<stdio.h>
int main(){
   int chapters;
   printf("enter Chapter names :");
   scanf("%d",&chapters);
   switch(chapters){
    case 1 :
    printf("matrix");
    break;
    case 2 :
    printf("variables");
    break;
    case 3 :
    printf("data types");
    break;
    case 4 :
    printf("loops");
    break;
    defualt :
    printf("no topics");
   }
}