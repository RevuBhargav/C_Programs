#include<stdio.h>
int main(){
    int r1,c1,r2,c2,a[10][10],b[10][10],c[10][10],i,j,k;
    printf("enter a num of Rows and colums in A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter a rows and colums in B: ");
    scanf("%d %d",&r2,&c2);
    if(c1==r2){
        printf("Enter the %d * %d in A matrix \n",r1,c1);
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
         printf("Enter the %d * %d in B matrix \n",r2,c2);
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&b[i][j]);
            }
        }
         printf("value of A matrix \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
            printf("%d\n",a[i][j]);
            }
        }
        printf("value of matrix B \n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
            printf("%d\n",b[i][j]);
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
               c[i][j] = 0;
               for(k=0;k<c1;k++){
                c[i][j]=c[i][j] + a[i][k] * b[k][j];
               }
            }
        }
        printf("values of matrix c \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("%d \t",c[i][j]);
            }
        }
        
    }
    else{
        printf("matrix is not possible \n");
    }
}