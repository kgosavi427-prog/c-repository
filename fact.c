#include<stdio.h>
int main(){
	int fact=1, i, num;
	
	printf("Enater the number\t");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		fact = fact*i;
	}
	printf("factorial is %d", fact);
	
	return 0;
}
