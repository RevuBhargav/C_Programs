#include<stdio.h>
int main(){
    int num;
printf("enter a num : ");
scanf("%d",&num);
if(num >= 0){
    if(num == 0){
        printf("The num is 0");
    }else{
        printf("the num is positive");
        
    }
} else{
    printf("The num is nagitive");
}
return 0 ;
}