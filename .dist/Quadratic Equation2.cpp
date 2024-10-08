#include<stdio.h>
#include<math.h>
int main(){


float a, b, c, discriment, root1,root2,real,imegine;
printf("enter  Cofficient a,b and c : ");
scanf("%f",&a,&b,&c);

discriment = b*b-4*a*c;
if (discriment > 0){
    root1 = (-b + sqrt(discriment))/(2*a);
     root2 = (-b - sqrt(discriment))/(2*a);
     printf("root1 = %.2f",root1);
      printf("root2 = %.2f",root2);

    } else if(discriment == 0){
        root1 = root2 = -b / (2*a);
        printf("root1 = root2 = %.2f\n");

     } 

else{
     real = -b/(2*a);
     imegine = sqrt(-discriment)/(2*a);
     printf("root1 = %.2lf+%.2lfi",real,imegine);
      printf("root2 = %.2lf+%.2lfi",real,imegine);

}
return 0;
}