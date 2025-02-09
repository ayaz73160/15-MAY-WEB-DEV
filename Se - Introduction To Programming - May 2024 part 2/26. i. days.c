// 19. Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//20. Unit 21. Charge/unit
//22. upto 350 23. @1.20
//24. 350 and above but less than 600 25. @1.50
//26. 600 and above but less than 800 27. @1.80
//28. 800 and above 29. @2.00
//Topics Covered
//Looping Statements
//Conditional Statements
//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-
#include<stdio.h>
int main()
{
	int id;
	char name;
	float units,amount,surcharge;
	
	printf("Enter customer id:- ");
	scanf("%d",&id);
	
	printf("Enter customer name:- ");
	scanf("%c",&name);
	
	printf("Enter unit consumed by user:- ");
	scanf("%f",&units);
	
	if(units <= 350)
	{
		amount =units * 1.20;
	}	
	else if(units < 600)
	{
		amount = 350 * 1.20 + (units - 350) * 1.50;
	}
	else if(units < 800)
	{
		amount = 350 * 1.20 + 250 * 1.50 + (units - 600) * 1.80;
	}
	else
	{
		amount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (units - 800) * 2.00;	
	}
	
	if(amount > 800)
	{
		surcharge = amount * 0.18;
		amount += surcharge;
	}
	
	if(amount > 256)
	{
		amount = 265;
	}
	
    printf("\nCustomer ID: %d\n", id);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount: Rs. %.2f\n", amount);
	
	return 0;	
}
