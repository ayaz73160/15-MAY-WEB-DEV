// 12. Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
#include<math.h>

int main()
{
	int num,rem,power,count=0,sum;
	
	printf("\n Enter the number :- ");
	scanf("%d",&num);
	int copy1 = num;
	int copy2 = num;
	
	while(num!=0)
	{
		count++;
		num = num / 10;
	}
	
	while(copy1!=0)
	{
		rem = copy1%10;
		power = pow(rem,count);
		sum = sum + power;
		copy1 = copy1/10;
	}
	
	if(copy2==sum)
	{
		printf("%d is a amstrong number ",copy2);
	}
	else
	{
		printf("%d is a not amstrong number ",copy2);
	}
	
	return 0;
}
