#include <stdio.h>

int main()
{
    printf("--------------------------------\n");
	int i = 0;
	for (i; i < 301; i+= 10)
	{
		int Fahrenheit = i;
		float Celsius = ( 5.0 / 9.0 ) * (Fahrenheit - 32) ;
		printf("Fahrenheit %d \t Celcius %.2f  \n", Fahrenheit, Celsius);
		
	}
}
