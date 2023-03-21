#include <stdio.h>

int main()
{
	int p,c,m,t,mp;
	printf("Eligibility candidate :\n");
	printf("Mark in maths >=65 \n");
	printf("Mark in phy >=55\n");
	printf("mark in chem >=50\n");
	printf("and Total in all three  Subject >=190\n");
	printf("or Total in Maths and Physics >=140\n");
	printf("-----------------------------------------------------------\n");
		
	printf("Input the marks obtained in mathematics :");
	scanf("%d",&m);
	
	printf("Input the marks obtained in physics :");
	scanf("%d",&p);
	
	printf("Input the amrks obtained in chemistry :");
	scanf ("%d",&c);
	
	printf("Total marks of Maths, Physics and Chemistry : %d\n",m+p+c);
  	printf("Total marks of Maths and  Physics : %d\n",m+p);
	
		
	if(m>=65)
		if(p>=55)
			if(c>=50)
				if((m+p+c)>=190||(m+p)>=140)
					printf("The  candidate is eligible for admission.\n");
				else
					printf("The candidate is not eligible.\n");
			else
				printf("The candidate is not eligible.\n");
		else
			printf("The candidate is not eligible.\n");
	else
		printf("The candidate is not eligible.\n");
	
	return 0;
}
