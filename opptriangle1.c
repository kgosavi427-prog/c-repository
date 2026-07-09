#include<stdio.h>
int main (){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(k=0;k>=4;k--){
		  	printf("\t");
		}
		for(j=5;j>=i;j--){
			printf("*\t");
		}
		printf("\n");
	}
	 return 0;	
	}


