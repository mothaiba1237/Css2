#include <stdio.h>

int main(){
	
	int num1 = 10; 
	int num2 = 50; 


	int sum = num1 + num2;        
	int difference = num1 - num2;  
	int product = num1 * num2;     
	float quotient;               
	
	if (num2 != 0){
	quotient = (float)num1 /num2 ;
	} else {
		printf("khong the chia cho 0!\n");
		quotient = 0.0f;
	}
	
	printf("tong cua %d va %d la: %d\n",num1 , num2 , sum );
	printf("hieu cua %d va %d la: %d\n",num1 , num2 , difference );
	printf("tich cua %d va %d la: %d\n",num1 , num2 , product );
	printf("thuong cua %d va %d la: %.2f\n",num1 , num2 , quotient );
	
	return 0;
}
