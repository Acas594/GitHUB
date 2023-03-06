#include <stdio.h> 

int Choose(int number1, int number2)
{
	long long int n, m, x;
	n = 1;
	m = 1;
	x = 1;

	for (int a = 1; a < number1; a++) {
		n = n * (a + 1);
		
	}

	for (int b = 1; b < number2; b++) {
		m = m * (b + 1);
		
	}
	for (int c = 1; c < number1 - number2; c++) {
		x = x * (c + 1);
		
	}
	return (n / (m * x));
}


void main(void) {
 
	printf("%d", Choose(15, 2));
}
