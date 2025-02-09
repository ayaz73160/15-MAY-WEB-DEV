// 21. Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
int main()
{
	int b_salary,g_salary,HRA,DA;
	printf("Enter employee salary:- ");
	scanf("%d",&b_salary);
	
	if(b_salary<=10000)
	{
		HRA = b_salary * 0.20;
		DA = b_salary * 0.80;
	}
	else if(b_salary<=20000)
	{
		HRA = b_salary * 0.25;
		DA = b_salary * 0.90;
	}
	else
	{
		HRA = b_salary * 0.30;
		DA = b_salary * 0.95;
	}
	
	g_salary = b_salary + HRA + DA;
	printf("employee gross salary is %d",g_salary);
	
	return 0;
}
