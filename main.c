#include <msp430.h> 

/**
 * main.c
 */
int sum(int a, int b)
{

    int sum = a + b;

    return sum;

}

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    int a = 0b1111111111111110;
    int b = 0b1000000000000000;
    int d;

    d = sum(a,b);

    while(1);



    return 0;
}
