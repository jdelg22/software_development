
#include <cstdio>

void Lunch( void )
{
	double lunch_amount = 0;
	printf( "how much do you want to spend for lunch?\r\n" );
	scanf( "%lf", &lunch_amount );
	printf( "The price of the lunch is %lf dollars.", lunch_amount );
	return;
}