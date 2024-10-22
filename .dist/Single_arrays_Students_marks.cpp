#include<stdio.h>
int main(){
    int a[10],i,sum=0,subjects;
    float percentage;
    printf("enter a subjects :");
    scanf("%d",&subjects);
    printf("Enter marks of a students :\n");
    for(i=1;i<=subjects;i++){
        scanf("%d",&a[i]);

    }
    printf("Marks of Students:\n");
    for(i=1;i<=subjects;i++){
        printf("%d\n",a[i]);
    }
    printf("Total marks of Student :\n");
    for(i=1;i<=subjects;i++){
        sum+=a[i];

    }
    printf("%d\n",sum);
    percentage = (sum/(float)(subjects*100)*100);
    printf("percentage of student : %f\n",percentage);
}