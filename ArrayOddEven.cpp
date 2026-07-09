#include<stdio.h>
int main(){
	int a[10],b[10],even[10],odd[10],e=0,o=0;
	for(int i=0; i<10; i++){
		printf("Enter value at index %d\t",i);
		scanf("%d",&a[i]);
	}
	for(int i=0; i<10; i++){
		if(a[i] % 2 == 0){
			even[e]=a[i];
			e++;
			}
			else{
				odd[o]=a[i];
				o++;
			}
	}
	printf("\nEVEN no:\t");
	for(int i=0; i<e; i++)
	{
		printf("%d\t",even[i]);
	}
	printf("\nODD no:\t");
	for(int i=0; i<o; i++)
	{
		printf("%d\t",odd[i]);
	}
	
	return 0;
	
}
