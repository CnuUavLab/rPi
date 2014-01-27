#include <stdio.h>
#include <wiringPi.h>

#define inputPin 7

int main()
{
	if(wiringPiSetup() == -1)
	{
		printf("Wiring PI setup failed!");
		exit(-1);
	}

	pinMode(inputPin, INPUT);
	printf("Pin %d input: %d\n", inputPin, digitalRead(inputPin));

	return 0;
}
