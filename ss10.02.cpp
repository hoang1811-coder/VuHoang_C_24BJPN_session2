#include<stdio.h>
int main(){
	int arr[]={34,56,75,43,22,87,90,63};
	int n = sizeof(arr)/sizeof(int);
	printf("Mang khi chua sap xep : ");
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1;j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nMang sau khi da duoc sap xep la : ");
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	
	return 0;
}
