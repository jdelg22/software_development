#include <cstdio>

void Floor( void )
{
	double completed_hours = 0;
	double remaining_hours = 0;
	double full_pay = 0;
	double partial_pay = 0;
	double total_pay = 0;
	printf( "How many 8 hours days did it take to install hardwood floors?\r\n" );
	scanf( "%lf", &completed_hours);
	printf( "How many hours did it take on the last day?\r\n" );
	scanf( "%lf", &remaining_hours );
	full_pay= 200 * completed_hours;
	partial_pay= 50 * remaining_hours;
	total_pay= full_pay + partial_pay;
	printf( "Your total cost would be %lf.\r\n" , total_pay);  
	return;
}