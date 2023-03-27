#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	printf("Enter the string :");
	scanf("%s",str1);
	str1[2]='h';
//	scanf("%c",str1);
	printf("%s\n",str1);
	printf("%d\n",strlen(str1));
	
	
	return 0;
}
