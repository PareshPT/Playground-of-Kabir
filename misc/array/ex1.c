#include <stdio.h>

void armstrong(int num){
	int sum = 0;
	for(int i = num; i > 0;){
		sum = sum + (i%10)*(i%10)*(i%10);
		i = i/10;
	}
	if(sum == num){
		printf("Armstrong number");
	}
	else{
		printf("Not armstrong");
	}
}

int main(){
	int num;
	printf("input the integer:");
	scanf("%d", &num);
	armstrong(num);
	return 0;
}
