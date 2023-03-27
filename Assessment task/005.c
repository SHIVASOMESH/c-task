#include<stdio.h>

int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	
	printf("\n\n\t\t\t\t\t\tMatrix Multiplication");
	
	printf("\n\n--------------------------------  Matrix: 1 -------------------------------\n\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter element :");
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n--------------------------------  Matrix: 2 ---------------------------------\n\n");
		
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter element :");
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n------------------------- Result : Multiplication	Matrix  -------------------------------\n\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]*b[i][j];
		}
	}

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}
