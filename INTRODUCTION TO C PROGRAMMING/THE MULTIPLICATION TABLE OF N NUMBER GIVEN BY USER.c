// WAP IN C TO MAKE THE MULTIPLICATION TABLE OF N NUMBER GIVEN BY USER

#include<stdio.h>
int main(){
	int i,n;
	printf("ENTER THE VALUE OF N :");
	scanf("%d", &n);
	for(i=1;i<=10;i++){
		printf("%d*%d=%d\n",n,i,n*i);
	}
	
}
