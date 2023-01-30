#include<stdio.h>
#include<conio.h>

main()
{
	int item;
	float r,ta;
	printf("Enter the number of item: ");
	scanf("%d",&item);
	printf("Enter the rate of an item: ");
	scanf("%f",&r);
	ta=item*r;
	printf("The total amount is Rs. %f",&ta);
	getch();
}
