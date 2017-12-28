#include <cstdio>
#include <cstdlib>

void number (void)
{
	int number = 1;
	int temp_sum = 0;
	for (number = 1; number < 51; number = number + 1)
	{
		printf ("the number is %i \r\n", number);
		temp_sum = temp_sum + number;
		printf ("the sum is %i \r\n", temp_sum);
	}

	return; 
}