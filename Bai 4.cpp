#include<stdio.h>
int main(){
    int n;
    printf("Nhap vao so nguyen duong n ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
    	if(n%i==0){
		   printf("n khong la so nguyen to");
		break;
        }
        else{
           printf("n la so nguyen to");
		   break;	
		}
       
        }
    
    










}  
