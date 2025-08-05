	#include <stdio.h>
	int main(){
				int arr[10], n, i, j;
				printf("Enter how many integers you want(n<=10):");
				scanf("%d", &n);
				printf("Enter integers:\n");
				for(i = 0; i <= n-1; i++){
						scanf("%d", &arr[i]);
						}
				for(j = 0; j <= n/2; j++)
					{for(i = 0; i < n-1; i++)
						{
							int temp;
							if(arr[i] > arr[i+1])
								{
									temp = arr[i+1];
									arr[i+1] = arr[i];
									arr[i] = temp;
								}
						}
					}
				printf("second largest integer in the array is %d", arr[n-2]);
				printf("second smallest integer in the array is %d", arr[1]);
				return 0;
	}
