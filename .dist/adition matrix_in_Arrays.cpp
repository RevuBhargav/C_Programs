#include<stdio.h>
int main(){
  int i,j,r1,c1,r2,c2,a[10][10],b[10][10],c[10][10];
    printf("enter the two  matrix of A :");
    scanf("%d %d",&r1,&c1);
     printf("enter the two  matrix of B :");
    scanf("%d %d",&r2,&c2);
    if(r1 == c1 && r2 == r2){
       printf("Enter elements in %d in matrix A\n : ",r1*c1);
        for(i=0;i<r1;i++){        
        for(j=0;j<c1;j++){
           scanf("%d \n",&a[i][j]);

        }
    }
    printf("Enter elements in %d in matrix B\n : ",r2*c2);
        for(i=0;i<r2;i++){        
        for(j=0;j<c2;j++){
           scanf("%d ",&b[i][j]);

        }
    }
    printf("elements in matrix A\n : ");
        for(i=0;i<r1;i++){        
        for(j=0;j<c1;j++){
           printf("%d \n ",a[i][j]);

        }
    }
    printf("elements in matrix B\n : ");
        for(i=0;i<r2;i++){        
        for(j=0;j<c2;j++){
           printf("%d \n",b[i][j]);

        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("elements in matrix c\n : ");
        for(i=0;i<r2;i++){        
        for(j=0;j<c2;j++){
           printf("%d \n",c[i][j]);

        }
    }
    
    }else{
        printf("matrix addition is not possible \n");
    }
}