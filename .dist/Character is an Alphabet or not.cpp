#include<stdio.h>
int main(){
   char ch ;
   printf("enter a carecter value : ");
   scanf("%c",&ch);

   if((ch >= 'a'&& ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    printf("Carecter is an Alphabet %c\n",ch);
   }
   else{
    printf("carecter is not a alphabet %c\n",ch);
   }
}