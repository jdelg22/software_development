#include <cstdio>

void Floor( void )
{
	double hours = 0;
	double gross_income = 0;
	double net_income = 0;
	double withholding_percentage = 0;
	printf( "How many hours did it take to install the hardwood floor?\r\n" );
	scanf( "%lf", &hours);
	gross_income = hours * hours;
	printf( "what is the withholding percentage?\r\n" );
	scanf( "%lf ", withholding_percentage );
	net_income = gross_income * (100 - withholding_percentage) / 100;
	printf( "Your gross pay is %lf.", gross_income );
	printf( "Your net weekly pay is %lf.", net_income );

	return;
}