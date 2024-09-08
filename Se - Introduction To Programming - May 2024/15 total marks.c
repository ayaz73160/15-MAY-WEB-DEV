// 15. Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include<stdio.h>
int main()
{
	int total_sub,maths,physics,chemistry,total_maths_physics;
	
	printf("Enter the marks of a Maths:- ");
	scanf("%d",&maths);
	printf("Enter the marks of a physics:- ");
	scanf("%d",&physics);
	printf("Enter the marks of a chemistry:- ");
	scanf("%d",&chemistry);
	
	total_sub = maths + physics + chemistry;
	printf("total of three subject %d\n",total_sub);
	total_maths_physics =maths + physics;
	printf("total of two subject %d\n\n",total_maths_physics);
	
	if(maths >= 65 && physics >= 55 && chemistry >= 50 && (total_sub >= 190 || total_maths_physics >= 140)) 
	{
        printf("The candidate is eligible for admission.\n");
    } 
	else 
	{
        printf("The candidate is not eligible for admission.\n");
	}
}
