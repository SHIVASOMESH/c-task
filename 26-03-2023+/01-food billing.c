#include<stdio.h>
#include<conio.h>

int main()
{
	int total;
	char ch1;
	printf("\n\n");
	printf("\t\t\t\t\t\tWelcome to Tops Restaurant");
	printf("\n\nThis is Menu Items");
	do{
		int a,b,c,d,e,f;
		printf("\n\n\n=======================  Welcome to Menu  =========================\n\n");
		printf("\n  1.Pizza       price = 180rs/pcs \n");
		printf("\n  2.Burger      price = 100rs/pcs \n");
		printf("\n  3.Dosa        price = 120rs/pcs \n");
		printf("\n  4.Idli        price = 50rs/pcs \n\n");
		
		printf("=======================================================================\n");
		
		printf("\nPlease Enter your choose...  : ");
		scanf("%d",&a);
		if(a==1){
			printf("\n\nYou have selected Pizza.");
			printf("\n\nEnter the quantity :");
			scanf("%d",&b);
			f=180*b;
			total=f+total;
			printf("\nTotal Amount is = %d",total);
		}
		else if(a==2){
			printf("\n\nYou have selected Burger.");
			printf("\n\nEnter the quantity :");
			scanf("%d",&c);
			f=100*c;
			total=f+total;
			printf("\nTotal Amount is = %d",total);
		}
		else if(a==3){
			printf("\n\nYou have selected Dosa.");
			printf("\n\nEnter the quantity :");
			scanf("%d",&d);
			f=120*d;
			total=f+total;
			printf("\nTotal Amount is = %d",total);
		}
		else if(a==4){
			printf("\n\nYou have selected Idli.");
			printf("\n\nEnter the quantity :");
			scanf("%d",&e);
			f=50*e;
			total=f+total;
			printf("\n\nTotal Amount is = %d",total);
		}
		else{
			printf("\nWroung Input");
		}
		printf("\n\nDo you want  place more order? (y/n) :");
		scanf("\n%c",&ch1);
	}while(ch1=='y');
	printf("\n\nTotal Bill: %d",total);
	
	
	
	return 0;
}
