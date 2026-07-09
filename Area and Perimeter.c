#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter length : ");
	scanf("%d",&a);
	
	printf("Enter Breath : ");
	scanf("%d",&b);
	
	printf("area of Rectangle %d ",a*b);
	
	printf(" \n Perimeter of Rectangle %d",2*(a+b));
	return 0;
}
