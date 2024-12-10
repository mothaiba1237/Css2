#include <stdio.h>
 
int main(){
	const float pi = 3.14;
	
	float radius = 8;
	
	float circumference = 2 * pi * radius; 
	float area = pi * radius * radius;     
	
	printf("ban kinh hinh tron: %.2f cm\n", radius);
	printf("chu vi hinh tron: %.2f cm\n", circumference);
	printf("dien tich hinh tron: %.2f cm^2\n", area);
	
	return 0;
}
