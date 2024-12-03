#include <stdio.h>

int main(){
	
	int arr[5]={9,6,4,9,5},i=0,count=0,num,index[5];
	printf("[ 9,6,4,9,5 ] \n");
	printf("vui long nhap vao gia tri muon kiem tra: ");
	scanf("%d",&num);
	while(i<5){
		if(arr[i]==num){
			index[count]=i;
			count++;
		}
		i++;
	}
	if(count){
		i=0;
		printf("so xuat hien o vi tri: ");
		while(i<count){
			printf("%d ",index[i]);
			i++;
		}
		
	}else{
	
	printf("so khong ton tai trong mang");}
	
	return 0;
}
