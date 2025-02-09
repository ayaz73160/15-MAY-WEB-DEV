/*
9. Write a program of structure employee that provides the following
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage
*/

#include<stdio.h>

struct Employee
{
	int empno;
	char empname[100];
	char address[100];
	int age;
};

int main()
{
	struct Employee emp; 
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Number of Employee :- ");
		scanf("%d",&emp.empno);
		
		printf("Enter Name of Employee :- ");
		getchar();
		fgets(emp.empname,sizeof(emp.empname),stdin);
		
		printf("Enter Address :- ");
		fgets(emp.address,sizeof(emp.address),stdin);
		
		printf("Enter age :- ");
		scanf("%d",&emp.age);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nEmployee no :- %d",emp.empno);
		printf("\nEmployee name :- %s",emp.empname);
		printf("\nEmployee Address :- %s",emp.address);
		printf("\nEmployee Age :- %d",emp.age);
	}
	
	
	return 0;
	
}
