#include <stdio.h>

int main()
{
	
//	a=50 b=60 
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;

	printf("ofter swapping a=%d , b=%d",a,b);
	return 0;
}
