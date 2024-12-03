#include <stdio.h>

int main (){
	
	int arr[5]= {3,8,4,1,7};
	int count =0;
	for (int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1;j++){
			count ++;
			if(arr[j]>arr[j+1]){
				int temp;
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("%d \n",count);
	for (int i=0;i<5;i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}

