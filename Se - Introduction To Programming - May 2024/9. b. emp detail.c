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
		printf("Enter The Number of Employee :- ");
		scanf("%d",&emp.empno);
		
		printf("Enter The Name of Employee :- ");
		getchar();
		fgets(emp.empname,sizeof(emp.empname),stdin);
		
		printf("Enter The Address :- ");
		fgets(emp.address,sizeof(emp.address),stdin);
		
		printf("Enter The age :- ");
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
