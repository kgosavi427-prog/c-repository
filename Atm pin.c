#include<stdio.h>
int main(){
	int pin=1101,E;
	printf("Enter ATM Pin :  ");
	scanf("%d",&E);
	
	if(E==pin){
		printf("You Can Withdraw Cash");}
		
		else {
			printf("\tIncorrect Pin");
		}
	return 0;
}
