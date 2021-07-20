#include <stdio.h>
#include <math.h>

int main()
{
	double half_life=5730.0, age, C_remain, C_lost;
	clrscr();

	printf("How much carbon has been lost (0-100%%)? ");
	scanf("%lf", &C_lost);

	C_remain = 1.0 - (C_lost/100.0);

	age = -(half_life / log10(2.0)) * log10(C_remain);

	printf("The object is %lf years old.\n", age);
	getch();
	return 0;
}