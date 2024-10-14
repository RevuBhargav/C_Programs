#include<stdio.h>
int main(){
int n,i,t1=0,t2=1,add;
printf("Enter a num : ");
scanf("%d",&n);
add=t1+t2;
printf("febancci series %d,%d\n",t1,t2);
for(i=1;i<=n;i++){
    t1=t2;
    t2=add;
    add=t1+t2;
    printf("%d\n",add);
}
}
