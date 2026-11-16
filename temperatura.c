#include <stdio.h> 

int main(void) {
	int temperatura = 25;
	printf("Temperatura: %d graus\n", temperatura);
	printf("Fahrenheit: %1.f graus\n", (float)temperatura * 9 / 5 + 32);
	return 0;
}
	
