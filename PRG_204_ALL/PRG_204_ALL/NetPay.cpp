#include <cstdio>

void Net_weekly_pay( void )
{
	double hourly_wage = 0;
	double hours = 0;
	double withholding_percentage = 0;
	double gross_income = 0;
	double net_income = 0;
	printf( "what is your hourly wage?\r\n" );
	scanf( "%lf", &hourly_wage );
	printf( "how many hours did you work?\r\n" );
	scanf( "%lf", &hours );
	gross_income = hourly_wage * hours;
	printf( "what is the withholding percentage?\r\n" );
	scanf( "%lf ", &withholding_percentage );
	net_income = gross_income * (100 - withholding_percentage) / 100;
	printf( "Your gross pay is %lf.", gross_income );
	printf( "Your net weekly pay is %lf.", net_income );

	return;
}

//hours(a) * rate(b) - withholding percentage(c) = X 