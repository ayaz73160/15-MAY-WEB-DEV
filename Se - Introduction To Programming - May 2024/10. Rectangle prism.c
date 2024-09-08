// 10. Find the area of a rectangle prism formula : A = 2(wl + hl +hw)

#include<stdio.h>
int main()
{
	int w,l,h;
	
	printf("Enter value of width:- ");
	scanf("%d",&w);
	
	printf("Enter value of length:- ");
	scanf("%d",&l);
	
	printf("Enter value of hight:- ");
	scanf("%d",&h);
	
	int A;
	
	A = 2*((w*l)+(h*l)+(h*w));
	
	printf("area of rectangle prism:- %d",A);
	
	return 0;
}
