#include<stdio.h>
int main(){
    int i,j,row,cols,a[10][10],t[10][10];
    printf("enter number of rows   : ");
    scanf("%d",&row);
     printf("enter number of cols   : ");
    scanf("%d",&cols);
    printf("Enter elements %d * %d of A : ",row,cols);
    for(i=0;i<row;i++){
        for(j=0;j<cols;j++){
         scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<cols;j++){
         printf("%d\t",a[i][j]);
        }
    }
     for(i=0;i<row;i++){
        for(j=0;j<cols;j++){
            t[i][j] = a[i][j];
        }
     }
     for(i=0;i<row;i++){
        for(j=0;j<cols;j++){
            printf("%d\t",t[i][j]);
        }
     }

}