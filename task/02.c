#include<stdio.h>

int main()
{
	int n;
	printf("Enter the even or add number :");
	scanf("%d",&n);
	if(n % 2 == 0){
		printf("this is Even number :%d",n);
	}
	else {
		printf("this is odd number :%d",n);
	}
	
	return 0;
}
