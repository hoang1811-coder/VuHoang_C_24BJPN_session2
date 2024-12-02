#include<stdio.h>
int main(){
	int x;
	int found = 0;
	int arr[5]={1,2,3,4,5};
	printf("hay nhap mot so nguyen bat ki de kiem tra xem co ton tai trong mang khong : ");
	scanf("%d", &x);
	for(int i=0; i < 5; i++){
		if(arr[i] == x){
			printf("phan tu %d ton tai va o vi tri %d ",x,i);
			found = 1;
			break;
		}
	}
	if(!found){
		printf("phan tu %d khong ton tai trong mang ",x);
	}
	
	return 0;
}
