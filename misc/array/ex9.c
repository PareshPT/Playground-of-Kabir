#include <stdio.h>
void bubblesort(int n, int arr[n]){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-2; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int binarysearch(int n, int arr[n], int low, int high, int x){
	while(low <= high){
		int mid = low + (high - low)/2;
		//checking x is mid or not
		if(arr[mid] == x){
			printf("%d is present in the array\n", x);
			return mid;
		}
		//checking x greater or smaller
		if(arr[mid] < x){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}

int main(){
	int n;
	printf("Enter the size of array:");
	scanf("%d", &n);
	int arr[n];
	printf("Enter value of array:");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int x;
	printf("Enter value to be checked:");
	scanf("%d", &x);
	bubblesort(n, arr[n]);
	binarysearch(n, arr[n], 0, n-1, x);
	return 0;
}
