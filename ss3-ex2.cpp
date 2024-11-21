#include <stdio.h> 
int main(){
	float Celsius,Fahrenheit;
	printf("Nhap nhiet do theo do Celsius: ") ;
	scanf("%f" ,&Celsius) ;
	Fahrenheit = (Celsius * 9 / 5) + 32;
	printf("%.2f do Celsius bang %.2f do Fahrenheit.\n", Celsius, Fahrenheit);
	return 0; 
} 	
