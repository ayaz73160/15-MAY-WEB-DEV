/*
9. Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
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
	

	printf("Enter The Number of Employee :- ");
	scanf("%d",&emp.empno);
		
	printf("Enter The Name of Employee :- ");
	getchar();
	fgets(emp.empname,sizeof(emp.empname),stdin);
		
	printf("Enter The Address :- ");
	fgets(emp.address,sizeof(emp.address),stdin);
		
	printf("Enter The age :- ");
	scanf("%d",&emp.age);

	
	printf("\n Employee no :- %d",emp.empno);
	printf("\n Employee name :- %s",emp.empname);
	printf("\n Employee Address :- %s",emp.address);
	printf("\n Employee Age :- %d",emp.age);
	
	return 0;
}
