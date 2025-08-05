	#include <stdio.h>
	int main(){
				int arr[10], n, i;
				printf("Enter how many integers you want(n<=10):");
				scanf("%d", &n);
				printf("Enter integers:\n");
				for(i = 0; i <= n-1; i++){
						scanf("%d", &arr[i]);
						}
				int temp = arr[0];
				for(i = 1; i <= n-1; i++){
						if(temp < arr[i])
							temp = arr[i];
						}		
				printf("largest of the given integers is %d", temp);
				return 0;
	}
