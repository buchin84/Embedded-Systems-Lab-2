#include <msp430.h> 


/**
 * main.c
 */

float b = 5;
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	int a = 3;
	a+=1;
	b-=1;

	unsigned char c = 0x0f;
	unsigned char d = 0x5;

	unsigned char e;
	unsigned char f;

	e = c & d;
	f = c | d;
	return 0;
}
