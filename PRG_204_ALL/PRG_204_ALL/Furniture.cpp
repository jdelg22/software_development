#include <cstdio>

void Furniture (void) 
{
	char wood = 0;
	double pine = 100;
	double oak = 225;
	double mahogany = 310;
	printf ( "What type of wood would you like (P, O, or M)? \r\n");
	scanf ( "%c", &wood );
	if ( wood == 'P' )
	{
		printf ( "You've selected wood type is Pine and the price is 100", wood );
	}
	else if ( wood == 'O' )
	{
		printf ( "You've selected wood type is Pine and the price is 225", wood );
	}
	if ( wood == 'M' )
	{
		printf ( "You've selected wood type is Pine and the price is 310", wood );
	}
	
}
