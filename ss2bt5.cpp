#include <stdio.h>

int main(){
	
	int length = 20;   
	int width =10;  

	int perimeter = 2* (length + width); 
	int area = length * width;          

	printf("chieu dai hcn: %d cm\n", length);
	printf("chieu rong hcn: %d cm\n", width);
	printf("chu vi hcn: %d cm\n", perimeter);
	printf("dien tich hcn: %d cm^2\n", area);
	
	return 0;
	}
