#include<stdio.h>
int main(){
    char ch1,ch2;
    printf("enter a lower case alphabet : ");
    scanf("%c",&ch1);
     ch2 = ch1-32;
     printf("upper case alphabet %c",ch2);
}