#include <cstdio>
#include <cstdlib>
void Guess (void)
{
	int guess = 0;
	for( int i = 0; i < 10; i++ ) 
	{

		int draw = rand() % 10;
		printf( "%i\r\n", draw );
		printf ( " Pick a number from 0 to 9 \r\n " );
		scanf ( "%d", &guess );
		if (guess == draw)
		{ 
			printf ("You got it! \r\n" );
		}
		else if (guess < draw)
		{
			printf ("You guessed too low \r\n");
		}
		else (guess > draw);
		{
			printf ("You guessed too high \r\n");
		}
	}

}