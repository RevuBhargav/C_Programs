#include<stdio.h>
int main(){
	int length,breath;
	printf("enter the lenth of the rectangular :");
	scanf("%d",&length);
	printf("enter the breath of the rectangular :");
	scanf("%d",&breath);
	if(length == breath){
		printf("the rectangular is sqare \n");
	}else{
		printf("the rectangular is not sqare");
	}
}