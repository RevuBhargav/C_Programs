#include<stdio.h>
int main(){
    float d,b,c,root1,root2,disk;
    printf("Enter a value : ");
    scanf("%f",&d);
    printf("Enter b value : ");
    scanf("%f",&b);
    printf("Enter c value : ");
    scanf("%f",&c);
    disk = b*b - 4*a*c;
    root1 =(-b+sqrt(disk))/(2*a);
    root2 = (-b-sqrt(disk))/(2*a);
    printf("root1 = %f\n",root1);
    printf("root2 = %f\n",root2);

    return 0;
}