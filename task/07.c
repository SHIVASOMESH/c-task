#include <stdio.h>

int main()
{
	int a,b;
	printf("before swapping number frist value a :");
	scanf("%d",&a);
	printf("before swapping number secend value b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("ofter swapping number a=%d,b=%d ",a,b);
	
	return 0;
}
