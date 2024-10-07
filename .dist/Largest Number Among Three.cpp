#include<stdio.h>
int main(){
float num1,num2,num3;
printf("Enter fthree num : ");
scanf("%f %f %f",&num1,&num2,&num3);

if(num1 >= num2){
    if(num2 >= num3){
        printf("The largest num : %.1f\n",num2);
    }else{
        printf("The largest num : %.1f\n",num3);
    }
}else{
    if(num2 >= num3){
        printf("The largest num : %.1f\n",num1);
    }else{
        printf("The largest num : %.1f\n",num3);
    }
}

    return 0 ;
}
