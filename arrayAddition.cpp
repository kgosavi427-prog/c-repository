#include<stdio.h>
int main(){
	int a[5]={11,12,13,14,15};
	int b[5]={91,81,71,61,15};
	 int c[5];
	for(int i=0; i<=4; i++){
		c[i]=a[i]+b[i];
	}
	for(int i=0;i<=4;i++){
	printf("Addition of two array is %d\n", c[i]);
}
	

return 0;
	
	
	
}
