#include <cstdio>

void Furniture (void) 
{
	char wood = 0;
	double pine = 100;
	double oak = 225;
	double mahogany = 310;
	printf ( "What type of wood would you like (P, O, or M)? \r\n");
	scanf ( "%c", &wood );
	printf("You've selected wood type %c\r\n", wood );
}
