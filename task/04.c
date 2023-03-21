#include <stdio.h>

int main()
{
	int n;
	printf("Enter the leap year are not : ");
	scanf("%d",&n);
	if(n % 400 == 0){
		printf("this is leap year :%d",n);
	}
	else if(n % 100 == 0){
		printf("this is not leap year :%d",n);
	}
	else if(n % 4 == 0){
		printf("this is leap year :%d",n);
	}
	else{
		printf("this is not leap year :%d",n);
	}
	
	return 0;
}
