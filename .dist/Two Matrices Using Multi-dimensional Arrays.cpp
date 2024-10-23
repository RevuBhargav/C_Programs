#include<stdio.h>
int main(){
    int i,j,n1,n2;
    int a[n1][n2],b[n1][n2],sum[n1][n2];
    printf("enter the num rows : ");
    scanf("%d",&n1);
    printf("enter the colums : ");
    scanf("%d",&n2);
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
       printf("Enter elements in 1 st matrix : \n",i,j);
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){

        
        printf("Enter elements in 2nd matrix : \n",i,j);
        scanf("%d",&b[i][j]);
    }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            sum[i][j]=a[i][j] + b[i][j];
        }
    }
    printf("sum of two matrix \n");
     for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
        printf("%d", sum[i][j]);
      if (j == n2 - 1) {
        printf("\n\n");
      }
    }
}
}