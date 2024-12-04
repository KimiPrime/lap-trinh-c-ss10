#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5},i=0,num,mid,start=0,end=5-1,flag=-1;
	printf("vui long nhap so can tim: ");
	scanf("%d",&num);
	while(i<5){
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]>num){
			end=mid-1;
		}else if(arr[mid]<num){
			start=mid+1;
		}else{
			printf("phan tu o vi tri %d\n",mid); 
			flag=0;
			break; 
		}
	}
	if(flag){
		printf("khong co phan tu trong mang");
	}
	return 0;
}
