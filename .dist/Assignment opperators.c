#include<stdio.h>
int main()
{
	int a = 10;
	int b ;

    a = b;
	 printf("%d \n",a) ;
	 a += b;
	 printf("%d \n",a);
	 a -= b;
	 printf("%d \n",a);
	 a /= b;
	 printf("%d \n",a);
	 a *= b;
	 printf("%d \n",a);
	 a %= b;
	 printf("%d \n",a);
}