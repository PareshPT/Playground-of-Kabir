	#include <stdio.h>
	int main(){
				int arr[10], n, i, even = 0, odd = 0;
				printf("Enter how many integers you want(n<=10):");
				scanf("%d", &n);
				printf("Enter integers:\n");
				for(i = 0; i <= n-1; i++){
						scanf("%d", &arr[i]);
						}
				for(i = 0; i <= n-1; i++){
						if(arr[i]%2 == 0)
							even = even + 1;
						else
							odd = odd + 1;
						}
				printf("Number of even numbers in array is %d\n", even);
				printf("Number of odd numbers in array is %d\n", odd);
				return 0;
	}
