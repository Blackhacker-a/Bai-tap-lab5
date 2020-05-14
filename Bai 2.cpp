#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen duong n ");
	scanf("%d",&n);
	float sum=0;
	for(int i=1;i<=n;i++){
	    sum+=(float)1/i;
 	}
 	printf("Tong S la %f",sum);
}
