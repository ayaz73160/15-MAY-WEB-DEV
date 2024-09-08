// 2. Write a program to make Simple calculator
//(to make addition, subtraction, multiplication, division & modulo)

#include<stdio.h>
int main()
{
	int a,b,ans;
	printf("Enter The Value of Number One:");
	scanf("%d",& a);
	printf("Enter The Value of Number Two:");
	scanf("%d",& b);
	
	
	ans=a+b;
	printf("answer:%d",ans);
	ans=a-b;
	printf("\nanswer:%d",ans);
    ans=a*b;
    printf("\nanswer:%d",ans);
	ans=a/b;
	printf("\nanswer:%d",ans);
	ans=a%b;
	printf("\nanswer:%d",ans);

	
	return 0;
}
